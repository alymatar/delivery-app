#pragma once

#include"Check.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;



	/// <summary>
	/// Summary for MENU
	/// </summary>
	public ref class MENU : public System::Windows::Forms::Form
	{
	public:
		MENU(void)
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
		~MENU()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::PictureBox^ pictureBox1;


	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;


	public: System::Windows::Forms::Button^ button2;
	public: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	public: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;


	private: System::Windows::Forms::GroupBox^ groupBox4;
	public: System::Windows::Forms::Button^ button4;


	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	public: System::Windows::Forms::Button^ button5;


	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	public: System::Windows::Forms::Button^ button6;


	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;

		   // Define a variable or property that you want to access from Form2
	

		// ...or use a property:
	/*public:
		property int MyProperty {
			int get() {
				return PizzaIncrement;
			}
			void set(int value) {
				PizzaIncrement = value;
			}
		}*/





	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MENU::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->button19 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(41, 10);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(237, 201);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MENU::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(41, 10);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(237, 201);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->Location = System::Drawing::Point(12, 26);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(338, 357);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(41, 290);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(237, 38);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Add to cart";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MENU::button2_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(144, 293);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(30, 32);
			this->label13->TabIndex = 9;
			this->label13->Text = L"1";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::LightGray;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(208, 290);
			this->button7->Margin = System::Windows::Forms::Padding(0);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(39, 38);
			this->button7->TabIndex = 8;
			this->button7->Text = L"+";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MENU::button7_Click_1);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(73, 290);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(39, 38);
			this->button8->TabIndex = 7;
			this->button8->Text = L"-";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MENU::button8_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(37, 250);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 22);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Pizza Margrita";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(36, 217);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 29);
			this->label1->TabIndex = 4;
			this->label1->Text = L"800 ₽";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->button9);
			this->groupBox2->Controls->Add(this->button10);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->pictureBox2);
			this->groupBox2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->groupBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox2->Location = System::Drawing::Point(400, 26);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(338, 357);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(41, 290);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(237, 38);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Add to cart";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MENU::button3_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(143, 293);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(30, 32);
			this->label14->TabIndex = 12;
			this->label14->Text = L"1";
			this->label14->Click += gcnew System::EventHandler(this, &MENU::label14_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::LightGray;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(207, 290);
			this->button9->Margin = System::Windows::Forms::Padding(0);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(39, 38);
			this->button9->TabIndex = 11;
			this->button9->Text = L"+";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MENU::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(72, 290);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(39, 38);
			this->button10->TabIndex = 10;
			this->button10->Text = L"-";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MENU::button10_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(37, 250);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 22);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Classic burger";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(36, 217);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 29);
			this->label4->TabIndex = 6;
			this->label4->Text = L"500 ₽";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->groupBox3->Controls->Add(this->button1);
			this->groupBox3->Controls->Add(this->label16);
			this->groupBox3->Controls->Add(this->button13);
			this->groupBox3->Controls->Add(this->button14);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->pictureBox3);
			this->groupBox3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->groupBox3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox3->Location = System::Drawing::Point(12, 401);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(338, 357);
			this->groupBox3->TabIndex = 6;
			this->groupBox3->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(41, 290);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(237, 38);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Add to cart";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MENU::button1_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(144, 293);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(30, 32);
			this->label16->TabIndex = 14;
			this->label16->Text = L"1";
			this->label16->Click += gcnew System::EventHandler(this, &MENU::label16_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button13->FlatAppearance->BorderColor = System::Drawing::Color::LightGray;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(208, 290);
			this->button13->Margin = System::Windows::Forms::Padding(0);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(39, 38);
			this->button13->TabIndex = 13;
			this->button13->Text = L"+";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MENU::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(73, 290);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(39, 38);
			this->button14->TabIndex = 12;
			this->button14->Text = L"-";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MENU::button14_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(37, 249);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(78, 22);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Shashlik";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(36, 216);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(76, 29);
			this->label8->TabIndex = 10;
			this->label8->Text = L"700 ₽";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(41, 10);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(237, 201);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->groupBox4->Controls->Add(this->button4);
			this->groupBox4->Controls->Add(this->label15);
			this->groupBox4->Controls->Add(this->button11);
			this->groupBox4->Controls->Add(this->button12);
			this->groupBox4->Controls->Add(this->label5);
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Controls->Add(this->pictureBox4);
			this->groupBox4->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->groupBox4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox4->Location = System::Drawing::Point(785, 26);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(338, 357);
			this->groupBox4->TabIndex = 7;
			this->groupBox4->TabStop = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(41, 290);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(237, 38);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Add to cart";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MENU::button4_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(145, 293);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(30, 32);
			this->label15->TabIndex = 12;
			this->label15->Text = L"1";
			this->label15->Click += gcnew System::EventHandler(this, &MENU::label15_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button11->FlatAppearance->BorderColor = System::Drawing::Color::LightGray;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(209, 290);
			this->button11->Margin = System::Windows::Forms::Padding(0);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(39, 38);
			this->button11->TabIndex = 11;
			this->button11->Text = L"+";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MENU::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(74, 290);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(39, 38);
			this->button12->TabIndex = 10;
			this->button12->Text = L"-";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MENU::button12_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(37, 250);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 22);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Shawrma";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(36, 217);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(76, 29);
			this->label6->TabIndex = 8;
			this->label6->Text = L"300 ₽";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(41, 10);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(237, 201);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->groupBox5->Controls->Add(this->button5);
			this->groupBox5->Controls->Add(this->label17);
			this->groupBox5->Controls->Add(this->button15);
			this->groupBox5->Controls->Add(this->button16);
			this->groupBox5->Controls->Add(this->label9);
			this->groupBox5->Controls->Add(this->label10);
			this->groupBox5->Controls->Add(this->pictureBox5);
			this->groupBox5->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->groupBox5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox5->Location = System::Drawing::Point(400, 401);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(338, 357);
			this->groupBox5->TabIndex = 8;
			this->groupBox5->TabStop = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(41, 290);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(237, 38);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Add to cart";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MENU::button5_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(143, 293);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(30, 32);
			this->label17->TabIndex = 16;
			this->label17->Text = L"1";
			this->label17->Click += gcnew System::EventHandler(this, &MENU::label17_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button15->FlatAppearance->BorderColor = System::Drawing::Color::LightGray;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(207, 289);
			this->button15->Margin = System::Windows::Forms::Padding(0);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(39, 38);
			this->button15->TabIndex = 15;
			this->button15->Text = L"+";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MENU::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(72, 289);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(39, 38);
			this->button16->TabIndex = 14;
			this->button16->Text = L"-";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MENU::button16_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(37, 250);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(63, 22);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Coffee";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(36, 217);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(76, 29);
			this->label10->TabIndex = 12;
			this->label10->Text = L"170 ₽";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(41, 10);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(237, 201);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 3;
			this->pictureBox5->TabStop = false;
			// 
			// groupBox6
			// 
			this->groupBox6->BackColor = System::Drawing::SystemColors::ControlLight;
			this->groupBox6->Controls->Add(this->button6);
			this->groupBox6->Controls->Add(this->label18);
			this->groupBox6->Controls->Add(this->button17);
			this->groupBox6->Controls->Add(this->button18);
			this->groupBox6->Controls->Add(this->label11);
			this->groupBox6->Controls->Add(this->label12);
			this->groupBox6->Controls->Add(this->pictureBox6);
			this->groupBox6->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->groupBox6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox6->Location = System::Drawing::Point(785, 401);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(338, 357);
			this->groupBox6->TabIndex = 9;
			this->groupBox6->TabStop = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(41, 290);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(237, 38);
			this->button6->TabIndex = 4;
			this->button6->Text = L"Add to cart";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MENU::button6_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(145, 293);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(30, 32);
			this->label18->TabIndex = 18;
			this->label18->Text = L"1";
			this->label18->Click += gcnew System::EventHandler(this, &MENU::label18_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button17->FlatAppearance->BorderColor = System::Drawing::Color::LightGray;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(209, 290);
			this->button17->Margin = System::Windows::Forms::Padding(0);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(39, 38);
			this->button17->TabIndex = 17;
			this->button17->Text = L"+";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MENU::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(74, 290);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(39, 38);
			this->button18->TabIndex = 16;
			this->button18->Text = L"-";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MENU::button18_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(47, 250);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(55, 22);
			this->label11->TabIndex = 15;
			this->label11->Text = L"Pepsi";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(46, 217);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(76, 29);
			this->label12->TabIndex = 14;
			this->label12->Text = L"100 ₽";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(41, 10);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(237, 201);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 3;
			this->pictureBox6->TabStop = false;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button19->Location = System::Drawing::Point(441, 794);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(237, 38);
			this->button19->TabIndex = 10;
			this->button19->Text = L"Continue";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MENU::button19_Click);
			// 
			// MENU
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(1137, 857);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MENU";
			this->Text = L"MENU";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MENU::MENU_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MENU::MENU_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);

		}
	public: int PizzaIncrement = 0;
	public: int BurgerIncrement = 0;
	public: int ShawrmaIncrement = 0;
	public: int ShashlikIncrement = 0;
	public: int CoffeeIncrement = 0;
	public: int PepsiIncrement = 0;
	public: String^ Username;
