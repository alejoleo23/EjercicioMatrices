#pragma once
#include "OPERACIONES.h";
static int matriz[50][50];

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ListBox^  lstMATRIZTRIDI;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  btncargamat;
	private: System::Windows::Forms::TextBox^  txtorden;
	private: System::Windows::Forms::TextBox^  txtresultado;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lstMATRIZTRIDI = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btncargamat = (gcnew System::Windows::Forms::Button());
			this->txtorden = (gcnew System::Windows::Forms::TextBox());
			this->txtresultado = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(148, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ORDEN MATRIZ:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(201, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"MATRIZ TRIDIAGONAL";
			// 
			// lstMATRIZTRIDI
			// 
			this->lstMATRIZTRIDI->FormattingEnabled = true;
			this->lstMATRIZTRIDI->ItemHeight = 20;
			this->lstMATRIZTRIDI->Location = System::Drawing::Point(32, 101);
			this->lstMATRIZTRIDI->Name = L"lstMATRIZTRIDI";
			this->lstMATRIZTRIDI->Size = System::Drawing::Size(226, 164);
			this->lstMATRIZTRIDI->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(28, 285);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(209, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"LINEA DE RESULTADO:";
			// 
			// btncargamat
			// 
			this->btncargamat->Location = System::Drawing::Point(354, 12);
			this->btncargamat->Name = L"btncargamat";
			this->btncargamat->Size = System::Drawing::Size(131, 60);
			this->btncargamat->TabIndex = 4;
			this->btncargamat->Text = L"CARGAR MATRIZ";
			this->btncargamat->UseVisualStyleBackColor = true;
			this->btncargamat->Click += gcnew System::EventHandler(this, &Form1::btncargamat_Click);
			// 
			// txtorden
			// 
			this->txtorden->Location = System::Drawing::Point(209, 25);
			this->txtorden->Name = L"txtorden";
			this->txtorden->Size = System::Drawing::Size(100, 26);
			this->txtorden->TabIndex = 5;
			// 
			// txtresultado
			// 
			this->txtresultado->Location = System::Drawing::Point(259, 282);
			this->txtresultado->Name = L"txtresultado";
			this->txtresultado->Size = System::Drawing::Size(100, 26);
			this->txtresultado->TabIndex = 6;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(656, 314);
			this->Controls->Add(this->txtresultado);
			this->Controls->Add(this->txtorden);
			this->Controls->Add(this->btncargamat);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lstMATRIZTRIDI);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->Name = L"Form1";
			this->Text = L"OPERACIONES MATRIZ TRIDIAGONAL";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btncargamat_Click(System::Object^  sender, System::EventArgs^  e) {
		OPERACIONES OP;
		OP.orden = Convert::ToInt16(txtorden->Text);
		if (OP.orden >2)
		{
			OP.CargaMatrizTridiagonal(matriz, OP.orden, OP.orden, OP.orden);
			lstMATRIZTRIDI->Items->Clear();
			for (int f = 1; f <= OP.orden; f++)
			{
				String^ xLinea = "";
				for (int c = 1; c <= OP.orden; c++)
					xLinea += ((matriz[f][c] < 10) ? "0" : "") + Convert::ToString(matriz[f][c]) + " ";
				lstMATRIZTRIDI->Items->Add(xLinea);
			}
		}
		else
			MessageBox::Show("Ingresa un numero entero positivo mayor a 2 pe", "CUADRO DE ERROR");
	}
};
}
