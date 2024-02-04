#include<string>
#include <msclr\marshal_cppstd.h>


#pragma once

namespace $safeprojectname$ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Qaim_Calculator
	/// </summary>
	public ref class Qaim_Calculator : public System::Windows::Forms::Form
	{
	public:
		Qaim_Calculator(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Qaim_Calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(31, 55);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(95, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Qaim_Calculator::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Qaim_Calculator::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(163, 55);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 1;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Qaim_Calculator::textBox2_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(313, 55);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(282, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(14, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(132, 61);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(14, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"+";
			this->label4->Click += gcnew System::EventHandler(this, &Qaim_Calculator::label4_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(51, 107);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 48);
			this->button2->TabIndex = 8;
			this->button2->Text = L"+";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Qaim_Calculator::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(51, 203);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 48);
			this->button3->TabIndex = 9;
			this->button3->Text = L"x";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Qaim_Calculator::button3_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(163, 203);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 48);
			this->button5->TabIndex = 11;
			this->button5->Text = L"/";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Qaim_Calculator::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(313, 203);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 48);
			this->button6->TabIndex = 12;
			this->button6->Text = L"Calculate";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Qaim_Calculator::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(313, 107);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 48);
			this->button7->TabIndex = 13;
			this->button7->Text = L"Clear";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Qaim_Calculator::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(163, 107);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 48);
			this->button8->TabIndex = 14;
			this->button8->Text = L"-";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Qaim_Calculator::button8_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 12, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Strikeout)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(106, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(208, 25);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Simple Calculator";
			this->label2->Click += gcnew System::EventHandler(this, &Qaim_Calculator::label2_Click);
			// 
			// Qaim_Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(440, 342);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"Qaim_Calculator";
			this->Text = L"Qaim_Calculator";
			this->Load += gcnew System::EventHandler(this, &Qaim_Calculator::Qaim_Calculator_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Qaim_Calculator_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	label4->Text = "+";
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	label4->Text = "-";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	label4->Text = "x";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	label4->Text = "/";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	double val1 = std::stod(msclr::interop::marshal_as<std::string>(textBox1->Text));//op1
	std::string val2 = (msclr::interop::marshal_as<std::string>(label4->Text));//symbol
	double val3 = std::stod(msclr::interop::marshal_as<std::string>(textBox2->Text));//op2
	if (val2 == "+")
		textBox3->Text = ""+(val1 + val3);
	else if(val2=="-")
		textBox3->Text = "" + (val1 - val3);
	else if(val2=="x")
		textBox3->Text = "" + (val1 * val3);
	else if (val2 == "/")
	{
		if (val3 == 0)
			textBox3->Text = "Infinity";
		else
			textBox3->Text = "" + (val1 / val3);
	}

}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	 
}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	//Allow digits, decimal point, and backspace
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != '.' && e->KeyChar != 8)
	{
		// Cancel the keypress if it's not a digit, decimal point, or backspace
		e->Handled = true;
	}

	// Allow only one decimal point
	if (e->KeyChar == '.' && textBox1->Text->Contains("."))
	{
		e->Handled = true;
	}
}
private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	//Allow digits, decimal point, and backspace
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != '.' && e->KeyChar != 8)
	{
		// Cancel the keypress if it's not a digit, decimal point, or backspace
		e->Handled = true;
	}

	// Allow only one decimal point
	if (e->KeyChar == '.' && textBox1->Text->Contains("."))
	{
		e->Handled = true;
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	label4->Text = "";
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