#pragma endregion

	public: void user(String^ username)
	{
		Username = username;	
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {	
	PizzaIncrement++;
	button2->Hide();
}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click_1(System::Object^ sender, System::EventArgs^ e) {
	//increment
	PizzaIncrement++;
	label13->Text = PizzaIncrement.ToString();
	
	
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	//decrement
	--PizzaIncrement;
	label13->Text = PizzaIncrement.ToString();
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	--CoffeeIncrement;
	label17->Text = CoffeeIncrement.ToString();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	BurgerIncrement++;
	label14->Text = BurgerIncrement.ToString();
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	ShawrmaIncrement++;
	label15->Text = ShawrmaIncrement.ToString();
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	ShashlikIncrement++;
	label16->Text = ShashlikIncrement.ToString();
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	CoffeeIncrement++;
	label17->Text = CoffeeIncrement.ToString();
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	PepsiIncrement++;
	label18->Text = PepsiIncrement.ToString();
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	--BurgerIncrement;
	label14->Text = BurgerIncrement.ToString();
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	--ShawrmaIncrement;
	label15->Text = ShawrmaIncrement.ToString();
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	--ShashlikIncrement;
	label16->Text = ShashlikIncrement.ToString();
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	--PepsiIncrement;
	label18->Text = PepsiIncrement.ToString();
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	BurgerIncrement++;
	button3->Hide();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	ShawrmaIncrement++;
	button4->Hide();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	ShashlikIncrement++;
	button1->Hide();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	CoffeeIncrement++;
	button5->Hide();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	PepsiIncrement++;
	button6->Hide();
}
private: System::Void MENU_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	
		
			Application::Exit(); // exit the application
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	int much[6] = { PizzaIncrement, BurgerIncrement,ShawrmaIncrement,ShashlikIncrement,CoffeeIncrement, PepsiIncrement };
	array<Image^>^ images = { pictureBox1->Image,pictureBox2->Image, pictureBox4->Image, pictureBox3->Image, pictureBox5->Image, pictureBox6->Image };
	array<String^>^ name = { "Pizza Margrita","Classic burger","Shawrma","Shashlik", "Coffee", "Pepsi"};
	array<String^>^ price = {PizzaIncrement+ " * 800 P",BurgerIncrement+" * 500 P", ShawrmaIncrement+" * 300 P",ShashlikIncrement+ " * 700 P",CoffeeIncrement +" * 170 P",PepsiIncrement +" * 100 P"};
	Check^ check = gcnew Check();
	
	// to write the new data to the file
	String^ userData = PizzaIncrement + "," + BurgerIncrement + "," + ShawrmaIncrement + "," + ShashlikIncrement + "," + CoffeeIncrement + "," + PepsiIncrement;
	StreamWriter^ writer = gcnew StreamWriter(Username +".txt", false);
		writer->WriteLine(userData);
		writer->Close();
		int totalPrice = PizzaIncrement * 800 + BurgerIncrement * 500 + ShawrmaIncrement * 300 + ShashlikIncrement * 700 + CoffeeIncrement * 170 + PepsiIncrement * 100;
		
		
		check->UpdateDataGridView(much, name, images, price);
		check->rows(PizzaIncrement, BurgerIncrement, ShawrmaIncrement, ShashlikIncrement, CoffeeIncrement, PepsiIncrement, totalPrice);
		
		check->ShowDialog();
		this->Show();
	
	
}

private: System::Void MENU_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
