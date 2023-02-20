#pragma once
#include "OPERACIONES.h"
static int vector[50];
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
	private: System::Windows::Forms::TextBox^  txttamvector;
	private: System::Windows::Forms::ListView^  lstvector;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtresultado;
	private: System::Windows::Forms::Button^  btncargardatos;

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
			this->txttamvector = (gcnew System::Windows::Forms::TextBox());
			this->lstvector = (gcnew System::Windows::Forms::ListView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtresultado = (gcnew System::Windows::Forms::TextBox());
			this->btncargardatos = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(164, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"TAMAÑO VECTOR:";
			// 
			// txttamvector
			// 
			this->txttamvector->Location = System::Drawing::Point(201, 25);
			this->txttamvector->Name = L"txttamvector";
			this->txttamvector->Size = System::Drawing::Size(100, 20);
			this->txttamvector->TabIndex = 1;
			// 
			// lstvector
			// 
			this->lstvector->Location = System::Drawing::Point(30, 68);
			this->lstvector->Name = L"lstvector";
			this->lstvector->Size = System::Drawing::Size(146, 157);
			this->lstvector->TabIndex = 2;
			this->lstvector->UseCompatibleStateImageBehavior = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(26, 266);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(209, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"LINEA DE RESULTADO:";
			// 
			// txtresultado
			// 
			this->txtresultado->Location = System::Drawing::Point(252, 266);
			this->txtresultado->Name = L"txtresultado";
			this->txtresultado->Size = System::Drawing::Size(100, 20);
			this->txtresultado->TabIndex = 4;
			// 
			// btncargardatos
			// 
			this->btncargardatos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btncargardatos->Location = System::Drawing::Point(343, 13);
			this->btncargardatos->Name = L"btncargardatos";
			this->btncargardatos->Size = System::Drawing::Size(176, 49);
			this->btncargardatos->TabIndex = 5;
			this->btncargardatos->Text = L"CARGAR DATOS";
			this->btncargardatos->UseVisualStyleBackColor = true;
			this->btncargardatos->Click += gcnew System::EventHandler(this, &Form1::btncargardatos_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(568, 316);
			this->Controls->Add(this->btncargardatos);
			this->Controls->Add(this->txtresultado);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lstvector);
			this->Controls->Add(this->txttamvector);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"BASE VECTOR";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btncargardatos_Click(System::Object^  sender, System::EventArgs^  e) {
		OPERACIONES OP;
		OP.tamaño = Convert::ToInt16(txttamvector->Text);
		OP.CargarVector(vector, OP.tamaño);
		lstvector->Items->Clear();
		for (int i=1; i <=OP.tamaño; i++)
		{
			lstvector->Items->Add(Convert::ToString(vector[i]));
		}
	}
};
}
