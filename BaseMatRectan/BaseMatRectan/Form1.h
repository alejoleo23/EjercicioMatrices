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
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ListBox^  lstMATRIZ;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txtfilas;
	private: System::Windows::Forms::TextBox^  txtcolumnas;
	private: System::Windows::Forms::TextBox^  txtresultado;
	private: System::Windows::Forms::Button^  btncargarmat;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lstMATRIZ = (gcnew System::Windows::Forms::ListBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtfilas = (gcnew System::Windows::Forms::TextBox());
			this->txtcolumnas = (gcnew System::Windows::Forms::TextBox());
			this->txtresultado = (gcnew System::Windows::Forms::TextBox());
			this->btncargarmat = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"N° FILAS:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(135, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"N° COLUMNAS:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"MATRIZ";
			// 
			// lstMATRIZ
			// 
			this->lstMATRIZ->FormattingEnabled = true;
			this->lstMATRIZ->ItemHeight = 20;
			this->lstMATRIZ->Location = System::Drawing::Point(17, 132);
			this->lstMATRIZ->Name = L"lstMATRIZ";
			this->lstMATRIZ->Size = System::Drawing::Size(213, 144);
			this->lstMATRIZ->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 302);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(209, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"LINEA DE RESULTADO:";
			// 
			// txtfilas
			// 
			this->txtfilas->Location = System::Drawing::Point(141, 22);
			this->txtfilas->Name = L"txtfilas";
			this->txtfilas->Size = System::Drawing::Size(100, 26);
			this->txtfilas->TabIndex = 5;
			// 
			// txtcolumnas
			// 
			this->txtcolumnas->Location = System::Drawing::Point(154, 62);
			this->txtcolumnas->Name = L"txtcolumnas";
			this->txtcolumnas->Size = System::Drawing::Size(100, 26);
			this->txtcolumnas->TabIndex = 6;
			// 
			// txtresultado
			// 
			this->txtresultado->Location = System::Drawing::Point(228, 296);
			this->txtresultado->Name = L"txtresultado";
			this->txtresultado->Size = System::Drawing::Size(100, 26);
			this->txtresultado->TabIndex = 7;
			// 
			// btncargarmat
			// 
			this->btncargarmat->Location = System::Drawing::Point(324, 12);
			this->btncargarmat->Name = L"btncargarmat";
			this->btncargarmat->Size = System::Drawing::Size(142, 75);
			this->btncargarmat->TabIndex = 8;
			this->btncargarmat->Text = L"CARGAR MATRIZ";
			this->btncargarmat->UseVisualStyleBackColor = true;
			this->btncargarmat->Click += gcnew System::EventHandler(this, &Form1::btncargarmat_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(532, 331);
			this->Controls->Add(this->btncargarmat);
			this->Controls->Add(this->txtresultado);
			this->Controls->Add(this->txtcolumnas);
			this->Controls->Add(this->txtfilas);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->lstMATRIZ);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->Name = L"Form1";
			this->Text = L"OPERACIONES CON MATRIZ RECTANGULAR";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btncargarmat_Click(System::Object^  sender, System::EventArgs^  e) {
		OPERACIONES OP;
		OP.filas = Convert::ToInt16(txtfilas->Text);
		OP.columnas = Convert::ToInt16(txtcolumnas->Text);
		OP.CargarMatriz(matriz, OP.filas, OP.columnas, OP.columnas);
		lstMATRIZ->Items->Clear();
		for (int f = 1; f <= OP.filas; f++)
		{
			String^ xLinea = "";
			for (int c = 1; c <= OP.columnas; c++)
				xLinea += ((matriz[f][c] < 10) ? "0" : "") + Convert::ToString(matriz[f][c]) + " ";
			lstMATRIZ->Items->Add(xLinea);
		}
	}
};
}
