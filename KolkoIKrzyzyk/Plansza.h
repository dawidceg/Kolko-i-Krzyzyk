#pragma once

namespace KolkoIKrzyzyk {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Plansza
	/// </summary>
	public ref class Plansza : public System::Windows::Forms::Form
	{
	public:
		bool wcisniety = true;
		bool wygrana = false;
		int liczx = 0;
		int liczo = 0;
		String^ kto = " ";

	private: System::Windows::Forms::ImageList^  imageList2;
	public:

		Plansza(void)
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
		~Plansza()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  lblLicznikX;
	private: System::Windows::Forms::Label^  lblLicznikO;

	private: System::Windows::Forms::Label^  lbl;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  A1;
	private: System::Windows::Forms::PictureBox^  B1;
	private: System::Windows::Forms::PictureBox^  C1;
	private: System::Windows::Forms::PictureBox^  C2;
	private: System::Windows::Forms::PictureBox^  B2;





	private: System::Windows::Forms::PictureBox^  A2;
	private: System::Windows::Forms::PictureBox^  C3;
	private: System::Windows::Forms::PictureBox^  B3;



	private: System::Windows::Forms::PictureBox^  A3;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Plansza::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblLicznikX = (gcnew System::Windows::Forms::Label());
			this->lblLicznikO = (gcnew System::Windows::Forms::Label());
			this->lbl = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->A1 = (gcnew System::Windows::Forms::PictureBox());
			this->B1 = (gcnew System::Windows::Forms::PictureBox());
			this->C1 = (gcnew System::Windows::Forms::PictureBox());
			this->C2 = (gcnew System::Windows::Forms::PictureBox());
			this->B2 = (gcnew System::Windows::Forms::PictureBox());
			this->A2 = (gcnew System::Windows::Forms::PictureBox());
			this->C3 = (gcnew System::Windows::Forms::PictureBox());
			this->B3 = (gcnew System::Windows::Forms::PictureBox());
			this->A3 = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imageList2 = (gcnew System::Windows::Forms::ImageList(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mistral", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(12, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Wygrane X:";
			// 
			// lblLicznikX
			// 
			this->lblLicznikX->AutoSize = true;
			this->lblLicznikX->BackColor = System::Drawing::Color::White;
			this->lblLicznikX->Font = (gcnew System::Drawing::Font(L"Mistral", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblLicznikX->Location = System::Drawing::Point(116, 12);
			this->lblLicznikX->Name = L"lblLicznikX";
			this->lblLicznikX->Size = System::Drawing::Size(28, 33);
			this->lblLicznikX->TabIndex = 1;
			this->lblLicznikX->Text = L"0";
			// 
			// lblLicznikO
			// 
			this->lblLicznikO->AutoSize = true;
			this->lblLicznikO->BackColor = System::Drawing::Color::White;
			this->lblLicznikO->Font = (gcnew System::Drawing::Font(L"Mistral", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblLicznikO->Location = System::Drawing::Point(288, 12);
			this->lblLicznikO->Name = L"lblLicznikO";
			this->lblLicznikO->Size = System::Drawing::Size(28, 33);
			this->lblLicznikO->TabIndex = 3;
			this->lblLicznikO->Text = L"0";
			// 
			// lbl
			// 
			this->lbl->AutoSize = true;
			this->lbl->BackColor = System::Drawing::Color::White;
			this->lbl->Font = (gcnew System::Drawing::Font(L"Mistral", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lbl->Location = System::Drawing::Point(184, 12);
			this->lbl->Name = L"lbl";
			this->lbl->Size = System::Drawing::Size(101, 29);
			this->lbl->TabIndex = 2;
			this->lbl->Text = L"Wygrane O:";
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(22, 368);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 30);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Now Gra";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Plansza::button1_Click);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(209, 368);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 30);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Plansza::button2_Click);
			// 
			// A1
			// 
			this->A1->BackColor = System::Drawing::Color::Transparent;
			this->A1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1.Image")));
			this->A1->Location = System::Drawing::Point(20, 76);
			this->A1->Name = L"A1";
			this->A1->Size = System::Drawing::Size(68, 62);
			this->A1->TabIndex = 6;
			this->A1->TabStop = false;
			this->A1->Tag = L"\?";
			this->A1->Click += gcnew System::EventHandler(this, &Plansza::GRAJ);
			// 
			// B1
			// 
			this->B1->BackColor = System::Drawing::Color::Transparent;
			this->B1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1.Image")));
			this->B1->Location = System::Drawing::Point(122, 66);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(74, 65);
			this->B1->TabIndex = 7;
			this->B1->TabStop = false;
			this->B1->Tag = L"\?";
			this->B1->Click += gcnew System::EventHandler(this, &Plansza::GRAJ);
			// 
			// C1
			// 
			this->C1->BackColor = System::Drawing::Color::Transparent;
			this->C1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C1.Image")));
			this->C1->Location = System::Drawing::Point(233, 57);
			this->C1->Name = L"C1";
			this->C1->Size = System::Drawing::Size(74, 65);
			this->C1->TabIndex = 8;
			this->C1->TabStop = false;
			this->C1->Tag = L"\?";
			this->C1->Click += gcnew System::EventHandler(this, &Plansza::GRAJ);
			// 
			// C2
			// 
			this->C2->BackColor = System::Drawing::Color::Transparent;
			this->C2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C2.Image")));
			this->C2->Location = System::Drawing::Point(230, 153);
			this->C2->Name = L"C2";
			this->C2->Size = System::Drawing::Size(74, 65);
			this->C2->TabIndex = 11;
			this->C2->TabStop = false;
			this->C2->Tag = L"\?";
			this->C2->Click += gcnew System::EventHandler(this, &Plansza::GRAJ);
			// 
			// B2
			// 
			this->B2->BackColor = System::Drawing::Color::Transparent;
			this->B2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2.Image")));
			this->B2->Location = System::Drawing::Point(129, 147);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(74, 65);
			this->B2->TabIndex = 10;
			this->B2->TabStop = false;
			this->B2->Tag = L"\?";
			this->B2->Click += gcnew System::EventHandler(this, &Plansza::GRAJ);
			// 
			// A2
			// 
			this->A2->BackColor = System::Drawing::Color::Transparent;
			this->A2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2.Image")));
			this->A2->Location = System::Drawing::Point(30, 165);
			this->A2->Name = L"A2";
			this->A2->Size = System::Drawing::Size(68, 62);
			this->A2->TabIndex = 9;
			this->A2->TabStop = false;
			this->A2->Tag = L"\?";
			this->A2->Click += gcnew System::EventHandler(this, &Plansza::GRAJ);
			// 
			// C3
			// 
			this->C3->BackColor = System::Drawing::Color::Transparent;
			this->C3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C3.Image")));
			this->C3->Location = System::Drawing::Point(243, 247);
			this->C3->Name = L"C3";
			this->C3->Size = System::Drawing::Size(74, 65);
			this->C3->TabIndex = 14;
			this->C3->TabStop = false;
			this->C3->Tag = L"\?";
			this->C3->Click += gcnew System::EventHandler(this, &Plansza::GRAJ);
			// 
			// B3
			// 
			this->B3->BackColor = System::Drawing::Color::Transparent;
			this->B3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3.Image")));
			this->B3->Location = System::Drawing::Point(122, 249);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(74, 65);
			this->B3->TabIndex = 13;
			this->B3->TabStop = false;
			this->B3->Tag = L"\?";
			this->B3->Click += gcnew System::EventHandler(this, &Plansza::GRAJ);
			// 
			// A3
			// 
			this->A3->BackColor = System::Drawing::Color::Transparent;
			this->A3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3.Image")));
			this->A3->Location = System::Drawing::Point(17, 263);
			this->A3->Name = L"A3";
			this->A3->Size = System::Drawing::Size(68, 62);
			this->A3->TabIndex = 12;
			this->A3->TabStop = false;
			this->A3->Tag = L"\?";
			this->A3->Click += gcnew System::EventHandler(this, &Plansza::GRAJ);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"O.png");
			this->imageList1->Images->SetKeyName(1, L"X.png");
			// 
			// imageList2
			// 
			this->imageList2->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList2.ImageStream")));
			this->imageList2->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList2->Images->SetKeyName(0, L"pytajnik1.png");
			// 
			// Plansza
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(321, 421);
			this->Controls->Add(this->C3);
			this->Controls->Add(this->B3);
			this->Controls->Add(this->A3);
			this->Controls->Add(this->C2);
			this->Controls->Add(this->B2);
			this->Controls->Add(this->A2);
			this->Controls->Add(this->C1);
			this->Controls->Add(this->B1);
			this->Controls->Add(this->A1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lblLicznikO);
			this->Controls->Add(this->lbl);
			this->Controls->Add(this->lblLicznikX);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Plansza";
			this->Text = L"Kó³ko i Krzy¿yk";
			this->Load += gcnew System::EventHandler(this, &Plansza::Plansza_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Plansza_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void GRAJ(System::Object^  sender, System::EventArgs^  e) {

	PictureBox^ obrazek = (PictureBox^)sender;

	if (wcisniety)
	{
		obrazek->Image = imageList1->Images[0];
		obrazek->Cursor = System::Windows::Forms::Cursors::Arrow;
		obrazek->Tag = "O";
	}
	else
	{
		obrazek->Image = imageList1->Images[1];
		obrazek->Cursor = System::Windows::Forms::Cursors::Arrow;
		obrazek->Tag = "X";
	}

	wcisniety = !wcisniety;
	obrazek->Enabled = false;
	sprawdz();

}
	private: Void sprawdz()
		{
			//Sprawdzenie wygranej w poziomie
			if ((A1->Tag == B1->Tag) && (B1->Tag == C1->Tag) && (A1->Tag != "?")) wygrana = true;
			if ((A2->Tag == B2->Tag) && (B2->Tag == C2->Tag) && (A2->Tag != "?")) wygrana = true;
			if ((A3->Tag == B3->Tag) && (B3->Tag == C3->Tag) && (A3->Tag != "?")) wygrana = true;

			//Sprawdzenie wygranej w pionie
			if ((A1->Tag == A2->Tag) && (A2->Tag == A3->Tag) && (A1->Tag != "?")) wygrana = true;
			if ((B1->Tag == B2->Tag) && (B2->Tag == B3->Tag) && (B1->Tag != "?")) wygrana = true;
			if ((C1->Tag == C2->Tag) && (C2->Tag == C3->Tag) && (C1->Tag != "?")) wygrana = true;

			//Sprawdzenie wygranej po przek¹tnej
			if ((A1->Tag == B2->Tag) && (B2->Tag == C3->Tag) && (A1->Tag != "?")) wygrana = true;
			if ((C1->Tag == B2->Tag) && (B2->Tag == A3->Tag) && (C1->Tag != "?")) wygrana = true;

			if (wygrana)
			{
				for each (Control^ element in this -> Controls) //Wy³¹cza po wygranej pozosta³e obrazki xo.
				{
					if (element->GetType() == PictureBox::typeid) element->Enabled = false;
				}

				if (wcisniety)
				{
					liczx++;
					lblLicznikX->Text = Convert::ToString(liczx);
					kto = "X";
				}
				else
				{
					liczo++;
					lblLicznikO->Text = Convert::ToString(liczo);
					kto = "O";
				}

				MessageBox::Show("Wygrana: " + kto, "Kó³ko i Krzy¿yk", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else if 
				((A1->Tag != "?" && A2->Tag != "?"  && A3->Tag != "?") &&
				 (B1->Tag != "?" && B2->Tag != "?"  && B3->Tag != "?") &&
				 (C1->Tag != "?" && C2->Tag != "?"  && C3->Tag != "?"))
			{
				MessageBox::Show("Remis!", "Kó³ko i Krzy¿yk", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}

	private: Void nowa_gra()
	{
		for each (Control^ element in this->Controls)
		{
			try
			{
				PictureBox^ obrazek = (PictureBox^)element;
				obrazek->Enabled = true;
				obrazek->Tag = "?";
				obrazek->Image = imageList2->Images[0];
			}
			catch (...)
			{
			}
		}
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		wygrana = false;
		nowa_gra();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

		wygrana = false;
		nowa_gra();
		liczo = 0;
		liczx = 0;
		lblLicznikO->Text = Convert::ToString(liczo);
		lblLicznikX->Text = Convert::ToString(liczx);
	}

};
}
