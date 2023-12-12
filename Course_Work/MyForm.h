#pragma once
#include <msclr/marshal_cppstd.h>
#include "MyClass.h"
#include <iostream>

namespace CourseWork {

	using namespace msclr::interop; //
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Imaging;
	//using namespace System::Runtime::InteropServices; //

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: DrawingManager* drawingManager;

	private: System::Windows::Forms::Button^ button_plus;
	private: System::Windows::Forms::Button^ button_minus;
	private: System::Windows::Forms::Button^ button_delete;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button_square;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button_connection_3;
	private: System::Windows::Forms::Button^ button_connection_1;
	private: System::Windows::Forms::Button^ button_connection_2;
	private: System::Windows::Forms::Button^ button_text;
	private: System::Windows::Forms::Button^ button_parallelogram;
	private: System::Windows::Forms::Button^ button_trapezoid;
	private: System::Windows::Forms::Button^ button_key;
	private: System::Windows::Forms::Button^ button_oval;
	private: System::Windows::Forms::Button^ button_hexagon;
	private: System::Windows::Forms::Button^ button_rhombus;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button_plus = (gcnew System::Windows::Forms::Button());
			this->button_minus = (gcnew System::Windows::Forms::Button());
			this->button_delete = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button_connection_3 = (gcnew System::Windows::Forms::Button());
			this->button_connection_1 = (gcnew System::Windows::Forms::Button());
			this->button_connection_2 = (gcnew System::Windows::Forms::Button());
			this->button_text = (gcnew System::Windows::Forms::Button());
			this->button_parallelogram = (gcnew System::Windows::Forms::Button());
			this->button_trapezoid = (gcnew System::Windows::Forms::Button());
			this->button_key = (gcnew System::Windows::Forms::Button());
			this->button_oval = (gcnew System::Windows::Forms::Button());
			this->button_hexagon = (gcnew System::Windows::Forms::Button());
			this->button_rhombus = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button_square = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->saveFileDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button_plus
			// 
			this->button_plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->button_plus->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_plus->FlatAppearance->BorderSize = 2;
			this->button_plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_plus->Font = (gcnew System::Drawing::Font(L"Arial", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_plus->ForeColor = System::Drawing::Color::White;
			this->button_plus->Location = System::Drawing::Point(17, 127);
			this->button_plus->Margin = System::Windows::Forms::Padding(4);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(100, 62);
			this->button_plus->TabIndex = 1;
			this->button_plus->Text = L"+";
			this->button_plus->UseVisualStyleBackColor = false;
			this->button_plus->Click += gcnew System::EventHandler(this, &MyForm::button_plus_Click);
			// 
			// button_minus
			// 
			this->button_minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->button_minus->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_minus->FlatAppearance->BorderSize = 2;
			this->button_minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_minus->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_minus->ForeColor = System::Drawing::Color::White;
			this->button_minus->Location = System::Drawing::Point(125, 127);
			this->button_minus->Margin = System::Windows::Forms::Padding(4);
			this->button_minus->Name = L"button_minus";
			this->button_minus->Size = System::Drawing::Size(100, 62);
			this->button_minus->TabIndex = 2;
			this->button_minus->Text = L"-";
			this->button_minus->UseVisualStyleBackColor = false;
			this->button_minus->Click += gcnew System::EventHandler(this, &MyForm::button_minus_Click);
			// 
			// button_delete
			// 
			this->button_delete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->button_delete->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_delete->FlatAppearance->BorderSize = 2;
			this->button_delete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_delete->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_delete->ForeColor = System::Drawing::Color::White;
			this->button_delete->Location = System::Drawing::Point(233, 127);
			this->button_delete->Margin = System::Windows::Forms::Padding(4);
			this->button_delete->Name = L"button_delete";
			this->button_delete->Size = System::Drawing::Size(100, 62);
			this->button_delete->TabIndex = 3;
			this->button_delete->Text = L"Удалить";
			this->button_delete->UseVisualStyleBackColor = false;
			this->button_delete->Click += gcnew System::EventHandler(this, &MyForm::button_delete_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(17, 5);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(316, 37);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Панель интсрументов";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->button_connection_3);
			this->panel1->Controls->Add(this->button_plus);
			this->panel1->Controls->Add(this->button_connection_1);
			this->panel1->Controls->Add(this->button_connection_2);
			this->panel1->Controls->Add(this->button_text);
			this->panel1->Controls->Add(this->button_parallelogram);
			this->panel1->Controls->Add(this->button_trapezoid);
			this->panel1->Controls->Add(this->button_key);
			this->panel1->Controls->Add(this->button_oval);
			this->panel1->Controls->Add(this->button_hexagon);
			this->panel1->Controls->Add(this->button_rhombus);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->button_square);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button_delete);
			this->panel1->Controls->Add(this->button_minus);
			this->panel1->Location = System::Drawing::Point(16, 52);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(351, 752);
			this->panel1->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(17, 46);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(315, 73);
			this->textBox1->TabIndex = 7;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button_connection_3
			// 
			this->button_connection_3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->button_connection_3->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_connection_3->FlatAppearance->BorderSize = 2;
			this->button_connection_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_connection_3->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_connection_3->ForeColor = System::Drawing::Color::White;
			this->button_connection_3->Location = System::Drawing::Point(233, 533);
			this->button_connection_3->Margin = System::Windows::Forms::Padding(4);
			this->button_connection_3->Name = L"button_connection_3";
			this->button_connection_3->Size = System::Drawing::Size(100, 62);
			this->button_connection_3->TabIndex = 22;
			this->button_connection_3->Text = L"—";
			this->button_connection_3->UseVisualStyleBackColor = false;
			this->button_connection_3->Click += gcnew System::EventHandler(this, &MyForm::button_connection_3_Click);
			// 
			// button_connection_1
			// 
			this->button_connection_1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->button_connection_1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_connection_1->FlatAppearance->BorderSize = 2;
			this->button_connection_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_connection_1->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_connection_1->ForeColor = System::Drawing::Color::White;
			this->button_connection_1->Location = System::Drawing::Point(17, 533);
			this->button_connection_1->Margin = System::Windows::Forms::Padding(4);
			this->button_connection_1->Name = L"button_connection_1";
			this->button_connection_1->Size = System::Drawing::Size(100, 62);
			this->button_connection_1->TabIndex = 21;
			this->button_connection_1->Text = L"↔";
			this->button_connection_1->UseVisualStyleBackColor = false;
			this->button_connection_1->Click += gcnew System::EventHandler(this, &MyForm::button_connection_1_Click);
			// 
			// button_connection_2
			// 
			this->button_connection_2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->button_connection_2->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_connection_2->FlatAppearance->BorderSize = 2;
			this->button_connection_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_connection_2->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_connection_2->ForeColor = System::Drawing::Color::White;
			this->button_connection_2->Location = System::Drawing::Point(125, 533);
			this->button_connection_2->Margin = System::Windows::Forms::Padding(4);
			this->button_connection_2->Name = L"button_connection_2";
			this->button_connection_2->Size = System::Drawing::Size(100, 62);
			this->button_connection_2->TabIndex = 20;
			this->button_connection_2->Text = L"→";
			this->button_connection_2->UseVisualStyleBackColor = false;
			this->button_connection_2->Click += gcnew System::EventHandler(this, &MyForm::button_connection_2_Click);
			// 
			// button_text
			// 
			this->button_text->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->button_text->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_text->FlatAppearance->BorderSize = 2;
			this->button_text->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_text->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_text->ForeColor = System::Drawing::Color::White;
			this->button_text->Location = System::Drawing::Point(125, 399);
			this->button_text->Margin = System::Windows::Forms::Padding(4);
			this->button_text->Name = L"button_text";
			this->button_text->Size = System::Drawing::Size(100, 62);
			this->button_text->TabIndex = 19;
			this->button_text->Text = L"Текст";
			this->button_text->UseVisualStyleBackColor = false;
			this->button_text->Click += gcnew System::EventHandler(this, &MyForm::button_text_Click);
			// 
			// button_parallelogram
			// 
			this->button_parallelogram->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->button_parallelogram->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_parallelogram->FlatAppearance->BorderSize = 2;
			this->button_parallelogram->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_parallelogram->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_parallelogram->ForeColor = System::Drawing::Color::White;
			this->button_parallelogram->Location = System::Drawing::Point(17, 399);
			this->button_parallelogram->Margin = System::Windows::Forms::Padding(4);
			this->button_parallelogram->Name = L"button_parallelogram";
			this->button_parallelogram->Size = System::Drawing::Size(100, 62);
			this->button_parallelogram->TabIndex = 18;
			this->button_parallelogram->Text = L"▱";
			this->button_parallelogram->UseVisualStyleBackColor = false;
			this->button_parallelogram->Click += gcnew System::EventHandler(this, &MyForm::button_parallelogram_Click);
			// 
			// button_trapezoid
			// 
			this->button_trapezoid->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->button_trapezoid->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_trapezoid->FlatAppearance->BorderSize = 2;
			this->button_trapezoid->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_trapezoid->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_trapezoid->ForeColor = System::Drawing::Color::White;
			this->button_trapezoid->Location = System::Drawing::Point(233, 330);
			this->button_trapezoid->Margin = System::Windows::Forms::Padding(4);
			this->button_trapezoid->Name = L"button_trapezoid";
			this->button_trapezoid->Size = System::Drawing::Size(100, 62);
			this->button_trapezoid->TabIndex = 17;
			this->button_trapezoid->Text = L"⏢";
			this->button_trapezoid->UseVisualStyleBackColor = false;
			this->button_trapezoid->Click += gcnew System::EventHandler(this, &MyForm::button_trapezoid_Click);
			// 
			// button_key
			// 
			this->button_key->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->button_key->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_key->FlatAppearance->BorderSize = 2;
			this->button_key->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_key->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_key->ForeColor = System::Drawing::Color::White;
			this->button_key->Location = System::Drawing::Point(125, 330);
			this->button_key->Margin = System::Windows::Forms::Padding(4);
			this->button_key->Name = L"button_key";
			this->button_key->Size = System::Drawing::Size(100, 62);
			this->button_key->TabIndex = 16;
			this->button_key->Text = L"⬬";
			this->button_key->UseVisualStyleBackColor = false;
			this->button_key->Click += gcnew System::EventHandler(this, &MyForm::button_key_Click);
			// 
			// button_oval
			// 
			this->button_oval->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->button_oval->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_oval->FlatAppearance->BorderSize = 2;
			this->button_oval->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_oval->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_oval->ForeColor = System::Drawing::Color::White;
			this->button_oval->Location = System::Drawing::Point(17, 330);
			this->button_oval->Margin = System::Windows::Forms::Padding(4);
			this->button_oval->Name = L"button_oval";
			this->button_oval->Size = System::Drawing::Size(100, 62);
			this->button_oval->TabIndex = 15;
			this->button_oval->Text = L"⬭";
			this->button_oval->UseVisualStyleBackColor = false;
			this->button_oval->Click += gcnew System::EventHandler(this, &MyForm::button_oval_Click);
			// 
			// button_hexagon
			// 
			this->button_hexagon->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->button_hexagon->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_hexagon->FlatAppearance->BorderSize = 2;
			this->button_hexagon->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_hexagon->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_hexagon->ForeColor = System::Drawing::Color::White;
			this->button_hexagon->Location = System::Drawing::Point(233, 261);
			this->button_hexagon->Margin = System::Windows::Forms::Padding(4);
			this->button_hexagon->Name = L"button_hexagon";
			this->button_hexagon->Size = System::Drawing::Size(100, 62);
			this->button_hexagon->TabIndex = 14;
			this->button_hexagon->Text = L"⬡";
			this->button_hexagon->UseVisualStyleBackColor = false;
			this->button_hexagon->Click += gcnew System::EventHandler(this, &MyForm::button_hexagon_Click);
			// 
			// button_rhombus
			// 
			this->button_rhombus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->button_rhombus->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_rhombus->FlatAppearance->BorderSize = 2;
			this->button_rhombus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_rhombus->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_rhombus->ForeColor = System::Drawing::Color::White;
			this->button_rhombus->Location = System::Drawing::Point(125, 261);
			this->button_rhombus->Margin = System::Windows::Forms::Padding(4);
			this->button_rhombus->Name = L"button_rhombus";
			this->button_rhombus->Size = System::Drawing::Size(100, 62);
			this->button_rhombus->TabIndex = 13;
			this->button_rhombus->Text = L"◊";
			this->button_rhombus->UseVisualStyleBackColor = false;
			this->button_rhombus->Click += gcnew System::EventHandler(this, &MyForm::button_rhombus_Click);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(23, 492);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(316, 37);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Связи";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button_square
			// 
			this->button_square->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->button_square->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_square->FlatAppearance->BorderSize = 2;
			this->button_square->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_square->Font = (gcnew System::Drawing::Font(L"Arial", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_square->ForeColor = System::Drawing::Color::White;
			this->button_square->Location = System::Drawing::Point(17, 261);
			this->button_square->Margin = System::Windows::Forms::Padding(4);
			this->button_square->Name = L"button_square";
			this->button_square->Size = System::Drawing::Size(100, 62);
			this->button_square->TabIndex = 6;
			this->button_square->Text = L"▭";
			this->button_square->UseVisualStyleBackColor = false;
			this->button_square->Click += gcnew System::EventHandler(this, &MyForm::button_square_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(17, 220);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(316, 37);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Элементы";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->BorderSize = 2;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(17, 660);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 62);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Сохранить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button3->FlatAppearance->BorderSize = 2;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(233, 660);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 62);
			this->button3->TabIndex = 3;
			this->button3->Text = L"PNG";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(125, 660);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 62);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Открыть";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(376, 52);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1519, 752);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseUp);
			// 
			// saveFileDialog
			// 
			this->saveFileDialog->Filter = L"XML-файлы (*.xml)|*.xml";
			this->saveFileDialog->Title = L"Сохранить как...";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"PNG Image|*.png";
			this->saveFileDialog1->Title = L"Сохранить как PNG...";
			// 
			// openFileDialog
			// 
			this->openFileDialog->Filter = L"XML-файлы (*.xml)|*.xml";
			this->openFileDialog->Title = L"Открыть как...";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->ClientSize = System::Drawing::Size(1909, 804);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(1927, 851);
			this->MinimumSize = System::Drawing::Size(1918, 851);
			this->Name = L"MyForm";
			this->Text = L"Редактор инфологической схемы";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		drawingManager = new DrawingManager();
		// Вызываем метод отрисовки элементов
		drawingManager->draw_elements(pictureBox1);
	}

	bool isStart = false; // Переменная определяет был ли клик по началу стрелки
	bool isEnd = false;  // Переменная определяет был ли клик по концу стрелки
	bool isMousePressed; // Переменная определяет зажата ли мышка
	
	// Текущий элемент в зависимости от типа
	Connection* currentConnectionElement = nullptr;
	Entitie* currentEntitieElement = nullptr;
	TextElement* currentTextElement = nullptr;

	private: System::Void pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		currentConnectionElement = nullptr;
		currentEntitieElement = nullptr;
		currentTextElement = nullptr;
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			//В первую очередь получаем connection элемент, потому что именно через взаимодействие с ним мы привязываем его к блоку
			currentConnectionElement = drawingManager->get_connection_element(e->X, e->Y);
			if (currentConnectionElement != nullptr) {
				//Если нажали на конец линии
				if (currentConnectionElement->isPointInRadiusEnd(e->X, e->Y)) {
					isEnd = true;
					currentConnectionElement->entitie2 = nullptr;
				}
				else if (currentConnectionElement->isPointInRadiusStart(e->X, e->Y)) {
					isStart = true;
					currentConnectionElement->entitie1 = nullptr;
				}
				isMousePressed = true;
			}
			else {
				currentEntitieElement = drawingManager->get_entitie_element(e->X, e->Y);
				if (currentEntitieElement != nullptr) {
					textBox1->Text = gcnew String(currentEntitieElement->title.c_str());
					isMousePressed = true;
				}
				else {
					currentTextElement = drawingManager->get_text_element(e->X, e->Y);
					if (currentTextElement != nullptr) {
						textBox1->Text = gcnew String(currentTextElement->title.c_str());
						isMousePressed = true;
					}
					else {
						textBox1->Text = "";
					}
				}
			}
		}
	}
	private: System::Void pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (isMousePressed) {
			if (currentConnectionElement != nullptr) {
				if (isStart) {
					currentConnectionElement->x_position = e->X;
					currentConnectionElement->y_position = e->Y;
					Entitie* entitie = drawingManager->get_entitie_element(e->X, e->Y);
					if (entitie != nullptr) {
						currentConnectionElement->color = "lightgreen";
					}
					else {
						currentConnectionElement->color = "black";
					}
					drawingManager->draw_elements(pictureBox1);
				}
				else if (isEnd) {
					currentConnectionElement->x_position2 = e->X;
					currentConnectionElement->y_position2 = e->Y;
					Entitie* entitie = drawingManager->get_entitie_element(e->X, e->Y);
					if (entitie != nullptr) {
						currentConnectionElement->color = "lightgreen";
					}
					else {
						currentConnectionElement->color = "black";
					}
					drawingManager->draw_elements(pictureBox1);
				}
				else {
					int width = Math::Abs(currentConnectionElement->x_position2 - currentConnectionElement->x_position);
					int height = Math::Abs(currentConnectionElement->y_position2 - currentConnectionElement->y_position);

					if (currentConnectionElement->x_position2 < currentConnectionElement->x_position) {
						currentConnectionElement->x_position2 = e->X - width / 2;
						currentConnectionElement->x_position = currentConnectionElement->x_position2 + width;
					}
					else {
						currentConnectionElement->x_position = e->X - width / 2;
						currentConnectionElement->x_position2 = currentConnectionElement->x_position + width;
					}
					if (currentConnectionElement->y_position2 < currentConnectionElement->y_position) {
						currentConnectionElement->y_position2 = e->Y - height / 2;
						currentConnectionElement->y_position = currentConnectionElement->y_position2 + height;
					}
					else {
						currentConnectionElement->y_position = e->Y - height / 2;
						currentConnectionElement->y_position2 = currentConnectionElement->y_position + height;
					}
					drawingManager->draw_elements(pictureBox1); // Перерисовка pictureBox1
				}
			}
			else if (currentEntitieElement != nullptr) {
				int width = Math::Abs(currentEntitieElement->x_position2 - currentEntitieElement->x_position);
				int height = Math::Abs(currentEntitieElement->y_position2 - currentEntitieElement->y_position);

				currentEntitieElement->x_position = e->X - width / 2;
				currentEntitieElement->y_position = e->Y - height / 2;

				currentEntitieElement->x_position2 = currentEntitieElement->x_position + width;
				currentEntitieElement->y_position2 = currentEntitieElement->y_position + height;

				drawingManager->draw_elements(pictureBox1); // Перерисовка pictureBox1
			}
			else if (currentTextElement != nullptr) {
				int width = Math::Abs(currentTextElement->x_position2 - currentTextElement->x_position);
				int height = Math::Abs(currentTextElement->y_position2 - currentTextElement->y_position);

				currentTextElement->x_position = e->X - width / 2;
				currentTextElement->y_position = e->Y - height / 2;

				currentTextElement->x_position2 = currentTextElement->x_position + width;
				currentTextElement->y_position2 = currentTextElement->y_position + height;

				drawingManager->draw_elements(pictureBox1); // Перерисовка pictureBox1
			}
		}
	}
	private: System::Void pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			if (currentConnectionElement != nullptr) {
				Entitie* entitie = drawingManager->get_entitie_element(e->X, e->Y);
				if (entitie != nullptr) {
					if (isStart == true) {
						currentConnectionElement->entitie1 = entitie;
						currentConnectionElement->color = "black";
						currentConnectionElement->ratio_left_1 = ((currentConnectionElement->x_position - entitie->x_position) * 100) / (entitie->x_position2 - entitie->x_position);
						currentConnectionElement->ratio_top_1 = ((currentConnectionElement->y_position - entitie->y_position) * 100) / (entitie->y_position2 - entitie->y_position);

					}
					else if (isEnd == true) {
						currentConnectionElement->entitie2 = entitie;
						currentConnectionElement->color = "black";
						currentConnectionElement->ratio_left_2 = ((currentConnectionElement->x_position2 - entitie->x_position) * 100) / (entitie->x_position2 - entitie->x_position);
						currentConnectionElement->ratio_top_2 = ((currentConnectionElement->y_position2 - entitie->y_position) * 100) / (entitie->y_position2 - entitie->y_position);
					}
				}
			}
			isMousePressed = false;
			isEnd = false;
			isStart = false;
			drawingManager->draw_elements(pictureBox1);
		}
	}
	
	private: System::Void button_connection_1_Click(System::Object^ sender, System::EventArgs^ e) {
		ConnectionStyle1* connection = new ConnectionStyle1();
		drawingManager->add_connection_element(connection);
		drawingManager->draw_elements(pictureBox1);
	}
	private: System::Void button_connection_2_Click(System::Object^ sender, System::EventArgs^ e) {
		ConnectionStyle2* connection = new ConnectionStyle2();
		drawingManager->add_connection_element(connection);
		drawingManager->draw_elements(pictureBox1);
	}
	private: System::Void button_connection_3_Click(System::Object^ sender, System::EventArgs^ e) {
		ConnectionStyle3* connection = new ConnectionStyle3();
		drawingManager->add_connection_element(connection);
		drawingManager->draw_elements(pictureBox1);
	}
	private: System::Void Form1_Activated(System::Object^ sender, System::EventArgs^ e) {
		pictureBox1->Invalidate();
	}
	private: System::Void button_rhombus_Click(System::Object^ sender, System::EventArgs^ e) {
		Rhombus* rhombus = new Rhombus();
		drawingManager->add_entitie_element(rhombus);
		drawingManager->draw_elements(pictureBox1);
	}
	private: System::Void button_hexagon_Click(System::Object^ sender, System::EventArgs^ e) {
		Hexagon* hexagon = new Hexagon();
		hexagon->x_position2 = 100;
		hexagon->y_position2 = 100;
		drawingManager->add_entitie_element(hexagon);
		drawingManager->draw_elements(pictureBox1);
	}
	private: System::Void button_oval_Click(System::Object^ sender, System::EventArgs^ e) {
		Oval* oval = new Oval();
		oval->x_position = 0;
		drawingManager->add_entitie_element(oval);
		drawingManager->draw_elements(pictureBox1);
	}
	private: System::Void button_key_Click(System::Object^ sender, System::EventArgs^ e) {
		Key* key = new Key();
		drawingManager->add_entitie_element(key);
		drawingManager->draw_elements(pictureBox1);
	}
	private: System::Void button_trapezoid_Click(System::Object^ sender, System::EventArgs^ e) {
		Trapezoid* trapezoid = new Trapezoid();
		drawingManager->add_entitie_element(trapezoid);
		drawingManager->draw_elements(pictureBox1);
	}
	private: System::Void button_square_Click(System::Object^ sender, System::EventArgs^ e) {
		Square* square = new Square();
		drawingManager->add_entitie_element(square);
		drawingManager->draw_elements(pictureBox1);
	}
	private: System::Void button_parallelogram_Click(System::Object^ sender, System::EventArgs^ e) {
		Parallelogram* parallelogram = new Parallelogram();
		drawingManager->add_entitie_element(parallelogram);
		drawingManager->draw_elements(pictureBox1);
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (currentEntitieElement != nullptr) {
			marshal_context context;
			currentEntitieElement->title = context.marshal_as<std::string>(textBox1->Text);
			drawingManager->draw_elements(pictureBox1);
		}
		else if (currentTextElement != nullptr) {
			marshal_context context;
			currentTextElement->title = context.marshal_as<std::string>(textBox1->Text);
			drawingManager->draw_elements(pictureBox1);
		}
	}
	private: System::Void button_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currentEntitieElement != nullptr) {
			currentEntitieElement->x_position2 *= 1.1;
			currentEntitieElement->y_position2 *= 1.1;
			drawingManager->draw_elements(pictureBox1);
		}
	}
	private: System::Void button_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currentEntitieElement != nullptr) {
			currentEntitieElement->x_position2 /= 1.1;
			currentEntitieElement->y_position2 /= 1.1;
			drawingManager->draw_elements(pictureBox1);
		}
	}
	private: System::Void button_delete_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currentEntitieElement != nullptr) {
			std::vector<Connection*>connections = drawingManager->get_connections_elements();
			for (int i = 0; i < connections.size(); i++) {
				if (connections[i]->entitie1 == currentEntitieElement) {
					connections[i]->entitie1 = nullptr;
				}
				if (connections[i]->entitie2 == currentEntitieElement) {
					connections[i]->entitie2 = nullptr;
				}
			}
			textBox1->Text = "";
			drawingManager->remove_entitie_element(currentEntitieElement);
			drawingManager->draw_elements(pictureBox1);
		}
		else if (currentConnectionElement != nullptr) {
			textBox1->Text = "";
			drawingManager->remove_connection_element(currentConnectionElement);
			drawingManager->draw_elements(pictureBox1);
		}
		else if (currentTextElement != nullptr) {
			textBox1->Text = "";
			drawingManager->remove_text_elements_element(currentTextElement);
			drawingManager->draw_elements(pictureBox1);
		}
	}
	private: System::Void button_text_Click(System::Object^ sender, System::EventArgs^ e) {
		TextElement* textElement = new TextElement();
		drawingManager->add_element(textElement);
		drawingManager->draw_elements(pictureBox1);
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		// Получаем выбранный пользователем путь к файлу
		String^ filePath = saveFileDialog->FileName;
		marshal_context context;
		drawingManager->get_xml_file(context.marshal_as<std::string>(filePath));
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		String^ filePath = openFileDialog->FileName;

		// Преобразование System::String^ в std::string
		std::string filePathStr = msclr::interop::marshal_as<std::string>(filePath);

		drawingManager->open_xml_file(filePathStr);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		// Получаем выбранный пользователем путь к файлу
		String^ filePath = saveFileDialog1->FileName;

		// Создаем Bitmap из изображения в PictureBox
		Bitmap^ bmp = gcnew Bitmap(pictureBox1->Image);

		// Сохраняем Bitmap в выбранный файл в формате PNG
		bmp->Save(filePath, ImageFormat::Png);

		// Освобождаем ресурсы
		delete bmp;
	}
}
};
}
