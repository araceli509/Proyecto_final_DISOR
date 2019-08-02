#pragma once
#include "FIBONACCI.h"

namespace interfazFIBONACI {

	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
		NumeroFibonacci fibonacci= NumeroFibonacci();
	
	NumeroFibonacci _NumeroFibonacci;

	

	/// <summary>
	/// Resumen de FormFibonacii
	/// </summary>
	public ref class FormFibonacii : public System::Windows::Forms::Form
	{
	public:
		FormFibonacii(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~FormFibonacii()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox6;

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(788, 22);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 45);
			this->button1->TabIndex = 0;
			this->button1->Text = L"numero anterior";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormFibonacii::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(204, 31);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(238, 26);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &FormFibonacii::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(69, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"numero fibonaci :";
			this->label1->Click += gcnew System::EventHandler(this, &FormFibonacii::label1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(204, 80);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(238, 26);
			this->textBox2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(69, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"numero de ulam:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(564, 22);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(176, 45);
			this->button2->TabIndex = 1;
			this->button2->Text = L"numero siguiente";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FormFibonacii::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(90, 208);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Binario:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(218, 208);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 26);
			this->textBox3->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(90, 264);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Decimal:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(218, 258);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 26);
			this->textBox4->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(90, 312);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(104, 20);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Hexadecimal:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(218, 312);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 26);
			this->textBox5->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(40, 133);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(154, 20);
			this->label6->TabIndex = 12;
			this->label6->Text = L"numero de padovan:";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(204, 133);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(238, 26);
			this->textBox6->TabIndex = 13;
			// 
			// FormFibonacii
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1192, 526);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"FormFibonacii";
			this->Text = L"FormFibonacii";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		int numero;
		String^ nombre;

		String^ nombre2;
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		   
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 		
		
             fibonacci.avanzar();
             fibonacci.println();
		 }



private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		this
	
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
