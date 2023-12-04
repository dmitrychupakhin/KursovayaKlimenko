#pragma once
#include <msclr/marshal_cppstd.h>
#include "MyClass.h"
#include <iostream>

namespace NikitaKursovaya {

	using namespace msclr::interop;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

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

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel7;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel9;
	private: System::Windows::Forms::HScrollBar^ hScrollBar1;
	private: System::Windows::Forms::VScrollBar^ vScrollBar1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel10;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel11;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel12;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel13;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button24;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button23;
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
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel8 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel11 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel12 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel13 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel9 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->hScrollBar1 = (gcnew System::Windows::Forms::HScrollBar());
			this->vScrollBar1 = (gcnew System::Windows::Forms::VScrollBar());
			this->tableLayoutPanel10 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->tableLayoutPanel8->SuspendLayout();
			this->tableLayoutPanel7->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			this->tableLayoutPanel11->SuspendLayout();
			this->tableLayoutPanel12->SuspendLayout();
			this->tableLayoutPanel13->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->tableLayoutPanel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tableLayoutPanel10->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				5)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				90)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				5)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->label4, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel9, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel10, 1, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 15)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 72.5F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 2.5F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1482, 953);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				70)));
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel4, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel11, 0, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(75, 49);
			this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(1330, 142);
			this->tableLayoutPanel2->TabIndex = 1;
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel4->ColumnCount = 3;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel4->Controls->Add(this->tableLayoutPanel8, 2, 0);
			this->tableLayoutPanel4->Controls->Add(this->tableLayoutPanel7, 1, 0);
			this->tableLayoutPanel4->Controls->Add(this->tableLayoutPanel6, 0, 0);
			this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel4->Location = System::Drawing::Point(399, 0);
			this->tableLayoutPanel4->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(931, 142);
			this->tableLayoutPanel4->TabIndex = 1;
			// 
			// tableLayoutPanel8
			// 
			this->tableLayoutPanel8->ColumnCount = 4;
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel8->Controls->Add(this->button22, 0, 1);
			this->tableLayoutPanel8->Controls->Add(this->button1, 3, 0);
			this->tableLayoutPanel8->Controls->Add(this->button16, 2, 0);
			this->tableLayoutPanel8->Controls->Add(this->button17, 1, 0);
			this->tableLayoutPanel8->Controls->Add(this->button18, 0, 1);
			this->tableLayoutPanel8->Controls->Add(this->button19, 0, 1);
			this->tableLayoutPanel8->Controls->Add(this->button20, 0, 1);
			this->tableLayoutPanel8->Controls->Add(this->button21, 0, 0);
			this->tableLayoutPanel8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel8->Location = System::Drawing::Point(624, 4);
			this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
			this->tableLayoutPanel8->RowCount = 2;
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel8->Size = System::Drawing::Size(303, 134);
			this->tableLayoutPanel8->TabIndex = 2;
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::White;
			this->button22->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button22->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(78, 70);
			this->button22->Name = L"button22";
			this->button22->Padding = System::Windows::Forms::Padding(3);
			this->button22->Size = System::Drawing::Size(69, 61);
			this->button22->TabIndex = 9;
			this->button22->Text = L"Text";
			this->button22->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(228, 3);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(3);
			this->button1->Size = System::Drawing::Size(72, 61);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Text";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::White;
			this->button16->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button16->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(153, 3);
			this->button16->Name = L"button16";
			this->button16->Padding = System::Windows::Forms::Padding(3);
			this->button16->Size = System::Drawing::Size(69, 61);
			this->button16->TabIndex = 7;
			this->button16->Text = L"Text";
			this->button16->UseVisualStyleBackColor = false;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::White;
			this->button17->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button17->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(78, 3);
			this->button17->Name = L"button17";
			this->button17->Padding = System::Windows::Forms::Padding(3);
			this->button17->Size = System::Drawing::Size(69, 61);
			this->button17->TabIndex = 6;
			this->button17->Text = L"Text";
			this->button17->UseVisualStyleBackColor = false;
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::White;
			this->button18->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button18->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(153, 70);
			this->button18->Name = L"button18";
			this->button18->Padding = System::Windows::Forms::Padding(3);
			this->button18->Size = System::Drawing::Size(69, 61);
			this->button18->TabIndex = 5;
			this->button18->Text = L"Text";
			this->button18->UseVisualStyleBackColor = false;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::White;
			this->button19->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button19->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(228, 70);
			this->button19->Name = L"button19";
			this->button19->Padding = System::Windows::Forms::Padding(3);
			this->button19->Size = System::Drawing::Size(72, 61);
			this->button19->TabIndex = 4;
			this->button19->Text = L"Text";
			this->button19->UseVisualStyleBackColor = false;
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::White;
			this->button20->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button20->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(3, 70);
			this->button20->Name = L"button20";
			this->button20->Padding = System::Windows::Forms::Padding(3);
			this->button20->Size = System::Drawing::Size(69, 61);
			this->button20->TabIndex = 2;
			this->button20->Text = L"Text";
			this->button20->UseVisualStyleBackColor = false;
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::White;
			this->button21->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button21->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(3, 3);
			this->button21->Name = L"button21";
			this->button21->Padding = System::Windows::Forms::Padding(3);
			this->button21->Size = System::Drawing::Size(69, 61);
			this->button21->TabIndex = 1;
			this->button21->Text = L"Text";
			this->button21->UseVisualStyleBackColor = false;
			// 
			// tableLayoutPanel7
			// 
			this->tableLayoutPanel7->ColumnCount = 4;
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel7->Controls->Add(this->button10, 2, 0);
			this->tableLayoutPanel7->Controls->Add(this->button11, 1, 0);
			this->tableLayoutPanel7->Controls->Add(this->button15, 0, 0);
			this->tableLayoutPanel7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel7->Location = System::Drawing::Point(314, 4);
			this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
			this->tableLayoutPanel7->RowCount = 2;
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel7->Size = System::Drawing::Size(303, 134);
			this->tableLayoutPanel7->TabIndex = 1;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button10->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(153, 3);
			this->button10->Name = L"button10";
			this->button10->Padding = System::Windows::Forms::Padding(3);
			this->button10->Size = System::Drawing::Size(69, 61);
			this->button10->TabIndex = 7;
			this->button10->Text = L"—";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::White;
			this->button11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button11->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(78, 3);
			this->button11->Name = L"button11";
			this->button11->Padding = System::Windows::Forms::Padding(3);
			this->button11->Size = System::Drawing::Size(69, 61);
			this->button11->TabIndex = 6;
			this->button11->Text = L"↔";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::White;
			this->button15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button15->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(3, 3);
			this->button15->Name = L"button15";
			this->button15->Padding = System::Windows::Forms::Padding(3);
			this->button15->Size = System::Drawing::Size(69, 61);
			this->button15->TabIndex = 1;
			this->button15->Text = L"→";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->ColumnCount = 4;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel6->Controls->Add(this->button9, 3, 0);
			this->tableLayoutPanel6->Controls->Add(this->button8, 2, 0);
			this->tableLayoutPanel6->Controls->Add(this->button7, 1, 0);
			this->tableLayoutPanel6->Controls->Add(this->button6, 0, 1);
			this->tableLayoutPanel6->Controls->Add(this->button5, 0, 1);
			this->tableLayoutPanel6->Controls->Add(this->button3, 0, 1);
			this->tableLayoutPanel6->Controls->Add(this->button2, 0, 0);
			this->tableLayoutPanel6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel6->Location = System::Drawing::Point(4, 4);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 2;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(303, 134);
			this->tableLayoutPanel6->TabIndex = 0;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(228, 3);
			this->button9->Name = L"button9";
			this->button9->Padding = System::Windows::Forms::Padding(3);
			this->button9->Size = System::Drawing::Size(72, 61);
			this->button9->TabIndex = 8;
			this->button9->Text = L"⬭";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(153, 3);
			this->button8->Name = L"button8";
			this->button8->Padding = System::Windows::Forms::Padding(3);
			this->button8->Size = System::Drawing::Size(69, 61);
			this->button8->TabIndex = 7;
			this->button8->Text = L"⬡";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(78, 3);
			this->button7->Name = L"button7";
			this->button7->Padding = System::Windows::Forms::Padding(3);
			this->button7->Size = System::Drawing::Size(69, 61);
			this->button7->TabIndex = 6;
			this->button7->Text = L"◊";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(3, 70);
			this->button6->Name = L"button6";
			this->button6->Padding = System::Windows::Forms::Padding(3);
			this->button6->Size = System::Drawing::Size(69, 61);
			this->button6->TabIndex = 5;
			this->button6->Text = L"⬬";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(153, 70);
			this->button5->Name = L"button5";
			this->button5->Padding = System::Windows::Forms::Padding(3);
			this->button5->Size = System::Drawing::Size(69, 61);
			this->button5->TabIndex = 4;
			this->button5->Text = L"▱";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(78, 70);
			this->button3->Name = L"button3";
			this->button3->Padding = System::Windows::Forms::Padding(3);
			this->button3->Size = System::Drawing::Size(69, 61);
			this->button3->TabIndex = 2;
			this->button3->Text = L"⏢";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(3, 3);
			this->button2->Name = L"button2";
			this->button2->Padding = System::Windows::Forms::Padding(3);
			this->button2->Size = System::Drawing::Size(69, 61);
			this->button2->TabIndex = 1;
			this->button2->Text = L"▭";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// tableLayoutPanel11
			// 
			this->tableLayoutPanel11->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel11->ColumnCount = 2;
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				80)));
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel11->Controls->Add(this->button23, 0, 1);
			this->tableLayoutPanel11->Controls->Add(this->tableLayoutPanel12, 0, 0);
			this->tableLayoutPanel11->Controls->Add(this->tableLayoutPanel13, 0, 1);
			this->tableLayoutPanel11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel11->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel11->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel11->Name = L"tableLayoutPanel11";
			this->tableLayoutPanel11->RowCount = 2;
			this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel11->Size = System::Drawing::Size(399, 142);
			this->tableLayoutPanel11->TabIndex = 2;
			this->tableLayoutPanel11->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel11_Paint);
			// 
			// tableLayoutPanel12
			// 
			this->tableLayoutPanel12->ColumnCount = 2;
			this->tableLayoutPanel12->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel12->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				80)));
			this->tableLayoutPanel12->Controls->Add(this->label6, 0, 0);
			this->tableLayoutPanel12->Controls->Add(this->textBox1, 1, 0);
			this->tableLayoutPanel12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel12->Location = System::Drawing::Point(4, 4);
			this->tableLayoutPanel12->Name = L"tableLayoutPanel12";
			this->tableLayoutPanel12->RowCount = 1;
			this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel12->Size = System::Drawing::Size(310, 63);
			this->tableLayoutPanel12->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(3, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 63);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Текст";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox1
			// 
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(65, 3);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(242, 45);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// tableLayoutPanel13
			// 
			this->tableLayoutPanel13->ColumnCount = 3;
			this->tableLayoutPanel13->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel13->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				40)));
			this->tableLayoutPanel13->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				40)));
			this->tableLayoutPanel13->Controls->Add(this->button25, 0, 0);
			this->tableLayoutPanel13->Controls->Add(this->button24, 0, 0);
			this->tableLayoutPanel13->Controls->Add(this->label7, 0, 0);
			this->tableLayoutPanel13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel13->Location = System::Drawing::Point(4, 74);
			this->tableLayoutPanel13->Name = L"tableLayoutPanel13";
			this->tableLayoutPanel13->RowCount = 1;
			this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel13->Size = System::Drawing::Size(310, 64);
			this->tableLayoutPanel13->TabIndex = 1;
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::White;
			this->button25->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button25->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(189, 3);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(118, 58);
			this->button25->TabIndex = 4;
			this->button25->Text = L"-";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::White;
			this->button24->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button24->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(65, 3);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(118, 58);
			this->button24->TabIndex = 3;
			this->button24->Text = L"+";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(3, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 64);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Размер";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				70)));
			this->tableLayoutPanel3->Controls->Add(this->label5, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->tableLayoutPanel5, 1, 0);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(75, 192);
			this->tableLayoutPanel3->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(1330, 47);
			this->tableLayoutPanel3->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(0, 0);
			this->label5->Margin = System::Windows::Forms::Padding(0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(399, 47);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Текущий элемент";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->ColumnCount = 3;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel5->Controls->Add(this->label3, 2, 0);
			this->tableLayoutPanel5->Controls->Add(this->label2, 1, 0);
			this->tableLayoutPanel5->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel5->Location = System::Drawing::Point(402, 3);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 1;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(925, 41);
			this->tableLayoutPanel5->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(619, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(303, 41);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Текст";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(311, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(302, 41);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Связи";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(302, 41);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Элементы";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label4->Location = System::Drawing::Point(78, 927);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(1324, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Klimenko PI-22-1";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel9
			// 
			this->tableLayoutPanel9->ColumnCount = 2;
			this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel9->Controls->Add(this->pictureBox1, 0, 0);
			this->tableLayoutPanel9->Controls->Add(this->hScrollBar1, 0, 1);
			this->tableLayoutPanel9->Controls->Add(this->vScrollBar1, 1, 0);
			this->tableLayoutPanel9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel9->Location = System::Drawing::Point(75, 240);
			this->tableLayoutPanel9->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel9->Name = L"tableLayoutPanel9";
			this->tableLayoutPanel9->RowCount = 2;
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel9->Size = System::Drawing::Size(1330, 686);
			this->tableLayoutPanel9->TabIndex = 4;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1310, 666);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->DoubleClick += gcnew System::EventHandler(this, &MyForm::pictureBox1_DoubleClick);
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseUp);
			// 
			// hScrollBar1
			// 
			this->hScrollBar1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->hScrollBar1->Location = System::Drawing::Point(0, 666);
			this->hScrollBar1->Name = L"hScrollBar1";
			this->hScrollBar1->Size = System::Drawing::Size(1310, 20);
			this->hScrollBar1->TabIndex = 0;
			// 
			// vScrollBar1
			// 
			this->vScrollBar1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->vScrollBar1->Location = System::Drawing::Point(1310, 0);
			this->vScrollBar1->Name = L"vScrollBar1";
			this->vScrollBar1->Size = System::Drawing::Size(20, 666);
			this->vScrollBar1->TabIndex = 1;
			// 
			// tableLayoutPanel10
			// 
			this->tableLayoutPanel10->ColumnCount = 5;
			this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				60)));
			this->tableLayoutPanel10->Controls->Add(this->button14, 0, 0);
			this->tableLayoutPanel10->Controls->Add(this->button13, 0, 0);
			this->tableLayoutPanel10->Controls->Add(this->button12, 0, 0);
			this->tableLayoutPanel10->Controls->Add(this->button4, 0, 0);
			this->tableLayoutPanel10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel10->Location = System::Drawing::Point(75, 1);
			this->tableLayoutPanel10->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel10->Name = L"tableLayoutPanel10";
			this->tableLayoutPanel10->RowCount = 1;
			this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel10->Size = System::Drawing::Size(1330, 47);
			this->tableLayoutPanel10->TabIndex = 5;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::White;
			this->button14->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button14->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(266, 0);
			this->button14->Margin = System::Windows::Forms::Padding(0);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(133, 47);
			this->button14->TabIndex = 5;
			this->button14->Text = L"Окно";
			this->button14->UseVisualStyleBackColor = false;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::White;
			this->button13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button13->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(399, 0);
			this->button13->Margin = System::Windows::Forms::Padding(0);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(133, 47);
			this->button13->TabIndex = 4;
			this->button13->Text = L"Справка";
			this->button13->UseVisualStyleBackColor = false;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::White;
			this->button12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button12->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(0, 0);
			this->button12->Margin = System::Windows::Forms::Padding(0);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(133, 47);
			this->button12->TabIndex = 3;
			this->button12->Text = L"Сохранить";
			this->button12->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(133, 0);
			this->button4->Margin = System::Windows::Forms::Padding(0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(133, 47);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Открыть";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::MistyRose;
			this->button23->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button23->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(321, 74);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(74, 64);
			this->button23->TabIndex = 5;
			this->button23->Text = L"Удалить";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(1482, 953);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel8->ResumeLayout(false);
			this->tableLayoutPanel7->ResumeLayout(false);
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel11->ResumeLayout(false);
			this->tableLayoutPanel12->ResumeLayout(false);
			this->tableLayoutPanel12->PerformLayout();
			this->tableLayoutPanel13->ResumeLayout(false);
			this->tableLayoutPanel13->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel5->PerformLayout();
			this->tableLayoutPanel9->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tableLayoutPanel10->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		drawingManager = new DrawingManager();

		// Вызываем метод отрисовки элементов
		drawingManager->draw_elements(pictureBox1);
	}
			
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Square* square = new Square();
		square->x_position = 0;
		square->y_position = 0;
		square->x_position2 = 150;
		square->y_position2 = 50;
		square->color = "black";
		square->title = "Это TITLE?";
		drawingManager->add_element(square);
		drawingManager->draw_elements(pictureBox1);
	}

	bool isStart = false;
	bool isEnd = false;
	bool isMousePressed;
	GraphicElement* currentGraphicElement = nullptr;
	double angle;

	private: System::Void pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			currentGraphicElement = drawingManager->get_connection_element(e->X, e->Y);
			if (currentGraphicElement == nullptr) {
				currentGraphicElement = drawingManager->get_element(e->X, e->Y);
			}
			if (currentGraphicElement != nullptr) {
				Connection* bObject = dynamic_cast<Connection*>(currentGraphicElement);
				if(bObject){
					if (bObject->isPointInRadiusEnd(e->X, e->Y)) {
						isEnd = true;
						bObject->entitie2 = nullptr;
					}	
					else if (bObject->isPointInRadiusStart(e->X, e->Y)) {
						isStart = true;
						bObject->entitie1 = nullptr;
					}
				}
				else {
					tableLayoutPanel11->BackColor = Color::LightGreen;
					Entitie* sObject = dynamic_cast<Entitie*>(currentGraphicElement);
					textBox1->Text = gcnew String(sObject->title.c_str());
				}
				isMousePressed = true;
			}
			else{
				tableLayoutPanel11->BackColor = Color::White;
				textBox1->Text = "";
			}
		}
	}
	private: System::Void pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (isMousePressed) {
			if (currentGraphicElement != nullptr){

				if (Connection* bObject = dynamic_cast<Connection*>(currentGraphicElement)) {
					if (isStart) {
						currentGraphicElement->x_position = e->X;
						currentGraphicElement->y_position = e->Y;
						Entitie* entitie = drawingManager->get_entitie_element(e->X, e->Y);
						Connection* bObject = dynamic_cast<Connection*>(currentGraphicElement);
						if (entitie != nullptr) {
							bObject->color = "lightgreen";
						}
						else {
							bObject->color = "black";
						}
						drawingManager->draw_elements(pictureBox1);
					}
					else if (isEnd) {
						currentGraphicElement->x_position2 = e->X;
						currentGraphicElement->y_position2 = e->Y;
						Entitie* entitie = drawingManager->get_entitie_element(e->X, e->Y);
						Connection* bObject = dynamic_cast<Connection*>(currentGraphicElement);
						if (entitie != nullptr) {
							bObject->color = "lightgreen";
						}
						else {
							bObject->color = "black";
						}
						drawingManager->draw_elements(pictureBox1);
					}
					else {
						
						int width = Math::Abs(currentGraphicElement->x_position2 - currentGraphicElement->x_position);
						int height = Math::Abs(currentGraphicElement->y_position2 - currentGraphicElement->y_position);

						if (currentGraphicElement->x_position2 < currentGraphicElement->x_position) {
							currentGraphicElement->x_position2 = e->X - width / 2;
							currentGraphicElement->x_position = currentGraphicElement->x_position2 + width;
						
						}
						else {
							currentGraphicElement->x_position = e->X - width / 2;
							currentGraphicElement->x_position2 = currentGraphicElement->x_position + width;
						}
						if (currentGraphicElement->y_position2 < currentGraphicElement->y_position) {
							currentGraphicElement->y_position2 = e->Y - height / 2;
							currentGraphicElement->y_position = currentGraphicElement->y_position2 + height;
							
						}
						else {
							currentGraphicElement->y_position = e->Y - height / 2;
							currentGraphicElement->y_position2 = currentGraphicElement->y_position + height;
						}
						
						drawingManager->draw_elements(pictureBox1); // Перерисовка pictureBox1
					}
				}
				
				else {
					int width = Math::Abs(currentGraphicElement->x_position2 - currentGraphicElement->x_position);
					int height = Math::Abs(currentGraphicElement->y_position2 - currentGraphicElement->y_position);
					
					currentGraphicElement->x_position = e->X - width / 2;
					currentGraphicElement->y_position = e->Y - height / 2;

					currentGraphicElement->x_position2 = currentGraphicElement->x_position + width;
					currentGraphicElement->y_position2 = currentGraphicElement->y_position + height;

					drawingManager->draw_elements(pictureBox1); // Перерисовка pictureBox1
				}
			}
		}
	}
	private: System::Void pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			Connection* bObject = dynamic_cast<Connection*>(currentGraphicElement);
			if (bObject) {
				Entitie* entitie = drawingManager->get_entitie_element(e->X, e->Y);
				if (entitie != nullptr) {
					if (isStart == true) {
						bObject->entitie1 = entitie;
						bObject->color = "black";
						bObject->ratio_left_1 = ((bObject->x_position - entitie->x_position) * 100) / (entitie->x_position2 - entitie->x_position);
						bObject->ratio_top_1 = ((bObject->y_position - entitie->y_position) * 100) / (entitie->y_position2 - entitie->y_position);
						
					}
					else if (isEnd == true) {
						bObject->entitie2 = entitie;
						bObject->color = "black";
						bObject->ratio_left_2 = ((bObject->x_position2 - entitie->x_position) * 100) / (entitie->x_position2 - entitie->x_position);
						bObject->ratio_top_2 = ((bObject->y_position2 - entitie->y_position) * 100) / (entitie->y_position2 - entitie->y_position);
						//Form^ form = gcnew Form();
						//MessageBox::Show(form, bObject->ratio_left_2 + " " + bObject->ratio_top_2, "Заголовок", MessageBoxButtons::OK, MessageBoxIcon::Information);
					}
				}
				//Form^ form = gcnew Form();
				//MessageBox::Show(form, "Привет, это всплывающее окно!", "Заголовок", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}

			isMousePressed = false;
			isEnd = false;
			isStart = false;
			drawingManager->draw_elements(pictureBox1);
		}
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		ConnectionStyle2* connection = new ConnectionStyle2();
		connection->x_position = 0;
		connection->y_position = 0;
		connection->x_position2 = 100;
		connection->y_position2 = 100;
		drawingManager->add_element(connection);
		drawingManager->draw_elements(pictureBox1);
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		ConnectionStyle3* connection = new ConnectionStyle3();
		connection->x_position = 0;
		connection->y_position = 0;
		connection->x_position2 = 100;
		connection->y_position2 = 100;
		drawingManager->add_element(connection);
		drawingManager->draw_elements(pictureBox1);
	}
	private: System::Void Form1_Activated(System::Object^ sender, System::EventArgs^ e) {
		pictureBox1->Invalidate();
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		ConnectionStyle1* connection = new ConnectionStyle1();
		connection->x_position = 0;
		connection->y_position = 0;
		connection->x_position2 = 100;
		connection->y_position2 = 100;
		drawingManager->add_element(connection);
		drawingManager->draw_elements(pictureBox1);
	}
		private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
			Rhombus* rhombus = new Rhombus();
			rhombus->x_position = 0;
			rhombus->y_position = 0;
			rhombus->x_position2 = 150;
			rhombus->y_position2 = 50;
			rhombus->color = "black";
			rhombus->title = "Это TITLE?";
			drawingManager->add_element(rhombus);
			drawingManager->draw_elements(pictureBox1);
		}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		Hexagon* hexagon = new Hexagon();
		hexagon->x_position = 0;
		hexagon->y_position = 0;
		hexagon->x_position2 = 150;
		hexagon->y_position2 = 150;
		hexagon->color = "black";
		hexagon->title = "Это TITLE?";
		drawingManager->add_element(hexagon);
		drawingManager->draw_elements(pictureBox1);
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		Oval* oval = new Oval();
		oval->x_position = 0;
		oval->y_position = 0;
		oval->x_position2 = 150;
		oval->y_position2 = 100;
		oval->color = "black";
		oval->title = "Это TITLE?";
		drawingManager->add_element(oval);
		drawingManager->draw_elements(pictureBox1);
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		Key* key = new Key();
		key->x_position = 0;
		key->y_position = 0;
		key->x_position2 = 150;
		key->y_position2 = 100;
		key->color = "black";
		key->title = "Это TITLE?";
		drawingManager->add_element(key);
		drawingManager->draw_elements(pictureBox1);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Trapezoid* trapezoid = new Trapezoid();
		trapezoid->x_position = 0;
		trapezoid->y_position = 0;
		trapezoid->x_position2 = 150;
		trapezoid->y_position2 = 100;
		trapezoid->color = "black";
		trapezoid->title = "Это TITLE?";
		drawingManager->add_element(trapezoid);
		drawingManager->draw_elements(pictureBox1);
	}


	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		Parallelogram* parallelogram = new Parallelogram();
		parallelogram->x_position = 0;
		parallelogram->y_position = 0;
		parallelogram->x_position2 = 150;
		parallelogram->y_position2 = 100;
		parallelogram->color = "black";
		parallelogram->title = "Это TITLE?";
		drawingManager->add_element(parallelogram);
		drawingManager->draw_elements(pictureBox1);
	}

	private: System::Void pictureBox1_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		// Создайте новую форму (всплывающее окно)
		
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (currentGraphicElement != nullptr) {
		Entitie* bObject = dynamic_cast<Entitie*>(currentGraphicElement);
		marshal_context context;
		bObject->title = context.marshal_as<std::string>(textBox1->Text);
		drawingManager->draw_elements(pictureBox1);
	}
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	if (currentGraphicElement != nullptr) {
		currentGraphicElement->x_position2 *= 1.1;
		currentGraphicElement->y_position2 *= 1.1;
		drawingManager->draw_elements(pictureBox1);
	}
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	if (currentGraphicElement != nullptr) {
		currentGraphicElement->x_position2 /= 1.1;
		currentGraphicElement->y_position2 /= 1.1;
		drawingManager->draw_elements(pictureBox1);
	}
}
private: System::Void tableLayoutPanel11_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	if (currentGraphicElement != nullptr) {
		Entitie* bObject = dynamic_cast<Entitie*>(currentGraphicElement);
		std::vector<Connection*>connections = drawingManager->get_connections_element();
		for (int i = 0; i < connections.size(); i++) {
			if (connections[i]->entitie1 == bObject) {
				connections[i]->entitie1 = nullptr;
			}
			if (connections[i]->entitie2 == bObject) {
				connections[i]->entitie2 = nullptr;
			}
		}
		tableLayoutPanel11->BackColor = Color::White;
		textBox1->Text = "";
		drawingManager->remove_element(currentGraphicElement);
		drawingManager->draw_elements(pictureBox1);
	}
}
};
}
