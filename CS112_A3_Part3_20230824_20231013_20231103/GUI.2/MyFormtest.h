#pragma once
#include "Image_Class.h"
#include "iostream"


namespace GUI2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::IO;
    using namespace System::Collections::Generic;

	using namespace std;
	class Image;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		GUI2::Image* image;
	public:
		MyForm(void)
		{
			InitializeComponent();
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->ControlBox = false;
            this->Text = "";

			image = nullptr;
		}
	private: Guna::UI::WinForms::GunaAdvenceButton^ minimize;
	public:
	private: Guna::UI::WinForms::GunaAdvenceButton^ hide;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ grayscale;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ New;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ black;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ invert;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ merge;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ flip;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ rotate;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ darken;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ crop;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ frame;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ edges;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ resizing;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ blur;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ save;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ clearImage;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ clear;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ dark;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ lighten;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ image_1;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ Image_2;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ ok;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ vertical;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ horizontal;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ drop2;

    private: ComponentFactory::Krypton::Toolkit::KryptonPanel^ Panel;

    private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ xaxis;
    private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ yaxis;
    private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ CroppedHeight;

    private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ CroppedWidth;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ ok1;
    private: ComponentFactory::Krypton::Toolkit::KryptonPanel^ panel1;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ ok2;



    private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ NewHeight;



    private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ NewWidth1;
    private: System::Windows::Forms::TrackBar^ trackBar1;
    private: ComponentFactory::Krypton::Toolkit::KryptonLabel^ text2;
    private: System::Windows::Forms::Label^ label1;
    private: ComponentFactory::Krypton::Toolkit::KryptonLabel^ text3;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ Sunlight;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ infraredmode;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ oilPainted;

















		   Bitmap^ originalImage;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
			if (image) {
				delete image;
			}
		}






	protected:




















	private: Guna::UI::WinForms::GunaAdvenceButton^ exit;



	private: Guna::UI::WinForms::GunaPictureBox^ image1;






























	protected:

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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->exit = (gcnew Guna::UI::WinForms::GunaAdvenceButton());
            this->image1 = (gcnew Guna::UI::WinForms::GunaPictureBox());
            this->minimize = (gcnew Guna::UI::WinForms::GunaAdvenceButton());
            this->hide = (gcnew Guna::UI::WinForms::GunaAdvenceButton());
            this->grayscale = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->New = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->black = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->invert = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->merge = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->flip = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->rotate = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->darken = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->crop = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->frame = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->edges = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->resizing = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->blur = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->save = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->clearImage = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->clear = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->dark = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->lighten = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->image_1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->Image_2 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->ok = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->vertical = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->horizontal = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->drop2 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->Panel = (gcnew ComponentFactory::Krypton::Toolkit::KryptonPanel());
            this->ok1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->CroppedHeight = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->CroppedWidth = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->yaxis = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->xaxis = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->panel1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonPanel());
            this->ok2 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->NewHeight = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->NewWidth1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
            this->text2 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonLabel());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->text3 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonLabel());
            this->Sunlight = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->infraredmode = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->oilPainted = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->image1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Panel))->BeginInit();
            this->Panel->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->panel1))->BeginInit();
            this->panel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
            this->SuspendLayout();
            // 
            // exit
            // 
            this->exit->AnimationHoverSpeed = 0.07F;
            this->exit->AnimationSpeed = 0.03F;
            this->exit->BackColor = System::Drawing::Color::Transparent;
            this->exit->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(252)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->exit->BorderColor = System::Drawing::Color::Black;
            this->exit->CheckedBaseColor = System::Drawing::Color::Gray;
            this->exit->CheckedBorderColor = System::Drawing::Color::Black;
            this->exit->CheckedForeColor = System::Drawing::Color::White;
            this->exit->CheckedImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exit.CheckedImage")));
            this->exit->CheckedLineColor = System::Drawing::Color::DimGray;
            this->exit->DialogResult = System::Windows::Forms::DialogResult::None;
            this->exit->FocusedColor = System::Drawing::Color::Empty;
            this->exit->Font = (gcnew System::Drawing::Font(L"Rubik", 9));
            this->exit->ForeColor = System::Drawing::Color::DimGray;
            this->exit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exit.Image")));
            this->exit->ImageAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->exit->ImageSize = System::Drawing::Size(15, 15);
            this->exit->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)));
            this->exit->Location = System::Drawing::Point(806, 2);
            this->exit->Name = L"exit";
            this->exit->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(252)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->exit->OnHoverBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(252)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->exit->OnHoverForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(252)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->exit->OnHoverImage = nullptr;
            this->exit->OnHoverLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(252)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->exit->OnPressedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(252)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->exit->Radius = 5;
            this->exit->Size = System::Drawing::Size(27, 29);
            this->exit->TabIndex = 15;
            this->exit->Click += gcnew System::EventHandler(this, &MyForm::exit_Click);
            // 
            // image1
            // 
            this->image1->BackColor = System::Drawing::Color::White;
            this->image1->BaseColor = System::Drawing::Color::White;
            this->image1->Location = System::Drawing::Point(117, 32);
            this->image1->Name = L"image1";
            this->image1->Size = System::Drawing::Size(420, 369);
            this->image1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->image1->TabIndex = 19;
            this->image1->TabStop = false;
            this->image1->Click += gcnew System::EventHandler(this, &MyForm::image1_Click);
            // 
            // minimize
            // 
            this->minimize->AnimationHoverSpeed = 0.07F;
            this->minimize->AnimationSpeed = 0.03F;
            this->minimize->BackColor = System::Drawing::Color::Transparent;
            this->minimize->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(252)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->minimize->BorderColor = System::Drawing::Color::Black;
            this->minimize->CheckedBaseColor = System::Drawing::Color::Gray;
            this->minimize->CheckedBorderColor = System::Drawing::Color::Black;
            this->minimize->CheckedForeColor = System::Drawing::Color::White;
            this->minimize->CheckedImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"minimize.CheckedImage")));
            this->minimize->CheckedLineColor = System::Drawing::Color::DimGray;
            this->minimize->DialogResult = System::Windows::Forms::DialogResult::None;
            this->minimize->FocusedColor = System::Drawing::Color::Empty;
            this->minimize->Font = (gcnew System::Drawing::Font(L"Rubik", 9));
            this->minimize->ForeColor = System::Drawing::Color::DimGray;
            this->minimize->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"minimize.Image")));
            this->minimize->ImageAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->minimize->ImageSize = System::Drawing::Size(15, 15);
            this->minimize->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(252)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->minimize->Location = System::Drawing::Point(773, 2);
            this->minimize->Name = L"minimize";
            this->minimize->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(252)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->minimize->OnHoverBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->minimize->OnHoverForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(252)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->minimize->OnHoverImage = nullptr;
            this->minimize->OnHoverLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(252)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->minimize->OnPressedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(252)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->minimize->Radius = 5;
            this->minimize->Size = System::Drawing::Size(27, 29);
            this->minimize->TabIndex = 26;
            this->minimize->Click += gcnew System::EventHandler(this, &MyForm::minimize_Click);
            // 
            // hide
            // 
            this->hide->AnimationHoverSpeed = 0.07F;
            this->hide->AnimationSpeed = 0.03F;
            this->hide->BackColor = System::Drawing::Color::Transparent;
            this->hide->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(252)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->hide->BorderColor = System::Drawing::Color::Black;
            this->hide->CheckedBaseColor = System::Drawing::Color::Gray;
            this->hide->CheckedBorderColor = System::Drawing::Color::Black;
            this->hide->CheckedForeColor = System::Drawing::Color::White;
            this->hide->CheckedImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hide.CheckedImage")));
            this->hide->CheckedLineColor = System::Drawing::Color::DimGray;
            this->hide->DialogResult = System::Windows::Forms::DialogResult::None;
            this->hide->FocusedColor = System::Drawing::Color::Empty;
            this->hide->Font = (gcnew System::Drawing::Font(L"Rubik", 9));
            this->hide->ForeColor = System::Drawing::Color::DimGray;
            this->hide->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hide.Image")));
            this->hide->ImageAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->hide->ImageSize = System::Drawing::Size(15, 15);
            this->hide->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(170)));
            this->hide->Location = System::Drawing::Point(740, 2);
            this->hide->Name = L"hide";
            this->hide->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(252)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->hide->OnHoverBorderColor = System::Drawing::Color::Black;
            this->hide->OnHoverForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(252)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->hide->OnHoverImage = nullptr;
            this->hide->OnHoverLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(252)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->hide->OnPressedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(252)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->hide->Radius = 5;
            this->hide->Size = System::Drawing::Size(27, 29);
            this->hide->TabIndex = 27;
            this->hide->Click += gcnew System::EventHandler(this, &MyForm::hide_Click);
            // 
            // grayscale
            // 
            this->grayscale->Location = System::Drawing::Point(699, 51);
            this->grayscale->Name = L"grayscale";
            this->grayscale->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->grayscale->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->grayscale->OverrideDefault->Back->ColorAngle = 45;
            this->grayscale->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->grayscale->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->grayscale->OverrideDefault->Border->ColorAngle = 45;
            this->grayscale->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->grayscale->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->grayscale->OverrideDefault->Border->Rounding = 20;
            this->grayscale->OverrideDefault->Border->Width = 1;
            this->grayscale->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->grayscale->Size = System::Drawing::Size(140, 43);
            this->grayscale->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->grayscale->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->grayscale->StateCommon->Back->ColorAngle = 45;
            this->grayscale->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->grayscale->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->grayscale->StateCommon->Border->ColorAngle = 45;
            this->grayscale->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->grayscale->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->grayscale->StateCommon->Border->Rounding = 20;
            this->grayscale->StateCommon->Border->Width = 1;
            this->grayscale->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->grayscale->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->grayscale->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->grayscale->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->grayscale->StatePressed->Back->ColorAngle = 135;
            this->grayscale->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->grayscale->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->grayscale->StatePressed->Border->ColorAngle = 135;
            this->grayscale->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->grayscale->StatePressed->Border->Rounding = 20;
            this->grayscale->StatePressed->Border->Width = 1;
            this->grayscale->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->grayscale->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->grayscale->StateTracking->Back->ColorAngle = 45;
            this->grayscale->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->grayscale->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->grayscale->StateTracking->Border->ColorAngle = 45;
            this->grayscale->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->grayscale->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->grayscale->StateTracking->Border->Rounding = 20;
            this->grayscale->StateTracking->Border->Width = 1;
            this->grayscale->TabIndex = 28;
            this->grayscale->Values->Text = L"Grayscale";
            this->grayscale->Click += gcnew System::EventHandler(this, &MyForm::grayscale_Click);
            // 
            // New
            // 
            this->New->Location = System::Drawing::Point(4, 32);
            this->New->Name = L"New";
            this->New->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->New->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->New->OverrideDefault->Back->ColorAngle = 45;
            this->New->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->New->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->New->OverrideDefault->Border->ColorAngle = 45;
            this->New->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->New->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->New->OverrideDefault->Border->Rounding = 20;
            this->New->OverrideDefault->Border->Width = 1;
            this->New->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->New->Size = System::Drawing::Size(96, 43);
            this->New->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->New->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->New->StateCommon->Back->ColorAngle = 45;
            this->New->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->New->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->New->StateCommon->Border->ColorAngle = 45;
            this->New->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->New->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->New->StateCommon->Border->Rounding = 20;
            this->New->StateCommon->Border->Width = 1;
            this->New->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->New->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->New->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->New->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->New->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->New->StatePressed->Back->ColorAngle = 135;
            this->New->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->New->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->New->StatePressed->Border->ColorAngle = 135;
            this->New->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->New->StatePressed->Border->Rounding = 20;
            this->New->StatePressed->Border->Width = 1;
            this->New->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->New->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->New->StateTracking->Back->ColorAngle = 45;
            this->New->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->New->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->New->StateTracking->Border->ColorAngle = 45;
            this->New->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->New->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->New->StateTracking->Border->Rounding = 20;
            this->New->StateTracking->Border->Width = 1;
            this->New->TabIndex = 29;
            this->New->Values->Text = L"Add";
            this->New->Click += gcnew System::EventHandler(this, &MyForm::New_Click);
            // 
            // black
            // 
            this->black->Location = System::Drawing::Point(553, 51);
            this->black->Name = L"black";
            this->black->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->black->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->black->OverrideDefault->Back->ColorAngle = 45;
            this->black->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->black->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->black->OverrideDefault->Border->ColorAngle = 45;
            this->black->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->black->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->black->OverrideDefault->Border->Rounding = 20;
            this->black->OverrideDefault->Border->Width = 1;
            this->black->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->black->Size = System::Drawing::Size(140, 43);
            this->black->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->black->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->black->StateCommon->Back->ColorAngle = 45;
            this->black->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->black->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->black->StateCommon->Border->ColorAngle = 45;
            this->black->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->black->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->black->StateCommon->Border->Rounding = 20;
            this->black->StateCommon->Border->Width = 1;
            this->black->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->black->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->black->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->black->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->black->StatePressed->Back->ColorAngle = 135;
            this->black->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->black->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->black->StatePressed->Border->ColorAngle = 135;
            this->black->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->black->StatePressed->Border->Rounding = 20;
            this->black->StatePressed->Border->Width = 1;
            this->black->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->black->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->black->StateTracking->Back->ColorAngle = 45;
            this->black->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->black->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->black->StateTracking->Border->ColorAngle = 45;
            this->black->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->black->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->black->StateTracking->Border->Rounding = 20;
            this->black->StateTracking->Border->Width = 1;
            this->black->TabIndex = 30;
            this->black->Values->Text = L"Black and White";
            this->black->Click += gcnew System::EventHandler(this, &MyForm::black_Click);
            // 
            // invert
            // 
            this->invert->Location = System::Drawing::Point(553, 111);
            this->invert->Name = L"invert";
            this->invert->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->invert->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->invert->OverrideDefault->Back->ColorAngle = 45;
            this->invert->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->invert->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->invert->OverrideDefault->Border->ColorAngle = 45;
            this->invert->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->invert->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->invert->OverrideDefault->Border->Rounding = 20;
            this->invert->OverrideDefault->Border->Width = 1;
            this->invert->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->invert->Size = System::Drawing::Size(140, 43);
            this->invert->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->invert->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->invert->StateCommon->Back->ColorAngle = 45;
            this->invert->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->invert->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->invert->StateCommon->Border->ColorAngle = 45;
            this->invert->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->invert->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->invert->StateCommon->Border->Rounding = 20;
            this->invert->StateCommon->Border->Width = 1;
            this->invert->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->invert->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->invert->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->invert->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->invert->StatePressed->Back->ColorAngle = 135;
            this->invert->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->invert->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->invert->StatePressed->Border->ColorAngle = 135;
            this->invert->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->invert->StatePressed->Border->Rounding = 20;
            this->invert->StatePressed->Border->Width = 1;
            this->invert->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->invert->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->invert->StateTracking->Back->ColorAngle = 45;
            this->invert->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->invert->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->invert->StateTracking->Border->ColorAngle = 45;
            this->invert->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->invert->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->invert->StateTracking->Border->Rounding = 20;
            this->invert->StateTracking->Border->Width = 1;
            this->invert->TabIndex = 31;
            this->invert->Values->Text = L"Invert Image";
            this->invert->Click += gcnew System::EventHandler(this, &MyForm::invert_Click);
            // 
            // merge
            // 
            this->merge->Location = System::Drawing::Point(699, 111);
            this->merge->Name = L"merge";
            this->merge->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->merge->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->merge->OverrideDefault->Back->ColorAngle = 45;
            this->merge->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->merge->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->merge->OverrideDefault->Border->ColorAngle = 45;
            this->merge->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->merge->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->merge->OverrideDefault->Border->Rounding = 20;
            this->merge->OverrideDefault->Border->Width = 1;
            this->merge->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->merge->Size = System::Drawing::Size(140, 43);
            this->merge->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->merge->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->merge->StateCommon->Back->ColorAngle = 45;
            this->merge->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->merge->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->merge->StateCommon->Border->ColorAngle = 45;
            this->merge->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->merge->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->merge->StateCommon->Border->Rounding = 20;
            this->merge->StateCommon->Border->Width = 1;
            this->merge->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->merge->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->merge->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->merge->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->merge->StatePressed->Back->ColorAngle = 135;
            this->merge->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->merge->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->merge->StatePressed->Border->ColorAngle = 135;
            this->merge->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->merge->StatePressed->Border->Rounding = 20;
            this->merge->StatePressed->Border->Width = 1;
            this->merge->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->merge->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->merge->StateTracking->Back->ColorAngle = 45;
            this->merge->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->merge->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->merge->StateTracking->Border->ColorAngle = 45;
            this->merge->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->merge->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->merge->StateTracking->Border->Rounding = 20;
            this->merge->StateTracking->Border->Width = 1;
            this->merge->TabIndex = 32;
            this->merge->Values->Text = L"Merge Images";
            this->merge->Click += gcnew System::EventHandler(this, &MyForm::merge_Click_1);
            // 
            // flip
            // 
            this->flip->Location = System::Drawing::Point(553, 170);
            this->flip->Name = L"flip";
            this->flip->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->flip->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->flip->OverrideDefault->Back->ColorAngle = 45;
            this->flip->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->flip->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->flip->OverrideDefault->Border->ColorAngle = 45;
            this->flip->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->flip->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->flip->OverrideDefault->Border->Rounding = 20;
            this->flip->OverrideDefault->Border->Width = 1;
            this->flip->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->flip->Size = System::Drawing::Size(140, 43);
            this->flip->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->flip->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->flip->StateCommon->Back->ColorAngle = 45;
            this->flip->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->flip->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->flip->StateCommon->Border->ColorAngle = 45;
            this->flip->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->flip->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->flip->StateCommon->Border->Rounding = 20;
            this->flip->StateCommon->Border->Width = 1;
            this->flip->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->flip->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->flip->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->flip->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->flip->StatePressed->Back->ColorAngle = 135;
            this->flip->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->flip->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->flip->StatePressed->Border->ColorAngle = 135;
            this->flip->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->flip->StatePressed->Border->Rounding = 20;
            this->flip->StatePressed->Border->Width = 1;
            this->flip->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->flip->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->flip->StateTracking->Back->ColorAngle = 45;
            this->flip->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->flip->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->flip->StateTracking->Border->ColorAngle = 45;
            this->flip->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->flip->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->flip->StateTracking->Border->Rounding = 20;
            this->flip->StateTracking->Border->Width = 1;
            this->flip->TabIndex = 33;
            this->flip->Values->Text = L"Flip Image";
            this->flip->Click += gcnew System::EventHandler(this, &MyForm::flip_Click);
            // 
            // rotate
            // 
            this->rotate->Location = System::Drawing::Point(699, 170);
            this->rotate->Name = L"rotate";
            this->rotate->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->rotate->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->rotate->OverrideDefault->Back->ColorAngle = 45;
            this->rotate->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->rotate->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->rotate->OverrideDefault->Border->ColorAngle = 45;
            this->rotate->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->rotate->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->rotate->OverrideDefault->Border->Rounding = 20;
            this->rotate->OverrideDefault->Border->Width = 1;
            this->rotate->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->rotate->Size = System::Drawing::Size(140, 43);
            this->rotate->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->rotate->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->rotate->StateCommon->Back->ColorAngle = 45;
            this->rotate->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->rotate->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->rotate->StateCommon->Border->ColorAngle = 45;
            this->rotate->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->rotate->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->rotate->StateCommon->Border->Rounding = 20;
            this->rotate->StateCommon->Border->Width = 1;
            this->rotate->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->rotate->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->rotate->StateDisabled->Back->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rotate.StateDisabled.Back.Image")));
            this->rotate->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->rotate->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->rotate->StatePressed->Back->ColorAngle = 135;
            this->rotate->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->rotate->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->rotate->StatePressed->Border->ColorAngle = 135;
            this->rotate->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->rotate->StatePressed->Border->Rounding = 20;
            this->rotate->StatePressed->Border->Width = 1;
            this->rotate->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->rotate->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->rotate->StateTracking->Back->ColorAngle = 45;
            this->rotate->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->rotate->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->rotate->StateTracking->Border->ColorAngle = 45;
            this->rotate->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->rotate->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->rotate->StateTracking->Border->Rounding = 20;
            this->rotate->StateTracking->Border->Width = 1;
            this->rotate->TabIndex = 34;
            this->rotate->Values->Text = L"Rotate Image";
            // 
            // darken
            // 
            this->darken->Location = System::Drawing::Point(553, 229);
            this->darken->Name = L"darken";
            this->darken->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->darken->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->darken->OverrideDefault->Back->ColorAngle = 45;
            this->darken->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->darken->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->darken->OverrideDefault->Border->ColorAngle = 45;
            this->darken->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->darken->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->darken->OverrideDefault->Border->Rounding = 20;
            this->darken->OverrideDefault->Border->Width = 1;
            this->darken->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->darken->Size = System::Drawing::Size(140, 43);
            this->darken->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->darken->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->darken->StateCommon->Back->ColorAngle = 45;
            this->darken->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->darken->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->darken->StateCommon->Border->ColorAngle = 45;
            this->darken->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->darken->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->darken->StateCommon->Border->Rounding = 20;
            this->darken->StateCommon->Border->Width = 1;
            this->darken->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->darken->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->darken->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->darken->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->darken->StatePressed->Back->ColorAngle = 135;
            this->darken->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->darken->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->darken->StatePressed->Border->ColorAngle = 135;
            this->darken->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->darken->StatePressed->Border->Rounding = 20;
            this->darken->StatePressed->Border->Width = 1;
            this->darken->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->darken->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->darken->StateTracking->Back->ColorAngle = 45;
            this->darken->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->darken->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->darken->StateTracking->Border->ColorAngle = 45;
            this->darken->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->darken->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->darken->StateTracking->Border->Rounding = 20;
            this->darken->StateTracking->Border->Width = 1;
            this->darken->TabIndex = 35;
            this->darken->Values->Text = L"Darken and Lighten";
            this->darken->Click += gcnew System::EventHandler(this, &MyForm::darken_Click_1);
            // 
            // crop
            // 
            this->crop->Location = System::Drawing::Point(699, 229);
            this->crop->Name = L"crop";
            this->crop->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->crop->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->crop->OverrideDefault->Back->ColorAngle = 45;
            this->crop->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->crop->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->crop->OverrideDefault->Border->ColorAngle = 45;
            this->crop->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->crop->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->crop->OverrideDefault->Border->Rounding = 20;
            this->crop->OverrideDefault->Border->Width = 1;
            this->crop->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->crop->Size = System::Drawing::Size(140, 43);
            this->crop->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->crop->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->crop->StateCommon->Back->ColorAngle = 45;
            this->crop->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->crop->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->crop->StateCommon->Border->ColorAngle = 45;
            this->crop->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->crop->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->crop->StateCommon->Border->Rounding = 20;
            this->crop->StateCommon->Border->Width = 1;
            this->crop->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->crop->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->crop->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->crop->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->crop->StatePressed->Back->ColorAngle = 135;
            this->crop->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->crop->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->crop->StatePressed->Border->ColorAngle = 135;
            this->crop->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->crop->StatePressed->Border->Rounding = 20;
            this->crop->StatePressed->Border->Width = 1;
            this->crop->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->crop->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->crop->StateTracking->Back->ColorAngle = 45;
            this->crop->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->crop->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->crop->StateTracking->Border->ColorAngle = 45;
            this->crop->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->crop->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->crop->StateTracking->Border->Rounding = 20;
            this->crop->StateTracking->Border->Width = 1;
            this->crop->TabIndex = 36;
            this->crop->Values->Text = L"Crop Images";
            this->crop->Click += gcnew System::EventHandler(this, &MyForm::crop_Click);
            // 
            // frame
            // 
            this->frame->Location = System::Drawing::Point(553, 288);
            this->frame->Name = L"frame";
            this->frame->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->frame->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->frame->OverrideDefault->Back->ColorAngle = 45;
            this->frame->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->frame->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->frame->OverrideDefault->Border->ColorAngle = 45;
            this->frame->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->frame->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->frame->OverrideDefault->Border->Rounding = 20;
            this->frame->OverrideDefault->Border->Width = 1;
            this->frame->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->frame->Size = System::Drawing::Size(140, 43);
            this->frame->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->frame->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->frame->StateCommon->Back->ColorAngle = 45;
            this->frame->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->frame->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->frame->StateCommon->Border->ColorAngle = 45;
            this->frame->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->frame->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->frame->StateCommon->Border->Rounding = 20;
            this->frame->StateCommon->Border->Width = 1;
            this->frame->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->frame->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->frame->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->frame->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->frame->StatePressed->Back->ColorAngle = 135;
            this->frame->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->frame->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->frame->StatePressed->Border->ColorAngle = 135;
            this->frame->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->frame->StatePressed->Border->Rounding = 20;
            this->frame->StatePressed->Border->Width = 1;
            this->frame->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->frame->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->frame->StateTracking->Back->ColorAngle = 45;
            this->frame->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->frame->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->frame->StateTracking->Border->ColorAngle = 45;
            this->frame->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->frame->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->frame->StateTracking->Border->Rounding = 20;
            this->frame->StateTracking->Border->Width = 1;
            this->frame->TabIndex = 37;
            this->frame->Values->Text = L"Adding a Frame";
            // 
            // edges
            // 
            this->edges->Location = System::Drawing::Point(699, 288);
            this->edges->Name = L"edges";
            this->edges->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->edges->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->edges->OverrideDefault->Back->ColorAngle = 45;
            this->edges->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->edges->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->edges->OverrideDefault->Border->ColorAngle = 45;
            this->edges->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->edges->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->edges->OverrideDefault->Border->Rounding = 20;
            this->edges->OverrideDefault->Border->Width = 1;
            this->edges->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->edges->Size = System::Drawing::Size(140, 43);
            this->edges->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->edges->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->edges->StateCommon->Back->ColorAngle = 45;
            this->edges->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->edges->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->edges->StateCommon->Border->ColorAngle = 45;
            this->edges->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->edges->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->edges->StateCommon->Border->Rounding = 20;
            this->edges->StateCommon->Border->Width = 1;
            this->edges->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->edges->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->edges->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->edges->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->edges->StatePressed->Back->ColorAngle = 135;
            this->edges->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->edges->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->edges->StatePressed->Border->ColorAngle = 135;
            this->edges->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->edges->StatePressed->Border->Rounding = 20;
            this->edges->StatePressed->Border->Width = 1;
            this->edges->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->edges->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->edges->StateTracking->Back->ColorAngle = 45;
            this->edges->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->edges->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->edges->StateTracking->Border->ColorAngle = 45;
            this->edges->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->edges->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->edges->StateTracking->Border->Rounding = 20;
            this->edges->StateTracking->Border->Width = 1;
            this->edges->TabIndex = 38;
            this->edges->Values->Text = L"Image Edges";
            this->edges->Click += gcnew System::EventHandler(this, &MyForm::edges_Click_1);
            // 
            // resizing
            // 
            this->resizing->Location = System::Drawing::Point(553, 347);
            this->resizing->Name = L"resizing";
            this->resizing->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->resizing->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->resizing->OverrideDefault->Back->ColorAngle = 45;
            this->resizing->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->resizing->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->resizing->OverrideDefault->Border->ColorAngle = 45;
            this->resizing->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->resizing->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->resizing->OverrideDefault->Border->Rounding = 20;
            this->resizing->OverrideDefault->Border->Width = 1;
            this->resizing->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->resizing->Size = System::Drawing::Size(140, 43);
            this->resizing->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->resizing->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->resizing->StateCommon->Back->ColorAngle = 45;
            this->resizing->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->resizing->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->resizing->StateCommon->Border->ColorAngle = 45;
            this->resizing->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->resizing->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->resizing->StateCommon->Border->Rounding = 20;
            this->resizing->StateCommon->Border->Width = 1;
            this->resizing->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->resizing->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->resizing->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->resizing->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->resizing->StatePressed->Back->ColorAngle = 135;
            this->resizing->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->resizing->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->resizing->StatePressed->Border->ColorAngle = 135;
            this->resizing->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->resizing->StatePressed->Border->Rounding = 20;
            this->resizing->StatePressed->Border->Width = 1;
            this->resizing->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->resizing->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->resizing->StateTracking->Back->ColorAngle = 45;
            this->resizing->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->resizing->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->resizing->StateTracking->Border->ColorAngle = 45;
            this->resizing->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->resizing->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->resizing->StateTracking->Border->Rounding = 20;
            this->resizing->StateTracking->Border->Width = 1;
            this->resizing->TabIndex = 39;
            this->resizing->Values->Text = L"Resizing Images";
            this->resizing->Click += gcnew System::EventHandler(this, &MyForm::resizing_Click);
            // 
            // blur
            // 
            this->blur->Location = System::Drawing::Point(699, 347);
            this->blur->Name = L"blur";
            this->blur->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->blur->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->blur->OverrideDefault->Back->ColorAngle = 45;
            this->blur->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->blur->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->blur->OverrideDefault->Border->ColorAngle = 45;
            this->blur->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->blur->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->blur->OverrideDefault->Border->Rounding = 20;
            this->blur->OverrideDefault->Border->Width = 1;
            this->blur->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->blur->Size = System::Drawing::Size(140, 43);
            this->blur->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->blur->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->blur->StateCommon->Back->ColorAngle = 45;
            this->blur->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->blur->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->blur->StateCommon->Border->ColorAngle = 45;
            this->blur->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->blur->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->blur->StateCommon->Border->Rounding = 20;
            this->blur->StateCommon->Border->Width = 1;
            this->blur->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->blur->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->blur->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->blur->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->blur->StatePressed->Back->ColorAngle = 135;
            this->blur->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->blur->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->blur->StatePressed->Border->ColorAngle = 135;
            this->blur->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->blur->StatePressed->Border->Rounding = 20;
            this->blur->StatePressed->Border->Width = 1;
            this->blur->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->blur->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->blur->StateTracking->Back->ColorAngle = 45;
            this->blur->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->blur->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->blur->StateTracking->Border->ColorAngle = 45;
            this->blur->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->blur->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->blur->StateTracking->Border->Rounding = 20;
            this->blur->StateTracking->Border->Width = 1;
            this->blur->TabIndex = 40;
            this->blur->Values->Text = L"Blur Images";
            // 
            // save
            // 
            this->save->Location = System::Drawing::Point(4, 91);
            this->save->Name = L"save";
            this->save->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->save->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->save->OverrideDefault->Back->ColorAngle = 45;
            this->save->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->save->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->save->OverrideDefault->Border->ColorAngle = 45;
            this->save->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->save->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->save->OverrideDefault->Border->Rounding = 20;
            this->save->OverrideDefault->Border->Width = 1;
            this->save->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->save->Size = System::Drawing::Size(96, 43);
            this->save->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->save->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->save->StateCommon->Back->ColorAngle = 45;
            this->save->StateCommon->Back->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::CenterLeft;
            this->save->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->save->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->save->StateCommon->Border->ColorAngle = 45;
            this->save->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->save->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->save->StateCommon->Border->Rounding = 20;
            this->save->StateCommon->Border->Width = 1;
            this->save->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->save->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->save->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->save->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->save->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->save->StatePressed->Back->ColorAngle = 135;
            this->save->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->save->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->save->StatePressed->Border->ColorAngle = 135;
            this->save->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->save->StatePressed->Border->Rounding = 20;
            this->save->StatePressed->Border->Width = 1;
            this->save->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->save->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->save->StateTracking->Back->ColorAngle = 45;
            this->save->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->save->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->save->StateTracking->Border->ColorAngle = 45;
            this->save->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->save->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->save->StateTracking->Border->Rounding = 20;
            this->save->StateTracking->Border->Width = 1;
            this->save->TabIndex = 41;
            this->save->Values->Text = L"Save";
            this->save->Click += gcnew System::EventHandler(this, &MyForm::save_Click_1);
            // 
            // clearImage
            // 
            this->clearImage->Location = System::Drawing::Point(4, 153);
            this->clearImage->Name = L"clearImage";
            this->clearImage->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->clearImage->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->clearImage->OverrideDefault->Back->ColorAngle = 45;
            this->clearImage->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->clearImage->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->clearImage->OverrideDefault->Border->ColorAngle = 45;
            this->clearImage->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->clearImage->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->clearImage->OverrideDefault->Border->Rounding = 20;
            this->clearImage->OverrideDefault->Border->Width = 1;
            this->clearImage->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->clearImage->Size = System::Drawing::Size(96, 43);
            this->clearImage->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->clearImage->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->clearImage->StateCommon->Back->ColorAngle = 45;
            this->clearImage->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->clearImage->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->clearImage->StateCommon->Border->ColorAngle = 45;
            this->clearImage->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->clearImage->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->clearImage->StateCommon->Border->Rounding = 20;
            this->clearImage->StateCommon->Border->Width = 1;
            this->clearImage->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->clearImage->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->clearImage->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->clearImage->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->clearImage->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->clearImage->StatePressed->Back->ColorAngle = 135;
            this->clearImage->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->clearImage->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->clearImage->StatePressed->Border->ColorAngle = 135;
            this->clearImage->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->clearImage->StatePressed->Border->Rounding = 20;
            this->clearImage->StatePressed->Border->Width = 1;
            this->clearImage->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->clearImage->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->clearImage->StateTracking->Back->ColorAngle = 45;
            this->clearImage->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->clearImage->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->clearImage->StateTracking->Border->ColorAngle = 45;
            this->clearImage->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->clearImage->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->clearImage->StateTracking->Border->Rounding = 20;
            this->clearImage->StateTracking->Border->Width = 1;
            this->clearImage->TabIndex = 42;
            this->clearImage->Values->Text = L"Clear";
            this->clearImage->Click += gcnew System::EventHandler(this, &MyForm::clearImage_Click_1);
            // 
            // clear
            // 
            this->clear->Location = System::Drawing::Point(4, 213);
            this->clear->Name = L"clear";
            this->clear->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->clear->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->clear->OverrideDefault->Back->ColorAngle = 45;
            this->clear->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->clear->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->clear->OverrideDefault->Border->ColorAngle = 45;
            this->clear->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->clear->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->clear->OverrideDefault->Border->Rounding = 20;
            this->clear->OverrideDefault->Border->Width = 1;
            this->clear->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->clear->Size = System::Drawing::Size(96, 43);
            this->clear->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->clear->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->clear->StateCommon->Back->ColorAngle = 45;
            this->clear->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->clear->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->clear->StateCommon->Border->ColorAngle = 45;
            this->clear->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->clear->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->clear->StateCommon->Border->Rounding = 20;
            this->clear->StateCommon->Border->Width = 1;
            this->clear->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->clear->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->clear->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->clear->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->clear->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->clear->StatePressed->Back->ColorAngle = 135;
            this->clear->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->clear->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->clear->StatePressed->Border->ColorAngle = 135;
            this->clear->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->clear->StatePressed->Border->Rounding = 20;
            this->clear->StatePressed->Border->Width = 1;
            this->clear->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->clear->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->clear->StateTracking->Back->ColorAngle = 45;
            this->clear->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->clear->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->clear->StateTracking->Border->ColorAngle = 45;
            this->clear->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->clear->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->clear->StateTracking->Border->Rounding = 20;
            this->clear->StateTracking->Border->Width = 1;
            this->clear->TabIndex = 43;
            this->clear->Values->Text = L"Delete";
            this->clear->Click += gcnew System::EventHandler(this, &MyForm::clear_Click_1);
            // 
            // dark
            // 
            this->dark->Location = System::Drawing::Point(112, 458);
            this->dark->Name = L"dark";
            this->dark->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->dark->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->dark->OverrideDefault->Back->ColorAngle = 45;
            this->dark->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->dark->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->dark->OverrideDefault->Border->ColorAngle = 45;
            this->dark->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->dark->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->dark->OverrideDefault->Border->Rounding = 20;
            this->dark->OverrideDefault->Border->Width = 1;
            this->dark->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->dark->Size = System::Drawing::Size(140, 43);
            this->dark->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->dark->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->dark->StateCommon->Back->ColorAngle = 45;
            this->dark->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->dark->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->dark->StateCommon->Border->ColorAngle = 45;
            this->dark->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->dark->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->dark->StateCommon->Border->Rounding = 20;
            this->dark->StateCommon->Border->Width = 1;
            this->dark->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->dark->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->dark->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->dark->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->dark->StatePressed->Back->ColorAngle = 135;
            this->dark->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->dark->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->dark->StatePressed->Border->ColorAngle = 135;
            this->dark->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->dark->StatePressed->Border->Rounding = 20;
            this->dark->StatePressed->Border->Width = 1;
            this->dark->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->dark->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->dark->StateTracking->Back->ColorAngle = 45;
            this->dark->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->dark->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->dark->StateTracking->Border->ColorAngle = 45;
            this->dark->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->dark->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->dark->StateTracking->Border->Rounding = 20;
            this->dark->StateTracking->Border->Width = 1;
            this->dark->TabIndex = 44;
            this->dark->Values->Text = L"Darken";
            this->dark->Click += gcnew System::EventHandler(this, &MyForm::dark_Click);
            // 
            // lighten
            // 
            this->lighten->Location = System::Drawing::Point(411, 458);
            this->lighten->Name = L"lighten";
            this->lighten->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->lighten->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->lighten->OverrideDefault->Back->ColorAngle = 45;
            this->lighten->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->lighten->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->lighten->OverrideDefault->Border->ColorAngle = 45;
            this->lighten->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->lighten->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->lighten->OverrideDefault->Border->Rounding = 20;
            this->lighten->OverrideDefault->Border->Width = 1;
            this->lighten->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->lighten->Size = System::Drawing::Size(140, 43);
            this->lighten->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->lighten->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->lighten->StateCommon->Back->ColorAngle = 45;
            this->lighten->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->lighten->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->lighten->StateCommon->Border->ColorAngle = 45;
            this->lighten->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->lighten->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->lighten->StateCommon->Border->Rounding = 20;
            this->lighten->StateCommon->Border->Width = 1;
            this->lighten->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->lighten->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->lighten->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->lighten->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->lighten->StatePressed->Back->ColorAngle = 135;
            this->lighten->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->lighten->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->lighten->StatePressed->Border->ColorAngle = 135;
            this->lighten->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->lighten->StatePressed->Border->Rounding = 20;
            this->lighten->StatePressed->Border->Width = 1;
            this->lighten->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->lighten->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->lighten->StateTracking->Back->ColorAngle = 45;
            this->lighten->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->lighten->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->lighten->StateTracking->Border->ColorAngle = 45;
            this->lighten->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->lighten->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->lighten->StateTracking->Border->Rounding = 20;
            this->lighten->StateTracking->Border->Width = 1;
            this->lighten->TabIndex = 45;
            this->lighten->Values->Text = L"Lighten";
            this->lighten->Click += gcnew System::EventHandler(this, &MyForm::lighten_Click);
            // 
            // image_1
            // 
            this->image_1->Location = System::Drawing::Point(61, 458);
            this->image_1->Name = L"image_1";
            this->image_1->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->image_1->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->image_1->OverrideDefault->Back->ColorAngle = 45;
            this->image_1->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->image_1->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->image_1->OverrideDefault->Border->ColorAngle = 45;
            this->image_1->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->image_1->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->image_1->OverrideDefault->Border->Rounding = 20;
            this->image_1->OverrideDefault->Border->Width = 1;
            this->image_1->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->image_1->Size = System::Drawing::Size(191, 43);
            this->image_1->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->image_1->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->image_1->StateCommon->Back->ColorAngle = 45;
            this->image_1->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->image_1->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->image_1->StateCommon->Border->ColorAngle = 45;
            this->image_1->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->image_1->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->image_1->StateCommon->Border->Rounding = 20;
            this->image_1->StateCommon->Border->Width = 1;
            this->image_1->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->image_1->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->image_1->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->image_1->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->image_1->StatePressed->Back->ColorAngle = 135;
            this->image_1->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->image_1->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->image_1->StatePressed->Border->ColorAngle = 135;
            this->image_1->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->image_1->StatePressed->Border->Rounding = 20;
            this->image_1->StatePressed->Border->Width = 1;
            this->image_1->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->image_1->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->image_1->StateTracking->Back->ColorAngle = 45;
            this->image_1->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->image_1->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->image_1->StateTracking->Border->ColorAngle = 45;
            this->image_1->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->image_1->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->image_1->StateTracking->Border->Rounding = 20;
            this->image_1->StateTracking->Border->Width = 1;
            this->image_1->TabIndex = 46;
            this->image_1->Values->Text = L"Add the first picture";
            this->image_1->Click += gcnew System::EventHandler(this, &MyForm::image_1_Click_1);
            // 
            // Image_2
            // 
            this->Image_2->Location = System::Drawing::Point(411, 458);
            this->Image_2->Name = L"Image_2";
            this->Image_2->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->Image_2->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->Image_2->OverrideDefault->Back->ColorAngle = 45;
            this->Image_2->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->Image_2->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->Image_2->OverrideDefault->Border->ColorAngle = 45;
            this->Image_2->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Image_2->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->Image_2->OverrideDefault->Border->Rounding = 20;
            this->Image_2->OverrideDefault->Border->Width = 1;
            this->Image_2->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->Image_2->Size = System::Drawing::Size(191, 43);
            this->Image_2->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->Image_2->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->Image_2->StateCommon->Back->ColorAngle = 45;
            this->Image_2->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->Image_2->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->Image_2->StateCommon->Border->ColorAngle = 45;
            this->Image_2->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Image_2->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->Image_2->StateCommon->Border->Rounding = 20;
            this->Image_2->StateCommon->Border->Width = 1;
            this->Image_2->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->Image_2->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->Image_2->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->Image_2->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->Image_2->StatePressed->Back->ColorAngle = 135;
            this->Image_2->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->Image_2->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->Image_2->StatePressed->Border->ColorAngle = 135;
            this->Image_2->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Image_2->StatePressed->Border->Rounding = 20;
            this->Image_2->StatePressed->Border->Width = 1;
            this->Image_2->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->Image_2->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->Image_2->StateTracking->Back->ColorAngle = 45;
            this->Image_2->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->Image_2->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->Image_2->StateTracking->Border->ColorAngle = 45;
            this->Image_2->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Image_2->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->Image_2->StateTracking->Border->Rounding = 20;
            this->Image_2->StateTracking->Border->Width = 1;
            this->Image_2->TabIndex = 47;
            this->Image_2->Values->Text = L"Add the second picture";
            this->Image_2->Click += gcnew System::EventHandler(this, &MyForm::Image_2_Click_1);
            // 
            // ok
            // 
            this->ok->Location = System::Drawing::Point(285, 467);
            this->ok->Name = L"ok";
            this->ok->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->ok->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->ok->OverrideDefault->Back->ColorAngle = 45;
            this->ok->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->ok->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->ok->OverrideDefault->Border->ColorAngle = 45;
            this->ok->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->ok->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->ok->OverrideDefault->Border->Rounding = 20;
            this->ok->OverrideDefault->Border->Width = 1;
            this->ok->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->ok->Size = System::Drawing::Size(96, 43);
            this->ok->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->ok->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->ok->StateCommon->Back->ColorAngle = 45;
            this->ok->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->ok->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->ok->StateCommon->Border->ColorAngle = 45;
            this->ok->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->ok->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->ok->StateCommon->Border->Rounding = 20;
            this->ok->StateCommon->Border->Width = 1;
            this->ok->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->ok->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->ok->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->ok->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->ok->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->ok->StatePressed->Back->ColorAngle = 135;
            this->ok->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->ok->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->ok->StatePressed->Border->ColorAngle = 135;
            this->ok->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->ok->StatePressed->Border->Rounding = 20;
            this->ok->StatePressed->Border->Width = 1;
            this->ok->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->ok->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->ok->StateTracking->Back->ColorAngle = 45;
            this->ok->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->ok->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->ok->StateTracking->Border->ColorAngle = 45;
            this->ok->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->ok->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->ok->StateTracking->Border->Rounding = 20;
            this->ok->StateTracking->Border->Width = 1;
            this->ok->TabIndex = 48;
            this->ok->Values->Text = L"Ok";
            this->ok->Click += gcnew System::EventHandler(this, &MyForm::ok_Click_1);
            // 
            // vertical
            // 
            this->vertical->Location = System::Drawing::Point(437, 458);
            this->vertical->Name = L"vertical";
            this->vertical->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->vertical->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->vertical->OverrideDefault->Back->ColorAngle = 45;
            this->vertical->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->vertical->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->vertical->OverrideDefault->Border->ColorAngle = 45;
            this->vertical->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->vertical->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->vertical->OverrideDefault->Border->Rounding = 20;
            this->vertical->OverrideDefault->Border->Width = 1;
            this->vertical->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->vertical->Size = System::Drawing::Size(140, 43);
            this->vertical->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->vertical->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->vertical->StateCommon->Back->ColorAngle = 45;
            this->vertical->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->vertical->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->vertical->StateCommon->Border->ColorAngle = 45;
            this->vertical->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->vertical->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->vertical->StateCommon->Border->Rounding = 20;
            this->vertical->StateCommon->Border->Width = 1;
            this->vertical->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->vertical->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->vertical->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->vertical->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->vertical->StatePressed->Back->ColorAngle = 135;
            this->vertical->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->vertical->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->vertical->StatePressed->Border->ColorAngle = 135;
            this->vertical->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->vertical->StatePressed->Border->Rounding = 20;
            this->vertical->StatePressed->Border->Width = 1;
            this->vertical->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->vertical->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->vertical->StateTracking->Back->ColorAngle = 45;
            this->vertical->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->vertical->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->vertical->StateTracking->Border->ColorAngle = 45;
            this->vertical->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->vertical->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->vertical->StateTracking->Border->Rounding = 20;
            this->vertical->StateTracking->Border->Width = 1;
            this->vertical->TabIndex = 49;
            this->vertical->Values->Text = L"Vertical";
            this->vertical->Click += gcnew System::EventHandler(this, &MyForm::vertical_Click);
            // 
            // horizontal
            // 
            this->horizontal->Location = System::Drawing::Point(89, 458);
            this->horizontal->Name = L"horizontal";
            this->horizontal->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->horizontal->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->horizontal->OverrideDefault->Back->ColorAngle = 45;
            this->horizontal->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->horizontal->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->horizontal->OverrideDefault->Border->ColorAngle = 45;
            this->horizontal->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->horizontal->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->horizontal->OverrideDefault->Border->Rounding = 20;
            this->horizontal->OverrideDefault->Border->Width = 1;
            this->horizontal->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->horizontal->Size = System::Drawing::Size(140, 43);
            this->horizontal->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->horizontal->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->horizontal->StateCommon->Back->ColorAngle = 45;
            this->horizontal->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->horizontal->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->horizontal->StateCommon->Border->ColorAngle = 45;
            this->horizontal->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->horizontal->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->horizontal->StateCommon->Border->Rounding = 20;
            this->horizontal->StateCommon->Border->Width = 1;
            this->horizontal->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->horizontal->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->horizontal->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->horizontal->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->horizontal->StatePressed->Back->ColorAngle = 135;
            this->horizontal->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->horizontal->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->horizontal->StatePressed->Border->ColorAngle = 135;
            this->horizontal->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->horizontal->StatePressed->Border->Rounding = 20;
            this->horizontal->StatePressed->Border->Width = 1;
            this->horizontal->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->horizontal->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->horizontal->StateTracking->Back->ColorAngle = 45;
            this->horizontal->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->horizontal->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->horizontal->StateTracking->Border->ColorAngle = 45;
            this->horizontal->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->horizontal->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->horizontal->StateTracking->Border->Rounding = 20;
            this->horizontal->StateTracking->Border->Width = 1;
            this->horizontal->TabIndex = 50;
            this->horizontal->Values->Text = L"Horizontal";
            this->horizontal->Click += gcnew System::EventHandler(this, &MyForm::horizontal_Click);
            // 
            // drop2
            // 
            this->drop2->Location = System::Drawing::Point(262, 213);
            this->drop2->Name = L"drop2";
            this->drop2->OverrideDefault->Back->Color1 = System::Drawing::Color::White;
            this->drop2->OverrideDefault->Back->Color2 = System::Drawing::Color::White;
            this->drop2->OverrideDefault->Back->ColorAngle = 45;
            this->drop2->OverrideDefault->Border->Color1 = System::Drawing::Color::White;
            this->drop2->OverrideDefault->Border->Color2 = System::Drawing::Color::White;
            this->drop2->OverrideDefault->Border->ColorAngle = 45;
            this->drop2->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->drop2->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->drop2->OverrideDefault->Border->Rounding = 20;
            this->drop2->OverrideDefault->Border->Width = 1;
            this->drop2->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->drop2->Size = System::Drawing::Size(140, 43);
            this->drop2->StateCommon->Back->Color1 = System::Drawing::Color::White;
            this->drop2->StateCommon->Back->Color2 = System::Drawing::Color::White;
            this->drop2->StateCommon->Back->ColorAngle = 45;
            this->drop2->StateCommon->Border->Color1 = System::Drawing::Color::White;
            this->drop2->StateCommon->Border->Color2 = System::Drawing::Color::White;
            this->drop2->StateCommon->Border->ColorAngle = 45;
            this->drop2->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->drop2->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->drop2->StateCommon->Border->Rounding = 0;
            this->drop2->StateCommon->Border->Width = 1;
            this->drop2->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::Gray;
            this->drop2->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->drop2->StatePressed->Back->Color1 = System::Drawing::Color::Transparent;
            this->drop2->StatePressed->Back->Color2 = System::Drawing::Color::Transparent;
            this->drop2->StatePressed->Back->ColorAngle = 135;
            this->drop2->StatePressed->Border->Color1 = System::Drawing::Color::White;
            this->drop2->StatePressed->Border->Color2 = System::Drawing::Color::White;
            this->drop2->StatePressed->Border->ColorAngle = 135;
            this->drop2->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->drop2->StatePressed->Border->Rounding = 20;
            this->drop2->StatePressed->Border->Width = 1;
            this->drop2->StateTracking->Back->Color1 = System::Drawing::Color::White;
            this->drop2->StateTracking->Back->Color2 = System::Drawing::Color::White;
            this->drop2->StateTracking->Back->ColorAngle = 45;
            this->drop2->StateTracking->Border->Color1 = System::Drawing::Color::Transparent;
            this->drop2->StateTracking->Border->Color2 = System::Drawing::Color::Transparent;
            this->drop2->StateTracking->Border->ColorAngle = 45;
            this->drop2->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->drop2->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->drop2->StateTracking->Border->Rounding = 20;
            this->drop2->StateTracking->Border->Width = 1;
            this->drop2->StateTracking->Content->ShortText->Color1 = System::Drawing::Color::Gray;
            this->drop2->StateTracking->Content->ShortText->Color2 = System::Drawing::Color::Gray;
            this->drop2->TabIndex = 51;
            this->drop2->Values->Text = L"Add Image...";
            this->drop2->Click += gcnew System::EventHandler(this, &MyForm::kryptonButton1_Click);
            // 
            // Panel
            // 
            this->Panel->AllowDrop = true;
            this->Panel->Controls->Add(this->ok1);
            this->Panel->Controls->Add(this->CroppedHeight);
            this->Panel->Controls->Add(this->CroppedWidth);
            this->Panel->Controls->Add(this->yaxis);
            this->Panel->Controls->Add(this->xaxis);
            this->Panel->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->Panel->Location = System::Drawing::Point(182, 62);
            this->Panel->Name = L"Panel";
            this->Panel->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
            this->Panel->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->Panel->PanelBackStyle = ComponentFactory::Krypton::Toolkit::PaletteBackStyle::HeaderPrimary;
            this->Panel->Size = System::Drawing::Size(297, 285);
            this->Panel->StateCommon->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
                static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->Panel->StateCommon->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
                static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->Panel->StateCommon->ColorAngle = 45;
            this->Panel->StateCommon->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->Panel->StateDisabled->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->Panel->StateDisabled->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->Panel->StateDisabled->ColorAngle = 1;
            this->Panel->StateNormal->ColorAngle = 1;
            this->Panel->StateNormal->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->Panel->TabIndex = 52;
            this->Panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::Panel_Paint);
            // 
            // ok1
            // 
            this->ok1->Location = System::Drawing::Point(107, 237);
            this->ok1->Name = L"ok1";
            this->ok1->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->ok1->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->ok1->OverrideDefault->Back->ColorAngle = 45;
            this->ok1->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->ok1->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->ok1->OverrideDefault->Border->ColorAngle = 45;
            this->ok1->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->ok1->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->ok1->OverrideDefault->Border->Rounding = 20;
            this->ok1->OverrideDefault->Border->Width = 1;
            this->ok1->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->ok1->Size = System::Drawing::Size(67, 45);
            this->ok1->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->ok1->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->ok1->StateCommon->Back->ColorAngle = 45;
            this->ok1->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->ok1->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->ok1->StateCommon->Border->ColorAngle = 45;
            this->ok1->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->ok1->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->ok1->StateCommon->Border->Rounding = 20;
            this->ok1->StateCommon->Border->Width = 1;
            this->ok1->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->ok1->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->ok1->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->ok1->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->ok1->StatePressed->Back->ColorAngle = 135;
            this->ok1->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->ok1->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->ok1->StatePressed->Border->ColorAngle = 135;
            this->ok1->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->ok1->StatePressed->Border->Rounding = 20;
            this->ok1->StatePressed->Border->Width = 1;
            this->ok1->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->ok1->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->ok1->StateTracking->Back->ColorAngle = 45;
            this->ok1->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->ok1->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->ok1->StateTracking->Border->ColorAngle = 45;
            this->ok1->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->ok1->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->ok1->StateTracking->Border->Rounding = 20;
            this->ok1->StateTracking->Border->Width = 1;
            this->ok1->TabIndex = 53;
            this->ok1->Values->Text = L"Ok";
            this->ok1->Click += gcnew System::EventHandler(this, &MyForm::ok1_Click);
            // 
            // CroppedHeight
            // 
            this->CroppedHeight->Location = System::Drawing::Point(27, 175);
            this->CroppedHeight->Name = L"CroppedHeight";
            this->CroppedHeight->Size = System::Drawing::Size(246, 37);
            this->CroppedHeight->StateCommon->Back->Color1 = System::Drawing::Color::White;
            this->CroppedHeight->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->CroppedHeight->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->CroppedHeight->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->CroppedHeight->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->CroppedHeight->StateCommon->Border->Rounding = 20;
            this->CroppedHeight->StateCommon->Border->Width = 1;
            this->CroppedHeight->StateCommon->Content->Color1 = System::Drawing::Color::Gray;
            this->CroppedHeight->StateCommon->Content->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F));
            this->CroppedHeight->StateCommon->Content->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
            this->CroppedHeight->TabIndex = 4;
            this->CroppedHeight->Text = L"Enter the height of the cropped:";
            // 
            // CroppedWidth
            // 
            this->CroppedWidth->Location = System::Drawing::Point(27, 118);
            this->CroppedWidth->Name = L"CroppedWidth";
            this->CroppedWidth->Size = System::Drawing::Size(246, 37);
            this->CroppedWidth->StateCommon->Back->Color1 = System::Drawing::Color::White;
            this->CroppedWidth->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->CroppedWidth->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->CroppedWidth->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->CroppedWidth->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->CroppedWidth->StateCommon->Border->Rounding = 20;
            this->CroppedWidth->StateCommon->Border->Width = 1;
            this->CroppedWidth->StateCommon->Content->Color1 = System::Drawing::Color::Gray;
            this->CroppedWidth->StateCommon->Content->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F));
            this->CroppedWidth->StateCommon->Content->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
            this->CroppedWidth->TabIndex = 3;
            this->CroppedWidth->Text = L"Enter the width of the cropped :";
            // 
            // yaxis
            // 
            this->yaxis->Location = System::Drawing::Point(27, 61);
            this->yaxis->Name = L"yaxis";
            this->yaxis->Size = System::Drawing::Size(246, 37);
            this->yaxis->StateCommon->Back->Color1 = System::Drawing::Color::White;
            this->yaxis->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->yaxis->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->yaxis->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->yaxis->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->yaxis->StateCommon->Border->Rounding = 20;
            this->yaxis->StateCommon->Border->Width = 1;
            this->yaxis->StateCommon->Content->Color1 = System::Drawing::Color::Gray;
            this->yaxis->StateCommon->Content->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F));
            this->yaxis->StateCommon->Content->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
            this->yaxis->TabIndex = 2;
            this->yaxis->Text = L"Enter starting point of y axis:";
            // 
            // xaxis
            // 
            this->xaxis->Location = System::Drawing::Point(27, 8);
            this->xaxis->Name = L"xaxis";
            this->xaxis->Size = System::Drawing::Size(246, 37);
            this->xaxis->StateCommon->Back->Color1 = System::Drawing::Color::White;
            this->xaxis->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->xaxis->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->xaxis->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->xaxis->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->xaxis->StateCommon->Border->Rounding = 20;
            this->xaxis->StateCommon->Border->Width = 1;
            this->xaxis->StateCommon->Content->Color1 = System::Drawing::Color::Gray;
            this->xaxis->StateCommon->Content->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->xaxis->StateCommon->Content->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
            this->xaxis->TabIndex = 1;
            this->xaxis->Text = L"Enter starting point of x axis:";
            // 
            // panel1
            // 
            this->panel1->AllowDrop = true;
            this->panel1->Controls->Add(this->ok2);
            this->panel1->Controls->Add(this->NewHeight);
            this->panel1->Controls->Add(this->NewWidth1);
            this->panel1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->panel1->Location = System::Drawing::Point(228, 27);
            this->panel1->Name = L"panel1";
            this->panel1->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
            this->panel1->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->panel1->PanelBackStyle = ComponentFactory::Krypton::Toolkit::PaletteBackStyle::HeaderPrimary;
            this->panel1->Size = System::Drawing::Size(209, 171);
            this->panel1->StateCommon->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
                static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->panel1->StateCommon->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
                static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->panel1->StateCommon->ColorAngle = 45;
            this->panel1->StateCommon->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->panel1->StateDisabled->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->panel1->StateDisabled->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->panel1->StateDisabled->ColorAngle = 1;
            this->panel1->StateNormal->ColorAngle = 1;
            this->panel1->StateNormal->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->panel1->TabIndex = 54;
            this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
            // 
            // ok2
            // 
            this->ok2->Location = System::Drawing::Point(64, 116);
            this->ok2->Name = L"ok2";
            this->ok2->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->ok2->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->ok2->OverrideDefault->Back->ColorAngle = 45;
            this->ok2->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->ok2->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->ok2->OverrideDefault->Border->ColorAngle = 45;
            this->ok2->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->ok2->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->ok2->OverrideDefault->Border->Rounding = 20;
            this->ok2->OverrideDefault->Border->Width = 1;
            this->ok2->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->ok2->Size = System::Drawing::Size(67, 45);
            this->ok2->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->ok2->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->ok2->StateCommon->Back->ColorAngle = 45;
            this->ok2->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->ok2->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->ok2->StateCommon->Border->ColorAngle = 45;
            this->ok2->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->ok2->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->ok2->StateCommon->Border->Rounding = 20;
            this->ok2->StateCommon->Border->Width = 1;
            this->ok2->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->ok2->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->ok2->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->ok2->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->ok2->StatePressed->Back->ColorAngle = 135;
            this->ok2->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->ok2->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->ok2->StatePressed->Border->ColorAngle = 135;
            this->ok2->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->ok2->StatePressed->Border->Rounding = 20;
            this->ok2->StatePressed->Border->Width = 1;
            this->ok2->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->ok2->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->ok2->StateTracking->Back->ColorAngle = 45;
            this->ok2->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->ok2->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->ok2->StateTracking->Border->ColorAngle = 45;
            this->ok2->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->ok2->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->ok2->StateTracking->Border->Rounding = 20;
            this->ok2->StateTracking->Border->Width = 1;
            this->ok2->TabIndex = 53;
            this->ok2->Values->Text = L"Ok";
            this->ok2->Click += gcnew System::EventHandler(this, &MyForm::ok2_Click);
            // 
            // NewHeight
            // 
            this->NewHeight->Location = System::Drawing::Point(18, 73);
            this->NewHeight->Name = L"NewHeight";
            this->NewHeight->Size = System::Drawing::Size(172, 37);
            this->NewHeight->StateCommon->Back->Color1 = System::Drawing::Color::White;
            this->NewHeight->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->NewHeight->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->NewHeight->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->NewHeight->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->NewHeight->StateCommon->Border->Rounding = 20;
            this->NewHeight->StateCommon->Border->Width = 1;
            this->NewHeight->StateCommon->Content->Color1 = System::Drawing::Color::Gray;
            this->NewHeight->StateCommon->Content->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F));
            this->NewHeight->StateCommon->Content->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
            this->NewHeight->TabIndex = 2;
            this->NewHeight->Text = L"Enter the new height";
            // 
            // NewWidth1
            // 
            this->NewWidth1->Location = System::Drawing::Point(18, 30);
            this->NewWidth1->Name = L"NewWidth1";
            this->NewWidth1->Size = System::Drawing::Size(172, 37);
            this->NewWidth1->StateCommon->Back->Color1 = System::Drawing::Color::White;
            this->NewWidth1->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->NewWidth1->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->NewWidth1->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->NewWidth1->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->NewWidth1->StateCommon->Border->Rounding = 20;
            this->NewWidth1->StateCommon->Border->Width = 1;
            this->NewWidth1->StateCommon->Content->Color1 = System::Drawing::Color::Gray;
            this->NewWidth1->StateCommon->Content->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->NewWidth1->StateCommon->Content->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
            this->NewWidth1->TabIndex = 1;
            this->NewWidth1->Text = L"Enter the new width";
            // 
            // trackBar1
            // 
            this->trackBar1->Location = System::Drawing::Point(117, 407);
            this->trackBar1->Maximum = 100;
            this->trackBar1->Name = L"trackBar1";
            this->trackBar1->Size = System::Drawing::Size(420, 45);
            this->trackBar1->TabIndex = 55;
            this->trackBar1->Value = 50;
            this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll);
            // 
            // text2
            // 
            this->text2->LabelStyle = ComponentFactory::Krypton::Toolkit::LabelStyle::TitleControl;
            this->text2->Location = System::Drawing::Point(228, 337);
            this->text2->Name = L"text2";
            this->text2->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->text2->Size = System::Drawing::Size(157, 24);
            this->text2->StateCommon->ShortText->Color1 = System::Drawing::Color::White;
            this->text2->StateCommon->ShortText->Color2 = System::Drawing::Color::White;
            this->text2->StateDisabled->ShortText->Color1 = System::Drawing::Color::White;
            this->text2->StateDisabled->ShortText->Color2 = System::Drawing::Color::White;
            this->text2->StateDisabled->ShortText->Font = (gcnew System::Drawing::Font(L"Gilroy Light", 11.25F));
            this->text2->StateNormal->ShortText->Color1 = System::Drawing::Color::Black;
            this->text2->StateNormal->ShortText->Color2 = System::Drawing::Color::Black;
            this->text2->StateNormal->ShortText->Font = (gcnew System::Drawing::Font(L"Gilroy Light", 11.25F));
            this->text2->TabIndex = 56;
            this->text2->Values->Text = L"Add the two images";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(637, 458);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(0, 17);
            this->label1->TabIndex = 57;
            // 
            // text3
            // 
            this->text3->LabelStyle = ComponentFactory::Krypton::Toolkit::LabelStyle::TitleControl;
            this->text3->Location = System::Drawing::Point(196, 358);
            this->text3->Name = L"text3";
            this->text3->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->text3->Size = System::Drawing::Size(232, 24);
            this->text3->StateCommon->ShortText->Color1 = System::Drawing::Color::White;
            this->text3->StateCommon->ShortText->Color2 = System::Drawing::Color::White;
            this->text3->StateDisabled->ShortText->Color1 = System::Drawing::Color::White;
            this->text3->StateDisabled->ShortText->Color2 = System::Drawing::Color::White;
            this->text3->StateDisabled->ShortText->Font = (gcnew System::Drawing::Font(L"Gilroy Light", 11.25F));
            this->text3->StateNormal->ShortText->Color1 = System::Drawing::Color::Black;
            this->text3->StateNormal->ShortText->Color2 = System::Drawing::Color::Black;
            this->text3->StateNormal->ShortText->Font = (gcnew System::Drawing::Font(L"Gilroy Light", 11.25F));
            this->text3->TabIndex = 58;
            this->text3->Values->Text = L"then click OK to apply the filter";
            // 
            // Sunlight
            // 
            this->Sunlight->Location = System::Drawing::Point(699, 407);
            this->Sunlight->Name = L"Sunlight";
            this->Sunlight->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->Sunlight->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->Sunlight->OverrideDefault->Back->ColorAngle = 45;
            this->Sunlight->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->Sunlight->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->Sunlight->OverrideDefault->Border->ColorAngle = 45;
            this->Sunlight->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Sunlight->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->Sunlight->OverrideDefault->Border->Rounding = 20;
            this->Sunlight->OverrideDefault->Border->Width = 1;
            this->Sunlight->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->Sunlight->Size = System::Drawing::Size(140, 43);
            this->Sunlight->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->Sunlight->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->Sunlight->StateCommon->Back->ColorAngle = 45;
            this->Sunlight->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->Sunlight->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->Sunlight->StateCommon->Border->ColorAngle = 45;
            this->Sunlight->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Sunlight->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->Sunlight->StateCommon->Border->Rounding = 20;
            this->Sunlight->StateCommon->Border->Width = 1;
            this->Sunlight->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->Sunlight->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->Sunlight->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->Sunlight->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->Sunlight->StatePressed->Back->ColorAngle = 135;
            this->Sunlight->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->Sunlight->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->Sunlight->StatePressed->Border->ColorAngle = 135;
            this->Sunlight->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Sunlight->StatePressed->Border->Rounding = 20;
            this->Sunlight->StatePressed->Border->Width = 1;
            this->Sunlight->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->Sunlight->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->Sunlight->StateTracking->Back->ColorAngle = 45;
            this->Sunlight->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->Sunlight->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->Sunlight->StateTracking->Border->ColorAngle = 45;
            this->Sunlight->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Sunlight->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->Sunlight->StateTracking->Border->Rounding = 20;
            this->Sunlight->StateTracking->Border->Width = 1;
            this->Sunlight->TabIndex = 59;
            this->Sunlight->Values->Text = L"Sun Light";
            this->Sunlight->Click += gcnew System::EventHandler(this, &MyForm::Sunlight_Click);
            // 
            // infraredmode
            // 
            this->infraredmode->Location = System::Drawing::Point(553, 407);
            this->infraredmode->Name = L"infraredmode";
            this->infraredmode->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->infraredmode->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->infraredmode->OverrideDefault->Back->ColorAngle = 45;
            this->infraredmode->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->infraredmode->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->infraredmode->OverrideDefault->Border->ColorAngle = 45;
            this->infraredmode->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->infraredmode->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->infraredmode->OverrideDefault->Border->Rounding = 20;
            this->infraredmode->OverrideDefault->Border->Width = 1;
            this->infraredmode->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->infraredmode->Size = System::Drawing::Size(140, 43);
            this->infraredmode->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->infraredmode->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->infraredmode->StateCommon->Back->ColorAngle = 45;
            this->infraredmode->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->infraredmode->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->infraredmode->StateCommon->Border->ColorAngle = 45;
            this->infraredmode->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->infraredmode->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->infraredmode->StateCommon->Border->Rounding = 20;
            this->infraredmode->StateCommon->Border->Width = 1;
            this->infraredmode->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->infraredmode->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->infraredmode->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->infraredmode->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->infraredmode->StatePressed->Back->ColorAngle = 135;
            this->infraredmode->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->infraredmode->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->infraredmode->StatePressed->Border->ColorAngle = 135;
            this->infraredmode->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->infraredmode->StatePressed->Border->Rounding = 20;
            this->infraredmode->StatePressed->Border->Width = 1;
            this->infraredmode->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->infraredmode->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->infraredmode->StateTracking->Back->ColorAngle = 45;
            this->infraredmode->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->infraredmode->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->infraredmode->StateTracking->Border->ColorAngle = 45;
            this->infraredmode->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->infraredmode->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->infraredmode->StateTracking->Border->Rounding = 20;
            this->infraredmode->StateTracking->Border->Width = 1;
            this->infraredmode->TabIndex = 60;
            this->infraredmode->Values->Text = L"Infrared Mode";
            this->infraredmode->Click += gcnew System::EventHandler(this, &MyForm::infraredmode_Click);
            // 
            // oilPainted
            // 
            this->oilPainted->Location = System::Drawing::Point(700, 466);
            this->oilPainted->Name = L"oilPainted";
            this->oilPainted->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->oilPainted->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->oilPainted->OverrideDefault->Back->ColorAngle = 45;
            this->oilPainted->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->oilPainted->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->oilPainted->OverrideDefault->Border->ColorAngle = 45;
            this->oilPainted->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->oilPainted->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->oilPainted->OverrideDefault->Border->Rounding = 20;
            this->oilPainted->OverrideDefault->Border->Width = 1;
            this->oilPainted->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->oilPainted->Size = System::Drawing::Size(140, 43);
            this->oilPainted->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->oilPainted->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->oilPainted->StateCommon->Back->ColorAngle = 45;
            this->oilPainted->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->oilPainted->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->oilPainted->StateCommon->Border->ColorAngle = 45;
            this->oilPainted->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->oilPainted->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->oilPainted->StateCommon->Border->Rounding = 20;
            this->oilPainted->StateCommon->Border->Width = 1;
            this->oilPainted->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->oilPainted->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->oilPainted->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->oilPainted->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->oilPainted->StatePressed->Back->ColorAngle = 135;
            this->oilPainted->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->oilPainted->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->oilPainted->StatePressed->Border->ColorAngle = 135;
            this->oilPainted->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->oilPainted->StatePressed->Border->Rounding = 20;
            this->oilPainted->StatePressed->Border->Width = 1;
            this->oilPainted->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->oilPainted->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->oilPainted->StateTracking->Back->ColorAngle = 45;
            this->oilPainted->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->oilPainted->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->oilPainted->StateTracking->Border->ColorAngle = 45;
            this->oilPainted->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->oilPainted->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->oilPainted->StateTracking->Border->Rounding = 20;
            this->oilPainted->StateTracking->Border->Width = 1;
            this->oilPainted->TabIndex = 61;
            this->oilPainted->Values->Text = L"Oil Painted";
            // 
            // MyForm
            // 
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(252)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->ClientSize = System::Drawing::Size(850, 532);
            this->ControlBox = false;
            this->Controls->Add(this->oilPainted);
            this->Controls->Add(this->infraredmode);
            this->Controls->Add(this->Sunlight);
            this->Controls->Add(this->text3);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->text2);
            this->Controls->Add(this->trackBar1);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->Panel);
            this->Controls->Add(this->drop2);
            this->Controls->Add(this->horizontal);
            this->Controls->Add(this->vertical);
            this->Controls->Add(this->ok);
            this->Controls->Add(this->Image_2);
            this->Controls->Add(this->image_1);
            this->Controls->Add(this->lighten);
            this->Controls->Add(this->dark);
            this->Controls->Add(this->clear);
            this->Controls->Add(this->clearImage);
            this->Controls->Add(this->save);
            this->Controls->Add(this->blur);
            this->Controls->Add(this->resizing);
            this->Controls->Add(this->edges);
            this->Controls->Add(this->frame);
            this->Controls->Add(this->crop);
            this->Controls->Add(this->darken);
            this->Controls->Add(this->rotate);
            this->Controls->Add(this->flip);
            this->Controls->Add(this->merge);
            this->Controls->Add(this->invert);
            this->Controls->Add(this->black);
            this->Controls->Add(this->New);
            this->Controls->Add(this->grayscale);
            this->Controls->Add(this->hide);
            this->Controls->Add(this->minimize);
            this->Controls->Add(this->image1);
            this->Controls->Add(this->exit);
            this->Font = (gcnew System::Drawing::Font(L"Gilroy Light", 11.25F));
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Margin = System::Windows::Forms::Padding(4);
            this->Name = L"MyForm";
            this->ShowIcon = false;
            this->Text = L"MyForm";
            this->TopMost = true;
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->image1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Panel))->EndInit();
            this->Panel->ResumeLayout(false);
            this->Panel->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->panel1))->EndInit();
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Sizable;
	image_1->Visible = false;
	Image_2->Visible = false;
	ok->Visible = false;
	dark->Visible = false;
	lighten->Visible = false;
    horizontal->Visible = false;
    vertical->Visible = false;
    Panel->Visible = false;
    panel1->Visible = false;
    trackBar1->Visible = false;
    text2->Visible = false;
    text3->Visible = false;


}



