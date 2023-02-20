#pragma once
#include "OPERACIONES.h"
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
	private: System::Windows::Forms::TextBox^  txtorden;
	private: System::Windows::Forms::Button^  btncargarmat;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txtresultado;
	private: System::Windows::Forms::ListBox^  lstMATRIZ;

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
			this->txtorden = (gcnew System::Windows::Forms::TextBox());
			this->btncargarmat = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtresultado = (gcnew System::Windows::Forms::TextBox());
			this->lstMATRIZ = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(205, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ORDEN DE LA MATRIZ:";
			// 
			// txtorden
			// 
			this->txtorden->Location = System::Drawing::Point(239, 22);
			this->txtorden->Name = L"txtorden";
			this->txtorden->Size = System::Drawing::Size(111, 20);
			this->txtorden->TabIndex = 1;
			// 
			// btncargarmat
			// 
			this->btncargarmat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btncargarmat->Location = System::Drawing::Point(395, 19);
			this->btncargarmat->Name = L"btncargarmat";
			this->btncargarmat->Size = System::Drawing::Size(134, 54);
			this->btncargarmat->TabIndex = 2;
			this->btncargarmat->Text = L"CARGAR MATRIZ";
			this->btncargarmat->UseVisualStyleBackColor = true;
			this->btncargarmat->Click += gcnew System::EventHandler(this, &Form1::btncargarmat_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"MATRIZ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 287);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(209, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"LINEA DE RESULTADO:";
			// 
			// txtresultado
			// 
			this->txtresultado->Location = System::Drawing::Point(239, 289);
			this->txtresultado->Name = L"txtresultado";
			this->txtresultado->Size = System::Drawing::Size(111, 20);
			this->txtresultado->TabIndex = 6;
			// 
			// lstMATRIZ
			// 
			this->lstMATRIZ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lstMATRIZ->FormattingEnabled = true;
			this->lstMATRIZ->ItemHeight = 18;
			this->lstMATRIZ->Location = System::Drawing::Point(16, 116);
			this->lstMATRIZ->Name = L"lstMATRIZ";
			this->lstMATRIZ->Size = System::Drawing::Size(244, 148);
			this->lstMATRIZ->TabIndex = 7;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(541, 326);
			this->Controls->Add(this->lstMATRIZ);
			this->Controls->Add(this->txtresultado);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btncargarmat);
			this->Controls->Add(this->txtorden);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"OPERACIONES CON MATRIZ CUADRADA";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btncargarmat_Click(System::Object^  sender, System::EventArgs^  e) {
		OPERACIONES OP;
		OP.orden = Convert::ToInt16(txtorden->Text);
		OP.CargarMatriz(matriz, OP.orden, OP.orden, OP.orden);
		lstMATRIZ->Items->Clear();
		for (int f = 1; f <= OP.orden; f++)
		{
			String^ xLinea = "";
			for (int c = 1; c <= OP.orden; c++)
				xLinea += ((matriz[f][c] < 10) ? "0" : "") + Convert::ToString(matriz[f][c]) + " ";
			lstMATRIZ->Items->Add(xLinea);
		}
	}
};
}
