#pragma once
#include "Sounds.h"
#include <iostream>
#include <conio.h>
#include <fstream>
namespace kurs {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::Media;

	public ref class MyForm : public System::Windows::Forms::Form {
	public:
		MyForm(void) { InitializeComponent(); }

	protected:
		~MyForm() {	if (components) { delete components; } }

	public:
		Sounds sounds;
		int k;
		System::Windows::Forms::PictureBox^ pictureBox1;
		System::Windows::Forms::Button^ button1;
		System::Windows::Forms::Button^ button2;
		System::Windows::Forms::Button^ button3;
		System::Windows::Forms::Button^ button4;
		System::Windows::Forms::Button^ button5;
		System::Windows::Forms::Button^ button6;
		System::Windows::Forms::Button^ button7;
		System::Windows::Forms::Button^ button8;
		System::Windows::Forms::Button^ button9;
		System::Windows::Forms::Button^ button10;
		System::Windows::Forms::Button^ button11;
		System::Windows::Forms::Button^ button12;
		
		System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
		System::Windows::Forms::ToolStripMenuItem^ ‰ÂÏÓToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ firstMelodyToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ Í‡‡‚‡ÈToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ Ò‚Ó·Ó‰Ì˚È–ÂÊËÏToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
		System::Windows::Forms::MenuStrip^ menuStrip1;
		System::Windows::Forms::ToolStripMenuItem^ Á‡Í˚Ú¸œÓ„‡ÏÏÛToolStripMenuItem;
		System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void);

#pragma endregion
	public:

		System::Void MyForm_KeyDown_FirstMelody(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
		System::Void MyForm_KeyDown_SecondMelody(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);

		System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
		System::Void MyForm_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);

		System::Void toolStripMenuItem2_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
		System::Void firstMelodyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Í‡‡‚‡ÈToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Ò‚Ó·Ó‰Ì˚È–ÂÊËÏToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Á‡Í˚Ú¸œÓ„‡ÏÏÛToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};

	ref class Help : public MyForm {
	public:
		Keys Key(string* arr, int k);
		Void back_color_main(MyForm ^t, string* arr, int k);
		Void back_color_next(MyForm^ t, string* arr, int k);
		Void clear(MyForm^ t);
	};

	ref class Clicks : public MyForm {
	public:
		Void ClicksHandler(MyForm^ t, KeyEventArgs^ e);
	};
}