private: System::Void clear_Click_1(System::Object^ sender, System::EventArgs^ e) {
	image_1->Visible = false;
	Image_2->Visible = false;
	ok->Visible = false;
	dark->Visible = false;
	lighten->Visible = false;
    horizontal->Visible = false;
    vertical->Visible = false;
    Panel->Visible = false;
	image1->Image = nullptr;
    panel1->Visible = false;
    trackBar1->Visible = false;
    text2->Visible = false;
    text3->Visible = false;
}


private: System::Void merge_Click_1(System::Object^ sender, System::EventArgs^ e) {
	dark->Visible = false;
	lighten->Visible = false;
	image_1->Visible = true;
	Image_2->Visible = true;
    horizontal->Visible = false;
    vertical->Visible = false;
	ok->Visible = true;
    Panel->Visible = false;
    panel1->Visible = false;
    trackBar1->Visible = true;
    text2->Visible = true;
    text3->Visible = true;
    
}
	   
private: System::Void ApplyMergeFilter() {
    try{
        if (!System::String::IsNullOrEmpty(imagePath1) && !System::String::IsNullOrEmpty(imagePath2)) {
            Bitmap^ bmp1 = gcnew Bitmap(imagePath1);
            Bitmap^ bmp2 = gcnew Bitmap(imagePath2);

            int maxWidth = Math::Max(bmp1->Width, bmp2->Width);
            int maxHeight = Math::Max(bmp1->Height, bmp2->Height);

            Bitmap^ mergedBmp = gcnew Bitmap(maxWidth, maxHeight);

            int transparencyLevel = trackBar1->Value;

            for (int i = 0; i < maxWidth; ++i) {
                for (int j = 0; j < maxHeight; ++j) {
                    Color pixelColor1, pixelColor2;

                    if (i < bmp1->Width && j < bmp1->Height) {
                        pixelColor1 = bmp1->GetPixel(i, j);
                    }
                    else {
                        pixelColor1 = Color::Black;
                    }

                    if (i < bmp2->Width && j < bmp2->Height) {
                        pixelColor2 = bmp2->GetPixel(i, j);
                    }
                    else {
                        pixelColor2 = Color::Black;
                    }

                    int avgR = (pixelColor1.R * transparencyLevel / 100) + (pixelColor2.R * (100 - transparencyLevel) / 100);
                    int avgG = (pixelColor1.G * transparencyLevel / 100) + (pixelColor2.G * (100 - transparencyLevel) / 100);
                    int avgB = (pixelColor1.B * transparencyLevel / 100) + (pixelColor2.B * (100 - transparencyLevel) / 100);

                    Color mergedColor = Color::FromArgb(avgR, avgG, avgB);
                    mergedBmp->SetPixel(i, j, mergedColor);
                }
            }

            image1->SizeMode = PictureBoxSizeMode::Zoom;
            image1->Image = mergedBmp;
            text2->Visible = false;
            text3->Visible = false;
        }
        else {
            MessageBox::Show("Please select both images first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
        catch (Exception^ ex) {
        MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}



private: System::Void image_1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	try {
		OpenFileDialog^ dialog = gcnew OpenFileDialog();
		dialog->Filter = "JPEG files (*.jpg)|*.jpg|PNG files (*.png)|*.png|All files (*.*)|*.*";

		if (dialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			imagePath1 = dialog->FileName;
			Image_2->Visible = true;

		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void Image_2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	try {
		OpenFileDialog^ dialog = gcnew OpenFileDialog();
		dialog->Filter = "JPEG files (*.jpg)|*.jpg|PNG files (*.png)|*.png|All files (*.*)|*.*";

		if (dialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			imagePath2 = dialog->FileName;
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}


private: System::Void ok_Click_1(System::Object^ sender, System::EventArgs^ e) {
    drop2->Visible = false;
	try {
		if (!System::String::IsNullOrEmpty(imagePath1) && !System::String::IsNullOrEmpty(imagePath2)) {
			ApplyMergeFilter();
			originalImage = gcnew Bitmap(image1->Image);

		}
		else {
			MessageBox::Show("Please select both images first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
System::String^ imagePath1;
System::String^ imagePath2;
private: System::Void edges_Click_1(System::Object^ sender, System::EventArgs^ e) {
	image_1->Visible = false;
	Image_2->Visible = false;
    panel1->Visible = false;
	dark->Visible = false;
	lighten->Visible = false;
    horizontal->Visible = false;
    vertical->Visible = false;
    Panel->Visible = false;
	ok->Visible = false;
    trackBar1->Visible = false;
    text2->Visible = false;
    text3->Visible = false;
	if (image1->Image != nullptr) {
		int laplacian[3][3] = { {0, 1, 0},
								{1, -4, 1},
								{0, 1, 0} };
		double threshold = 80;

		Bitmap^ image = (Bitmap^)image1->Image;

		Bitmap^ output = gcnew Bitmap(image->Width, image->Height);

		for (int y = 1; y < image->Height - 1; y++) {
			for (int x = 1; x < image->Width - 1; x++) {
				double sum_laplacian = 0;

				for (int i = -1; i <= 1; i++) {
					for (int j = -1; j <= 1; j++) {
						Color pixelColor = image->GetPixel(x + j, y + i);
						double grayscale = (pixelColor.R + pixelColor.G + pixelColor.B) / 3.0;
						sum_laplacian += grayscale * laplacian[i + 1][j + 1];
					}
				}

				if (sum_laplacian > threshold) {
					output->SetPixel(x, y, Color::Black);
				}
				else {
					output->SetPixel(x, y, Color::White);
				}
			}
		}

		image1->Image = output;
	}
	else {
		MessageBox::Show("Please add an image first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void darken_Click_1(System::Object^ sender, System::EventArgs^ e) {
	dark->Visible = true;
	lighten->Visible = true;
	ok->Visible = false;
	image_1->Visible = false;
    horizontal->Visible = false;
    vertical->Visible = false;
	Image_2->Visible = false;
    Panel->Visible = false;
    panel1->Visible = false;
}

private: void ApplyFilterDarkLighten(String^ choice) {
		Bitmap^ image = (Bitmap^)image1->Image;
		for (int i = 0; i < image->Width; ++i) {
			for (int j = 0; j < image->Height; ++j) {
				Color pixelColor = image->GetPixel(i, j);

				int r = pixelColor.R;
				int g = pixelColor.G;
				int b = pixelColor.B;

				if (choice == "dark") {
					r = (int)(r * 0.5);
					g = (int)(g * 0.5);
					b = (int)(b * 0.5);
				}
				else {
					r = (int)(r + 0.5 * (255 - r));
					g = (int)(g + 0.5 * (255 - g));
					b = (int)(b + 0.5 * (255 - b));
				}

				r = Math::Min(r, 255);
				g = Math::Min(g, 255);
				b = Math::Min(b, 255);

				image->SetPixel(i, j, Color::FromArgb(r, g, b));
			}
		}

		image1->Image = image;
}


private: System::Void clearImage_Click_1(System::Object^ sender, System::EventArgs^ e) {
	image1->Image = originalImage;
    image_1->Visible = false;
    Image_2->Visible = false;
    ok->Visible = false;
    dark->Visible = false;
    lighten->Visible = false;
    horizontal->Visible = false;
    vertical->Visible = false;
    panel1->Visible = false;
    trackBar1->Visible = false;
    text2->Visible = false;
    text3->Visible = false;
}
private: System::Void minimize_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->WindowState == FormWindowState::Normal) {
		this->WindowState = FormWindowState::Maximized;
	}
	else {
		this->WindowState = FormWindowState::Normal;
	}
}
private: System::Void hide_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;
}
private: System::Void New_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		OpenFileDialog^ dialog = gcnew OpenFileDialog();
		dialog->Filter = "JPEG files (*.jpg)|*.jpg|PNG files (*.png)|*.png|All files (*.*)|*.*";
        drop2->Visible = false;
		if (dialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			System::String^ fileName = dialog->FileName;
			image1->SizeMode = PictureBoxSizeMode::Zoom;
			image1->Image = System::Drawing::Image::FromFile(fileName);
			originalImage = gcnew Bitmap(image1->Image);

		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void grayscale_Click(System::Object^ sender, System::EventArgs^ e) {
	image_1->Visible = false;
	Image_2->Visible = false;
	ok->Visible = false;
	dark->Visible = false;
	lighten->Visible = false;
    horizontal->Visible = false;
    vertical->Visible = false;
    Panel->Visible = false;
    panel1->Visible = false;
    trackBar1->Visible = false;
    text2->Visible = false;
    text3->Visible = false;
	try {
		if (image1->Image != nullptr) {
			Bitmap^ bmp = gcnew Bitmap(image1->Image);

			for (int i = 0; i < bmp->Width; ++i) {
				for (int j = 0; j < bmp->Height; ++j) {
					Color pixelColor = bmp->GetPixel(i, j);
					int avg = (pixelColor.R + pixelColor.G + pixelColor.B) / 3;
					bmp->SetPixel(i, j, Color::FromArgb(avg, avg, avg));
				}
			}

			image1->Image = bmp;
		}
		else {
			MessageBox::Show("Please add an image first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void save_Click_1(System::Object^ sender, System::EventArgs^ e) {
    try {
        if (image1->Image != nullptr) {
            SaveFileDialog^ saveDialog = gcnew SaveFileDialog();
            saveDialog->Filter = "JPEG files (*.jpg)|*.jpg|PNG files (*.png)|*.png|All files (*.*)|*.*";

            if (saveDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
                image1->Image->Save(saveDialog->FileName);
            }
        }
        else {
            MessageBox::Show("There is no image to save.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
    catch (Exception^ ex) {
        MessageBox::Show("Error while saving the image: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }

}


private: System::Void dark_Click(System::Object^ sender, System::EventArgs^ e) {
    ApplyFilterDarkLighten("dark");

}
private: System::Void lighten_Click(System::Object^ sender, System::EventArgs^ e) {
    ApplyFilterDarkLighten("light");
}

private: System::Void black_Click(System::Object^ sender, System::EventArgs^ e) {
    image_1->Visible = false;
    Image_2->Visible = false;
    ok->Visible = false;
    dark->Visible = false;
    lighten->Visible = false;
    horizontal->Visible = false;
    vertical->Visible = false;
    Panel->Visible = false;
    panel1->Visible = false;
    trackBar1->Visible = false;
    text2->Visible = false;
    text3->Visible = false;
    if (image1->Image != nullptr) {
        Bitmap^ bmp = gcnew Bitmap(image1->Image);
        for (int i = 0; i < bmp->Width; ++i) {
            for (int j = 0; j < bmp->Height; ++j) {
                Color pixelColor = bmp->GetPixel(i, j);
                int avg = (pixelColor.R + pixelColor.G + pixelColor.B) / 3;
                unsigned char grayscale = static_cast<unsigned char>(avg);
                bmp->SetPixel(i, j, Color::FromArgb(grayscale > 127 ? 255 : 0, grayscale > 127 ? 255 : 0, grayscale > 127 ? 255 : 0));
            }
        }

        image1->Image = bmp;
    }
    else {
        MessageBox::Show("Please add an image first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: System::Void invert_Click(System::Object^ sender, System::EventArgs^ e) {
    image_1->Visible = false;
    Image_2->Visible = false;
    ok->Visible = false;
    dark->Visible = false;
    lighten->Visible = false;
    horizontal->Visible = false;
    vertical->Visible = false;
    panel1->Visible = false;
    Panel->Visible = false;
    trackBar1->Visible = false;
    text2->Visible = false;
    text3->Visible = false;
    if (image1->Image != nullptr) {
        Bitmap^ img = gcnew Bitmap(image1->Image);
        for (int i = 0; i < img->Width; ++i) {
            for (int j = 0; j < img->Height; ++j) {
                Color pixelColor = img->GetPixel(i, j);
                int r = 255 - pixelColor.R;
                int g = 255 - pixelColor.G;
                int b = 255 - pixelColor.B;
                img->SetPixel(i, j, Color::FromArgb(r, g, b));

            }
        }
        image1->Image = img;

    }
}
private: System::Void flip_Click(System::Object^ sender, System::EventArgs^ e) {
    horizontal->Visible = true;
    vertical->Visible = true;
    image_1->Visible = false;
    Image_2->Visible = false;
    ok->Visible = false;
    dark->Visible = false;
    lighten->Visible = false;
    Panel->Visible = false;
    panel1->Visible = false;
}
private: System::Void horizontal_Click(System::Object^ sender, System::EventArgs^ e) {
    FlipImage("horizontal");

}
private: System::Void vertical_Click(System::Object^ sender, System::EventArgs^ e) {
    FlipImage("vertical");

}

private: void FlipImage(String^ direction) {
    if (image1->Image != nullptr) {
        Bitmap^ image = gcnew Bitmap(image1->Image);
        Bitmap^ image2 = gcnew Bitmap(image->Width, image->Height);

        if (direction == "horizontal") {
            for (int i = 0; i < image->Width; ++i) {
                for (int j = 0; j < image->Height; ++j) {
                    Color pixelColor = image->GetPixel(image->Width - i - 1, j);
                    image2->SetPixel(i, j, pixelColor);
                }
            }
        }
        else if (direction == "vertical") {
            for (int q = 0; q < image->Width; ++q) {
                for (int r = 0; r < image->Height; ++r) {
                    Color pixelColor = image->GetPixel(q, image->Height - r - 1);
                    image2->SetPixel(q, r, pixelColor);
                }
            }
        }
        image1->Image = image2;

    }
}
private: System::Void text_Click(System::Object^ sender, System::EventArgs^ e) {
    try {
        OpenFileDialog^ dialog = gcnew OpenFileDialog();
        dialog->Filter = "JPEG files (*.jpg)|*.jpg|PNG files (*.png)|*.png|All files (*.*)|*.*";

        if (dialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
            System::String^ fileName = dialog->FileName;
            image1->SizeMode = PictureBoxSizeMode::Zoom;
            image1->Image = System::Drawing::Image::FromFile(fileName);
            originalImage = gcnew Bitmap(image1->Image);

        }
    }
    catch (Exception^ ex) {
        MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}

private: System::Void lable_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void kryptonButton1_Click(System::Object^ sender, System::EventArgs^ e) {
    try {
        OpenFileDialog^ dialog = gcnew OpenFileDialog();
        dialog->Filter = "JPEG files (*.jpg)|*.jpg|PNG files (*.png)|*.png|All files (*.*)|*.*";
        drop2->Visible = false;
        if (dialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
            System::String^ fileName = dialog->FileName;
            image1->SizeMode = PictureBoxSizeMode::Zoom;
            image1->Image = System::Drawing::Image::FromFile(fileName);
            originalImage = gcnew Bitmap(image1->Image);

        }
    }
    catch (Exception^ ex) {
        MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: System::Void crop_Click(System::Object^ sender, System::EventArgs^ e) {
    horizontal->Visible = false;
    vertical->Visible = false;
    image_1->Visible = false;
    Image_2->Visible = false;
    ok->Visible = false;
    dark->Visible = false;
    lighten->Visible = false;
    panel1->Visible = false;
    trackBar1->Visible = false;
    text2->Visible = false;
    text3->Visible = false;

    if (image1->Image != nullptr) {
        Panel->Visible = true;
    }
    else {
        MessageBox::Show("Please add an image first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    
}
private: System::Void ok1_Click(System::Object^ sender, System::EventArgs^ e) {
    int XAxis, YAxis, CroppedW, CroppedH;

    if (!int::TryParse(xaxis->Text, XAxis) || !int::TryParse(yaxis->Text, YAxis) ||
        !int::TryParse(CroppedWidth->Text, CroppedW) || !int::TryParse(CroppedHeight->Text, CroppedH)) {
        MessageBox::Show("Please enter numbers.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    else {
        if (image1->Image != nullptr) {
            int imageWidth = image1->Width;
            int imageHeight = image1->Height;
            
                
            if (XAxis + CroppedW > imageWidth || YAxis + CroppedH > imageHeight) {
                MessageBox::Show("The values entered are larger than the image.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
            else {
                Bitmap^ image = gcnew Bitmap(image1->Image);
                Bitmap^ image2 = gcnew Bitmap(image->Width, image->Height);

                for (int i = 0; i < CroppedW; ++i) {
                    for (int j = 0; j < CroppedH; ++j) {
                        int originalWidth = XAxis + i;
                        int originalHeight = YAxis + j;

                        if (originalWidth < image->Width && originalHeight < image->Height) {
                            Color pixelColor = image->GetPixel(originalWidth, originalHeight);
                            image2->SetPixel(i, j, pixelColor);
                        }
                    }
                }
                image1->Image = image2;
                Panel->Visible = false;

            }
        }
    }
}
private: System::Void resizing_Click(System::Object^ sender, System::EventArgs^ e) {
    horizontal->Visible = false;
    vertical->Visible = false;
    image_1->Visible = false;
    Image_2->Visible = false;
    ok->Visible = false;
    dark->Visible = false;
    lighten->Visible = false;
    if (image1->Image != nullptr) {
        panel1->Visible = true;
    }
    else {
        MessageBox::Show("No image loaded.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}

private: System::Void ok2_Click(System::Object^ sender, System::EventArgs^ e) {
    int Width, Height;

    if (!int::TryParse(NewWidth1->Text, Width) || !int::TryParse(NewHeight->Text, Height)) {
        MessageBox::Show("Please enter valid numbers.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    else {
        if (Width <= 0 || Height <= 0) {
            MessageBox::Show("Please enter positive values for width and height.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            Bitmap^ original = gcnew Bitmap(image1->Image);
            Bitmap^ res = gcnew Bitmap(Width, Height);

            double scaleX = (double)original->Width / Width;
            double scaleY = (double)original->Height / Height;

            for (int i = 0; i < Width; i++) {
                for (int j = 0; j < Height; j++) {
                    int X = (int)(i * scaleX);
                    int Y = (int)(j * scaleY);
                    X = Math::Min(X, original->Width - 1);
                    Y = Math::Min(Y, original->Height - 1);

                    Color pixelColor = original->GetPixel(X, Y);
                    res->SetPixel(i, j, pixelColor);
                }
            }

            image1->Image = res;
            panel1->Visible = false;
        }
    }
}
private: System::Void image1_Click(System::Object^ sender, System::EventArgs^ e) {
    OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
    openFileDialog->Filter = "Image Files|*.bmp;*.jpg;*.jpeg;*.png;*.gif";
    openFileDialog->Title = "Select an image file";
    drop2->Visible = false;
    if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
        try {
            String^ fileName = openFileDialog->FileName;
            Bitmap^ selectedImage = gcnew Bitmap(fileName);
            image1->SizeMode = PictureBoxSizeMode::Zoom;
            image1->Image = selectedImage;
        }
        catch (Exception^ ex) {
            MessageBox::Show("Error loading image: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
}
private: System::Void Panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Sizable;

}
private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
    ApplyMergeFilter();
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    //this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Sizable;

}
private: System::Void Sunlight_Click(System::Object^ sender, System::EventArgs^ e) {
    if (image1->Image != nullptr) {
        Bitmap^ bmp = gcnew Bitmap(image1->Image);

        for (int i = 0; i < bmp->Width; i++) {
            for (int j = 0; j < bmp->Height; j++) {
                Color pixelValue = bmp->GetPixel(i, j);
                int red = Math::Min(255, (int)(pixelValue.R * 1.2));
                int green = Math::Min(255, (int)(pixelValue.G * 1.1));
                int blue = Math::Min(255, (int)(pixelValue.B * 0.9));
                Color newColor = Color::FromArgb(pixelValue.A, red, green, blue);
                bmp->SetPixel(i, j, newColor);
            }
        }

        image1->Image = bmp;
    }
    else {
        MessageBox::Show("Please add an image first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: System::Void infraredmode_Click(System::Object^ sender, System::EventArgs^ e) {
    if (image1->Image != nullptr) {
        Bitmap^ img = gcnew Bitmap(image1->Image);
        for (int i = 0; i < img->Width; ++i) {
            for (int j = 0; j < img->Height; ++j) {
                Color pixelColor = img->GetPixel(i, j);
                int green = 255 - pixelColor.G;
                int blue = 255 - pixelColor.B;
                img->SetPixel(i, j, Color::FromArgb(pixelColor.A, pixelColor.R, green, blue));
            }
        }

        for (int i = 0; i < img->Width; ++i) {
            for (int j = 0; j < img->Height; ++j) {
                Color pixelColor = img->GetPixel(i, j);
                img->SetPixel(i, j, Color::FromArgb(pixelColor.A, 255, pixelColor.G, pixelColor.B));
            }
        }

        image1->Image = img;
    }
    else {
        MessageBox::Show("Please add an image first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
};
}