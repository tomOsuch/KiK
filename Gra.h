#pragma once

namespace KiK {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Gra
	/// </summary>
	public ref class Gra : public System::Windows::Forms::Form
	{
		bool wcisniety = true;
		bool wygral = false;
		int liczX = 0;
		int liczO = 0;
		String^ mistrz = " ";
	public:
		Gra(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Gra()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  lblLicznikX;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  lblLicznikO;
	private: System::Windows::Forms::PictureBox^  A1;
	private: System::Windows::Forms::PictureBox^  B2;


	private: System::Windows::Forms::PictureBox^  A2;
	private: System::Windows::Forms::PictureBox^  A3;
	private: System::Windows::Forms::PictureBox^  B3;
	private: System::Windows::Forms::PictureBox^  C3;




	private: System::Windows::Forms::PictureBox^  C2;

	private: System::Windows::Forms::PictureBox^  B1;
	private: System::Windows::Forms::PictureBox^  C1;


	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obs³ugi projektanta — nie nale¿y modyfikowaæ 
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Gra::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblLicznikX = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lblLicznikO = (gcnew System::Windows::Forms::Label());
			this->A1 = (gcnew System::Windows::Forms::PictureBox());
			this->B2 = (gcnew System::Windows::Forms::PictureBox());
			this->A2 = (gcnew System::Windows::Forms::PictureBox());
			this->A3 = (gcnew System::Windows::Forms::PictureBox());
			this->B3 = (gcnew System::Windows::Forms::PictureBox());
			this->C3 = (gcnew System::Windows::Forms::PictureBox());
			this->C2 = (gcnew System::Windows::Forms::PictureBox());
			this->B1 = (gcnew System::Windows::Forms::PictureBox());
			this->C1 = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkOrange;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(169, 376);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 25);
			this->button1->TabIndex = 0;
			this->button1->Text = L"NOWA GRA";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Gra::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkOrange;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(12, 376);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(103, 25);
			this->button2->TabIndex = 1;
			this->button2->Text = L"RESET";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Gra::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Wygrane X";
			// 
			// lblLicznikX
			// 
			this->lblLicznikX->AutoSize = true;
			this->lblLicznikX->BackColor = System::Drawing::Color::Transparent;
			this->lblLicznikX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblLicznikX->Location = System::Drawing::Point(42, 33);
			this->lblLicznikX->Name = L"lblLicznikX";
			this->lblLicznikX->Size = System::Drawing::Size(15, 16);
			this->lblLicznikX->TabIndex = 3;
			this->lblLicznikX->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(187, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Wygrane O";
			// 
			// lblLicznikO
			// 
			this->lblLicznikO->AutoSize = true;
			this->lblLicznikO->BackColor = System::Drawing::Color::Transparent;
			this->lblLicznikO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblLicznikO->Location = System::Drawing::Point(220, 35);
			this->lblLicznikO->Name = L"lblLicznikO";
			this->lblLicznikO->Size = System::Drawing::Size(15, 16);
			this->lblLicznikO->TabIndex = 5;
			this->lblLicznikO->Text = L"0";
			// 
			// A1
			// 
			this->A1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1.Image")));
			this->A1->Location = System::Drawing::Point(26, 84);
			this->A1->Name = L"A1";
			this->A1->Size = System::Drawing::Size(48, 60);
			this->A1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->A1->TabIndex = 6;
			this->A1->TabStop = false;
			this->A1->Tag = L"\?";
			this->A1->Click += gcnew System::EventHandler(this, &Gra::graj);
			// 
			// B2
			// 
			this->B2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2.Image")));
			this->B2->Location = System::Drawing::Point(115, 183);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(48, 60);
			this->B2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->B2->TabIndex = 7;
			this->B2->TabStop = false;
			this->B2->Tag = L"\?";
			this->B2->Click += gcnew System::EventHandler(this, &Gra::graj);
			// 
			// A2
			// 
			this->A2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2.Image")));
			this->A2->Location = System::Drawing::Point(26, 183);
			this->A2->Name = L"A2";
			this->A2->Size = System::Drawing::Size(48, 60);
			this->A2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->A2->TabIndex = 8;
			this->A2->TabStop = false;
			this->A2->Tag = L"\?";
			this->A2->Click += gcnew System::EventHandler(this, &Gra::graj);
			// 
			// A3
			// 
			this->A3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3.Image")));
			this->A3->Location = System::Drawing::Point(26, 285);
			this->A3->Name = L"A3";
			this->A3->Size = System::Drawing::Size(48, 60);
			this->A3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->A3->TabIndex = 9;
			this->A3->TabStop = false;
			this->A3->Tag = L"\?";
			this->A3->Click += gcnew System::EventHandler(this, &Gra::graj);
			// 
			// B3
			// 
			this->B3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3.Image")));
			this->B3->Location = System::Drawing::Point(115, 285);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(48, 60);
			this->B3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->B3->TabIndex = 10;
			this->B3->TabStop = false;
			this->B3->Tag = L"\?";
			this->B3->Click += gcnew System::EventHandler(this, &Gra::graj);
			// 
			// C3
			// 
			this->C3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C3.Image")));
			this->C3->Location = System::Drawing::Point(203, 285);
			this->C3->Name = L"C3";
			this->C3->Size = System::Drawing::Size(48, 60);
			this->C3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->C3->TabIndex = 11;
			this->C3->TabStop = false;
			this->C3->Tag = L"\?";
			this->C3->Click += gcnew System::EventHandler(this, &Gra::graj);
			// 
			// C2
			// 
			this->C2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C2.Image")));
			this->C2->Location = System::Drawing::Point(203, 183);
			this->C2->Name = L"C2";
			this->C2->Size = System::Drawing::Size(48, 60);
			this->C2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->C2->TabIndex = 12;
			this->C2->TabStop = false;
			this->C2->Tag = L"\?";
			this->C2->Click += gcnew System::EventHandler(this, &Gra::graj);
			// 
			// B1
			// 
			this->B1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1.Image")));
			this->B1->Location = System::Drawing::Point(115, 84);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(48, 60);
			this->B1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->B1->TabIndex = 13;
			this->B1->TabStop = false;
			this->B1->Tag = L"\?";
			this->B1->Click += gcnew System::EventHandler(this, &Gra::graj);
			// 
			// C1
			// 
			this->C1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C1.Image")));
			this->C1->Location = System::Drawing::Point(203, 84);
			this->C1->Name = L"C1";
			this->C1->Size = System::Drawing::Size(48, 60);
			this->C1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->C1->TabIndex = 14;
			this->C1->TabStop = false;
			this->C1->Tag = L"\?";
			this->C1->Click += gcnew System::EventHandler(this, &Gra::graj);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"kolko.png");
			this->imageList1->Images->SetKeyName(1, L"krzyzyk.png");
			this->imageList1->Images->SetKeyName(2, L"pytajnik.png");
			// 
			// Gra
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(284, 411);
			this->Controls->Add(this->C1);
			this->Controls->Add(this->B1);
			this->Controls->Add(this->C2);
			this->Controls->Add(this->C3);
			this->Controls->Add(this->B3);
			this->Controls->Add(this->A3);
			this->Controls->Add(this->A2);
			this->Controls->Add(this->B2);
			this->Controls->Add(this->A1);
			this->Controls->Add(this->lblLicznikO);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lblLicznikX);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Gra";
			this->Text = L"Gra";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void graj(System::Object^  sender, System::EventArgs^  e) {
		PictureBox^ zdjecie = (PictureBox^)sender;
		if (wcisniety) {
			zdjecie->Image = imageList1->Images[1];
			zdjecie->Tag = "X";
		}
		else {
			zdjecie->Image = imageList1->Images[0];
			zdjecie->Tag = "O";
		}
		wcisniety = !wcisniety;
		zdjecie->Enabled = false;
		wygrana();
	}
			 private: Void wygrana() {
				 //Wygrana w poziomie
				 if ((A1->Tag == B1->Tag) && (B1->Tag == C1->Tag) && A1->Tag != "?")wygral = true;
				 if ((A2->Tag == B2->Tag) && (B2->Tag == C2->Tag) && A2->Tag != "?")wygral = true;
				 if ((A3->Tag == B3->Tag) && (B3->Tag == C3->Tag) && A3->Tag != "?")wygral = true;
				//Wygrana w pionie
				 if ((A1->Tag == A2->Tag) && (A2->Tag == A3->Tag) && A1->Tag != "?")wygral = true;
				 if ((B1->Tag == B2->Tag) && (B2->Tag == B3->Tag) && B1->Tag != "?")wygral = true;
				 if ((C1->Tag == C2->Tag) && (C2->Tag == C3->Tag) && C1->Tag != "?")wygral = true;
				 //Wygrana na ukos
				 if ((A1->Tag == B2->Tag) && (B2->Tag == C3->Tag) && A1->Tag != "?")wygral = true;
				 if ((C1->Tag == B2->Tag) && (B2->Tag == A3->Tag) && C1->Tag != "?")wygral = true;

				 if (wygral) {
					 for each(Control^element in this->Controls) {
						 if (element->GetType() == PictureBox::typeid) element->Enabled = false;
					 }

					 if (wcisniety) {
						 liczO++;
						 lblLicznikO->Text = Convert::ToString(liczO);
						 mistrz = "O";
					 }
					 else {
						 liczX++;
						 lblLicznikX->Text = Convert::ToString(liczX);
						 mistrz = "X";
					 }


					 MessageBox::Show("Wygrana " + mistrz, "Kó³ko i Krzy¿yk", MessageBoxButtons::OK, MessageBoxIcon::Information);
				 }
			 }

private: Void starter() {
	for each(Control^ element in this->Controls) {
		try {
			PictureBox^ zdjecie = (PictureBox^)element;
			zdjecie->Enabled = true;
			zdjecie->Tag = "?";
			zdjecie->Image = imageList1->Images[2];
		}
		catch (...)//Z³apanie wszystkich wyjadków czyli w tym przypadku nie mozna przypisac Button do PictureBox 
		{

		}
	}
}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	wygral = false;
	starter();
}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	wygral = false;
	starter();
	liczO = 0;
	liczX = 0;
	lblLicznikO->Text = Convert::ToString(liczO);
	lblLicznikX->Text = Convert::ToString(liczX);
}
};
}
