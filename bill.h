#pragma once
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Check
	/// </summary>
	public ref class Check : public System::Windows::Forms::Form
	{
	public:
		Check(void)
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
		~Check()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewImageColumn^ Images;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ price;



	protected:

		//public: int pizza = 0, burger = 0, shawrma = 0, shashlik = 0, coffee = 0, pepsi = 0;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Images = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Images,
					this->Column1, this->price
			});
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->Location = System::Drawing::Point(-66, 1);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 120;
			this->dataGridView1->Size = System::Drawing::Size(649, 637);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Check::dataGridView1_CellContentClick);
			for each (DataGridViewColumn ^ col in dataGridView1->Columns) {
				col->Resizable = DataGridViewTriState::False;
			}


			// 
			// Images
			// 
			this->Images->FillWeight = 74.86631F;
			this->Images->HeaderText = L"Images";
			this->Images->ImageLayout = System::Windows::Forms::DataGridViewImageCellLayout::Zoom;
			this->Images->MinimumWidth = 6;
			this->Images->Name = L"Images";
			this->Images->ReadOnly = true;
			this->Images->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Images->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			// 
			// Column1
			// 
			this->Column1->FillWeight = 125.1337F;
			this->Column1->HeaderText = L"Column1";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// price
			// 
			this->price->HeaderText = L"Column2";
			this->price->MinimumWidth = 6;
			this->price->Name = L"price";
			this->price->ReadOnly = true;
			// 
			// Check
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(582, 634);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Check";
			this->Text = L"Check";
			this->Load += gcnew System::EventHandler(this, &Check::Check_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	public: void rows(int pizza, int burger, int shawrma, int shashlik, int coffee, int pepsi, int totalprice)
	{
		int rowCount = 0;
		Image^ total = Image::FromFile("C:\\total.png");

		if (pizza != 0 || burger != 0 || shawrma != 0 || shashlik != 0 || coffee != 0 || pepsi != 0)
		{
			rowCount = 1;
		}
		if ((pizza != 0 && burger != 0) || (pizza != 0 && shawrma != 0) || (pizza != 0 && shashlik != 0) || (pizza != 0 && coffee != 0) || (pizza != 0 && pepsi != 0) || (burger != 0 && shawrma != 0) || (burger != 0 && shashlik != 0) || (burger != 0 && coffee != 0) || (burger != 0 && pepsi != 0) || (shawrma != 0 && shashlik != 0) || (shawrma != 0 && coffee != 0) || (shawrma != 0 && pepsi != 0) || (shashlik != 0 && coffee != 0) || (shashlik != 0 && pepsi != 0) || (coffee != 0 && pepsi != 0))
		{
			rowCount = 2;
		}
		if ((pizza != 0 && burger != 0 && shawrma != 0) || (pizza != 0 && burger != 0 && shashlik != 0) || (pizza != 0 && burger != 0 && coffee != 0) || (pizza != 0 && burger != 0 && pepsi != 0) || (pizza != 0 && shawrma != 0 && shashlik != 0) || (pizza != 0 && shawrma != 0 && coffee != 0) || (pizza != 0 && shawrma != 0 && pepsi != 0) || (pizza != 0 && coffee != 0 && shashlik != 0) || (pizza != 0 && pepsi != 0 && shashlik != 0) || (shawrma != 0 && burger != 0 && shashlik != 0) || (shawrma != 0 && burger != 0 && coffee != 0) || (shawrma != 0 && burger != 0 && pepsi != 0) || (shashlik != 0 && burger != 0 && coffee != 0) || (shashlik != 0 && burger != 0 && pepsi != 0) || (shawrma != 0 && shashlik != 0 && coffee != 0) || (shawrma != 0 && shashlik != 0 && pepsi != 0) || (shashlik != 0 && pepsi != 0 && coffee != 0) || (pizza != 0 && pepsi != 0 && coffee != 0) || (pepsi != 0 && burger != 0 && coffee != 0))
		{
			rowCount = 3;
		}
		if ((pizza != 0 && burger != 0 && shawrma != 0 && shashlik != 0) || (pizza != 0 && burger != 0 && shawrma != 0 && coffee != 0) || (pizza != 0 && burger != 0 && shawrma != 0 && pepsi != 0) || (pizza != 0 && burger != 0 && coffee != 0 && shashlik != 0) || (pizza != 0 && burger != 0 && pepsi != 0 && shashlik != 0) || (pizza != 0 && burger != 0 && coffee != 0 && pepsi != 0) || (pizza != 0 && coffee != 0 && shawrma != 0 && shashlik != 0) || (pizza != 0 && pepsi != 0 && shawrma != 0 && shashlik != 0) || (pizza != 0 && pepsi != 0 && shawrma != 0 && coffee != 0) || (pizza != 0 && coffee != 0 && pepsi != 0 && shashlik != 0) || (coffee != 0 && burger != 0 && shawrma != 0 && shashlik != 0) || (pepsi != 0 && burger != 0 && shawrma != 0 && shashlik != 0) || (pepsi != 0 && burger != 0 && shawrma != 0 && coffee != 0) || (pepsi != 0 && burger != 0 && coffee != 0 && shashlik != 0) || (pepsi != 0 && coffee != 0 && shawrma != 0 && shashlik != 0))
		{
			rowCount = 4;
		}
		if ((pizza != 0 && burger != 0 && shawrma != 0 && shashlik != 0 && coffee != 0) || (pizza != 0 && burger != 0 && shawrma != 0 && shashlik != 0 && pepsi != 0) || (pizza != 0 && burger != 0 && shawrma != 0 && pepsi != 0 && coffee != 0) || (pizza != 0 && burger != 0 && pepsi != 0 && shashlik != 0 && coffee != 0) || (pizza != 0 && pepsi != 0 && shawrma != 0 && shashlik != 0 && coffee != 0) || (pepsi != 0 && burger != 0 && shawrma != 0 && shashlik != 0 && coffee != 0))
		{
			rowCount = 5;
		}
		if (pizza != 0 && burger != 0 && shawrma != 0 && shashlik != 0 && coffee != 0 && pepsi != 0)
		{
			rowCount = 6;
		}
		dataGridView1->Rows[rowCount]->Cells[0]->Value = total;

		dataGridView1->Rows[rowCount]->Cells[2]->Value = totalprice;
	}

	public: void UpdateDataGridView(int many[], array<String^>^ name, array<Image^>^ image, array<String^>^ price)
	{
		for (int i = 0; i < image->Length; i++)
		{
			if (many[i] > 0) // check if quantity is greater than 0
			{

				int rowIndex = dataGridView1->Rows->Add();

				dataGridView1->Rows[rowIndex]->Cells[0]->Value = image[i];
				dataGridView1->Rows[rowIndex]->Cells[1]->Value = name[i];
				dataGridView1->Rows[rowIndex]->Cells[2]->Value = price[i];

			}
		}
	}

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}		   
private: System::Void Check_Load(System::Object^ sender, System::EventArgs^ e) {
}
};

}
