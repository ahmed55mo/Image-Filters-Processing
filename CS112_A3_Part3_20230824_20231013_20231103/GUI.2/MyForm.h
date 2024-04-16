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









    private: ComponentFactory::Krypton::Toolkit::KryptonPanel^ panel1;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ ok2;



    private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ NewHeight;



    private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ NewWidth1;
    private: System::Windows::Forms::TrackBar^ trackBar1;

    private: System::Windows::Forms::Label^ label1;

    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ Sunlight;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ infraredmode;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ oilPainted;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ rotate270;

    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ rotate180;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ rotate90;
    private: ComponentFactory::Krypton::Toolkit::KryptonPanel^ framePanel;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton1;
    private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ Thickness;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ more;




    private: ComponentFactory::Krypton::Toolkit::KryptonLabel^ bonustext;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ sharp;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ saturation;

    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ back;
    private: System::Windows::Forms::Panel^ MorePanel;
    private: ComponentFactory::Krypton::Toolkit::KryptonPanel^ blurPanel;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ OkBlur;

    private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ radius;
    private: ComponentFactory::Krypton::Toolkit::KryptonLabel^ text2;
    private: ComponentFactory::Krypton::Toolkit::KryptonLabel^ text3;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ skewed;

    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ tv;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ ok1;
    private: ComponentFactory::Krypton::Toolkit::KryptonPanel^ PanalOil;

    private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ intensityLevels;
    private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton2;
    private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ radius2;
    private: ComponentFactory::Krypton::Toolkit::KryptonPanel^ Panel;
    private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ CroppedHeight;
    private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ CroppedWidth;
    private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ yaxis;
    private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ xaxis;
private: ComponentFactory::Krypton::Toolkit::KryptonPanel^ SkewPanel;

private: ComponentFactory::Krypton::Toolkit::KryptonButton^ OkSkew;
private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ skewval;





























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
            this->panel1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonPanel());
            this->ok2 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->NewHeight = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->NewWidth1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->Sunlight = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->infraredmode = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->oilPainted = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->rotate270 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->rotate180 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->rotate90 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->framePanel = (gcnew ComponentFactory::Krypton::Toolkit::KryptonPanel());
            this->kryptonButton1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->Thickness = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->more = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->bonustext = (gcnew ComponentFactory::Krypton::Toolkit::KryptonLabel());
            this->sharp = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->saturation = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->back = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->MorePanel = (gcnew System::Windows::Forms::Panel());
            this->skewed = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->tv = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->blurPanel = (gcnew ComponentFactory::Krypton::Toolkit::KryptonPanel());
            this->OkBlur = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->radius = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->text2 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonLabel());
            this->text3 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonLabel());
            this->ok1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->PanalOil = (gcnew ComponentFactory::Krypton::Toolkit::KryptonPanel());
            this->intensityLevels = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->kryptonButton2 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->radius2 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->Panel = (gcnew ComponentFactory::Krypton::Toolkit::KryptonPanel());
            this->CroppedHeight = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->CroppedWidth = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->yaxis = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->xaxis = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            this->SkewPanel = (gcnew ComponentFactory::Krypton::Toolkit::KryptonPanel());
            this->OkSkew = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
            this->skewval = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->image1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->panel1))->BeginInit();
            this->panel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->framePanel))->BeginInit();
            this->framePanel->SuspendLayout();
            this->MorePanel->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->blurPanel))->BeginInit();
            this->blurPanel->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PanalOil))->BeginInit();
            this->PanalOil->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Panel))->BeginInit();
            this->Panel->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SkewPanel))->BeginInit();
            this->SkewPanel->SuspendLayout();
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
            this->grayscale->Location = System::Drawing::Point(700, 44);
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
            this->black->Location = System::Drawing::Point(554, 44);
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
            this->invert->Location = System::Drawing::Point(554, 104);
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
            this->merge->Location = System::Drawing::Point(700, 104);
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
            this->flip->Location = System::Drawing::Point(554, 163);
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
            this->rotate->Location = System::Drawing::Point(700, 163);
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
            this->rotate->Click += gcnew System::EventHandler(this, &MyForm::rotate_Click);
            // 
            // darken
            // 
            this->darken->Location = System::Drawing::Point(554, 222);
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
            this->crop->Location = System::Drawing::Point(700, 222);
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
            this->frame->Location = System::Drawing::Point(554, 281);
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
            this->frame->Click += gcnew System::EventHandler(this, &MyForm::frame_Click);
            // 
            // edges
            // 
            this->edges->Location = System::Drawing::Point(700, 281);
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
            this->resizing->Location = System::Drawing::Point(554, 340);
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
            this->blur->Location = System::Drawing::Point(700, 340);
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
            this->blur->Click += gcnew System::EventHandler(this, &MyForm::blur_Click);
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
            this->dark->Location = System::Drawing::Point(95, 458);
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
            this->lighten->Location = System::Drawing::Point(391, 458);
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
            this->image_1->Location = System::Drawing::Point(44, 458);
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
            this->Image_2->Location = System::Drawing::Point(374, 458);
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
            this->ok->Location = System::Drawing::Point(262, 460);
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
            this->vertical->Location = System::Drawing::Point(417, 458);
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
            this->horizontal->Location = System::Drawing::Point(55, 458);
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
            // panel1
            // 
            this->panel1->AllowDrop = true;
            this->panel1->Controls->Add(this->ok2);
            this->panel1->Controls->Add(this->NewHeight);
            this->panel1->Controls->Add(this->NewWidth1);
            this->panel1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->panel1->Location = System::Drawing::Point(219, 126);
            this->panel1->Name = L"panel1";
            this->panel1->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
            this->panel1->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->panel1->PanelBackStyle = ComponentFactory::Krypton::Toolkit::PaletteBackStyle::HeaderPrimary;
            this->panel1->Size = System::Drawing::Size(209, 171);
            this->panel1->StateCommon->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
                static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->panel1->StateCommon->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
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
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(638, 451);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(0, 17);
            this->label1->TabIndex = 57;
            // 
            // Sunlight
            // 
            this->Sunlight->Location = System::Drawing::Point(700, 400);
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
            this->infraredmode->Location = System::Drawing::Point(554, 400);
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
            this->oilPainted->Location = System::Drawing::Point(150, 17);
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
            this->oilPainted->Click += gcnew System::EventHandler(this, &MyForm::oilPainted_Click);
            // 
            // rotate270
            // 
            this->rotate270->Location = System::Drawing::Point(417, 458);
            this->rotate270->Name = L"rotate270";
            this->rotate270->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->rotate270->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->rotate270->OverrideDefault->Back->ColorAngle = 45;
            this->rotate270->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->rotate270->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->rotate270->OverrideDefault->Border->ColorAngle = 45;
            this->rotate270->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->rotate270->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->rotate270->OverrideDefault->Border->Rounding = 20;
            this->rotate270->OverrideDefault->Border->Width = 1;
            this->rotate270->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->rotate270->Size = System::Drawing::Size(140, 43);
            this->rotate270->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->rotate270->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->rotate270->StateCommon->Back->ColorAngle = 45;
            this->rotate270->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->rotate270->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->rotate270->StateCommon->Border->ColorAngle = 45;
            this->rotate270->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->rotate270->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->rotate270->StateCommon->Border->Rounding = 20;
            this->rotate270->StateCommon->Border->Width = 1;
            this->rotate270->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->rotate270->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->rotate270->StateDisabled->Back->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rotate270.StateDisabled.Back.Image")));
            this->rotate270->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->rotate270->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->rotate270->StatePressed->Back->ColorAngle = 135;
            this->rotate270->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->rotate270->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->rotate270->StatePressed->Border->ColorAngle = 135;
            this->rotate270->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->rotate270->StatePressed->Border->Rounding = 20;
            this->rotate270->StatePressed->Border->Width = 1;
            this->rotate270->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->rotate270->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->rotate270->StateTracking->Back->ColorAngle = 45;
            this->rotate270->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->rotate270->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->rotate270->StateTracking->Border->ColorAngle = 45;
            this->rotate270->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->rotate270->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->rotate270->StateTracking->Border->Rounding = 20;
            this->rotate270->StateTracking->Border->Width = 1;
            this->rotate270->TabIndex = 62;
            this->rotate270->Values->Text = L"Rotate of 270";
            this->rotate270->Click += gcnew System::EventHandler(this, &MyForm::rotate270_Click);
            // 
            // rotate180
            // 
            this->rotate180->Location = System::Drawing::Point(240, 460);
            this->rotate180->Name = L"rotate180";
            this->rotate180->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->rotate180->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->rotate180->OverrideDefault->Back->ColorAngle = 45;
            this->rotate180->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->rotate180->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->rotate180->OverrideDefault->Border->ColorAngle = 45;
            this->rotate180->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->rotate180->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->rotate180->OverrideDefault->Border->Rounding = 20;
            this->rotate180->OverrideDefault->Border->Width = 1;
            this->rotate180->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->rotate180->Size = System::Drawing::Size(140, 43);
            this->rotate180->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->rotate180->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->rotate180->StateCommon->Back->ColorAngle = 45;
            this->rotate180->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->rotate180->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->rotate180->StateCommon->Border->ColorAngle = 45;
            this->rotate180->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->rotate180->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->rotate180->StateCommon->Border->Rounding = 20;
            this->rotate180->StateCommon->Border->Width = 1;
            this->rotate180->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->rotate180->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->rotate180->StateDisabled->Back->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rotate180.StateDisabled.Back.Image")));
            this->rotate180->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->rotate180->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->rotate180->StatePressed->Back->ColorAngle = 135;
            this->rotate180->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->rotate180->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->rotate180->StatePressed->Border->ColorAngle = 135;
            this->rotate180->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->rotate180->StatePressed->Border->Rounding = 20;
            this->rotate180->StatePressed->Border->Width = 1;
            this->rotate180->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->rotate180->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->rotate180->StateTracking->Back->ColorAngle = 45;
            this->rotate180->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->rotate180->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->rotate180->StateTracking->Border->ColorAngle = 45;
            this->rotate180->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->rotate180->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->rotate180->StateTracking->Border->Rounding = 20;
            this->rotate180->StateTracking->Border->Width = 1;
            this->rotate180->TabIndex = 63;
            this->rotate180->Values->Text = L"Rotate of 180";
            this->rotate180->Click += gcnew System::EventHandler(this, &MyForm::rotate180_Click);
            // 
            // rotate90
            // 
            this->rotate90->Location = System::Drawing::Point(55, 458);
            this->rotate90->Name = L"rotate90";
            this->rotate90->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->rotate90->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->rotate90->OverrideDefault->Back->ColorAngle = 45;
            this->rotate90->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->rotate90->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->rotate90->OverrideDefault->Border->ColorAngle = 45;
            this->rotate90->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->rotate90->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->rotate90->OverrideDefault->Border->Rounding = 20;
            this->rotate90->OverrideDefault->Border->Width = 1;
            this->rotate90->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->rotate90->Size = System::Drawing::Size(140, 43);
            this->rotate90->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->rotate90->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->rotate90->StateCommon->Back->ColorAngle = 45;
            this->rotate90->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->rotate90->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->rotate90->StateCommon->Border->ColorAngle = 45;
            this->rotate90->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->rotate90->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->rotate90->StateCommon->Border->Rounding = 20;
            this->rotate90->StateCommon->Border->Width = 1;
            this->rotate90->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->rotate90->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->rotate90->StateDisabled->Back->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rotate90.StateDisabled.Back.Image")));
            this->rotate90->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->rotate90->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->rotate90->StatePressed->Back->ColorAngle = 135;
            this->rotate90->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->rotate90->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->rotate90->StatePressed->Border->ColorAngle = 135;
            this->rotate90->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->rotate90->StatePressed->Border->Rounding = 20;
            this->rotate90->StatePressed->Border->Width = 1;
            this->rotate90->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->rotate90->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->rotate90->StateTracking->Back->ColorAngle = 45;
            this->rotate90->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->rotate90->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->rotate90->StateTracking->Border->ColorAngle = 45;
            this->rotate90->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->rotate90->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->rotate90->StateTracking->Border->Rounding = 20;
            this->rotate90->StateTracking->Border->Width = 1;
            this->rotate90->TabIndex = 64;
            this->rotate90->Values->Text = L"Rotate of 90";
            this->rotate90->Click += gcnew System::EventHandler(this, &MyForm::rotate90_Click);
            // 
            // framePanel
            // 
            this->framePanel->AllowDrop = true;
            this->framePanel->Controls->Add(this->kryptonButton1);
            this->framePanel->Controls->Add(this->Thickness);
            this->framePanel->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->framePanel->Location = System::Drawing::Point(190, 407);
            this->framePanel->Name = L"framePanel";
            this->framePanel->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
            this->framePanel->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->framePanel->PanelBackStyle = ComponentFactory::Krypton::Toolkit::PaletteBackStyle::HeaderPrimary;
            this->framePanel->Size = System::Drawing::Size(251, 113);
            this->framePanel->StateCommon->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->framePanel->StateCommon->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->framePanel->StateCommon->ColorAngle = 45;
            this->framePanel->StateCommon->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->framePanel->StateDisabled->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->framePanel->StateDisabled->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->framePanel->StateDisabled->ColorAngle = 1;
            this->framePanel->StateNormal->ColorAngle = 1;
            this->framePanel->StateNormal->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->framePanel->TabIndex = 55;
            // 
            // kryptonButton1
            // 
            this->kryptonButton1->Location = System::Drawing::Point(90, 60);
            this->kryptonButton1->Name = L"kryptonButton1";
            this->kryptonButton1->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->kryptonButton1->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->kryptonButton1->OverrideDefault->Back->ColorAngle = 45;
            this->kryptonButton1->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton1->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton1->OverrideDefault->Border->ColorAngle = 45;
            this->kryptonButton1->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton1->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->kryptonButton1->OverrideDefault->Border->Rounding = 20;
            this->kryptonButton1->OverrideDefault->Border->Width = 1;
            this->kryptonButton1->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->kryptonButton1->Size = System::Drawing::Size(67, 45);
            this->kryptonButton1->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->kryptonButton1->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->kryptonButton1->StateCommon->Back->ColorAngle = 45;
            this->kryptonButton1->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->kryptonButton1->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton1->StateCommon->Border->ColorAngle = 45;
            this->kryptonButton1->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton1->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->kryptonButton1->StateCommon->Border->Rounding = 20;
            this->kryptonButton1->StateCommon->Border->Width = 1;
            this->kryptonButton1->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton1->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->kryptonButton1->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->kryptonButton1->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->kryptonButton1->StatePressed->Back->ColorAngle = 135;
            this->kryptonButton1->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->kryptonButton1->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->kryptonButton1->StatePressed->Border->ColorAngle = 135;
            this->kryptonButton1->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton1->StatePressed->Border->Rounding = 20;
            this->kryptonButton1->StatePressed->Border->Width = 1;
            this->kryptonButton1->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton1->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->kryptonButton1->StateTracking->Back->ColorAngle = 45;
            this->kryptonButton1->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->kryptonButton1->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton1->StateTracking->Border->ColorAngle = 45;
            this->kryptonButton1->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton1->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->kryptonButton1->StateTracking->Border->Rounding = 20;
            this->kryptonButton1->StateTracking->Border->Width = 1;
            this->kryptonButton1->TabIndex = 53;
            this->kryptonButton1->Values->Text = L"Ok";
            this->kryptonButton1->Click += gcnew System::EventHandler(this, &MyForm::kryptonButton1_Click_1);
            // 
            // Thickness
            // 
            this->Thickness->Location = System::Drawing::Point(6, 17);
            this->Thickness->Name = L"Thickness";
            this->Thickness->Size = System::Drawing::Size(239, 37);
            this->Thickness->StateCommon->Back->Color1 = System::Drawing::Color::White;
            this->Thickness->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->Thickness->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->Thickness->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->Thickness->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->Thickness->StateCommon->Border->Rounding = 20;
            this->Thickness->StateCommon->Border->Width = 1;
            this->Thickness->StateCommon->Content->Color1 = System::Drawing::Color::Gray;
            this->Thickness->StateCommon->Content->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->Thickness->StateCommon->Content->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
            this->Thickness->TabIndex = 1;
            this->Thickness->Text = L"Enter the thickness of the frame:";
            // 
            // more
            // 
            this->more->Location = System::Drawing::Point(583, 458);
            this->more->Name = L"more";
            this->more->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->more->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->more->OverrideDefault->Back->ColorAngle = 45;
            this->more->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->more->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->more->OverrideDefault->Border->ColorAngle = 45;
            this->more->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->more->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->more->OverrideDefault->Border->Rounding = 20;
            this->more->OverrideDefault->Border->Width = 1;
            this->more->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->more->Size = System::Drawing::Size(96, 43);
            this->more->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->more->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->more->StateCommon->Back->ColorAngle = 45;
            this->more->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->more->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->more->StateCommon->Border->ColorAngle = 45;
            this->more->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->more->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->more->StateCommon->Border->Rounding = 20;
            this->more->StateCommon->Border->Width = 1;
            this->more->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->more->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->more->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->more->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->more->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->more->StatePressed->Back->ColorAngle = 135;
            this->more->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->more->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->more->StatePressed->Border->ColorAngle = 135;
            this->more->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->more->StatePressed->Border->Rounding = 20;
            this->more->StatePressed->Border->Width = 1;
            this->more->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->more->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->more->StateTracking->Back->ColorAngle = 45;
            this->more->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->more->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->more->StateTracking->Border->ColorAngle = 45;
            this->more->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->more->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->more->StateTracking->Border->Rounding = 20;
            this->more->StateTracking->Border->Width = 1;
            this->more->TabIndex = 65;
            this->more->Values->Text = L"Next";
            this->more->Click += gcnew System::EventHandler(this, &MyForm::more_Click);
            // 
            // bonustext
            // 
            this->bonustext->LabelStyle = ComponentFactory::Krypton::Toolkit::LabelStyle::TitleControl;
            this->bonustext->Location = System::Drawing::Point(79, 319);
            this->bonustext->Name = L"bonustext";
            this->bonustext->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->bonustext->Size = System::Drawing::Size(131, 24);
            this->bonustext->StateCommon->ShortText->Color1 = System::Drawing::Color::White;
            this->bonustext->StateCommon->ShortText->Color2 = System::Drawing::Color::White;
            this->bonustext->StateDisabled->ShortText->Color1 = System::Drawing::Color::White;
            this->bonustext->StateDisabled->ShortText->Color2 = System::Drawing::Color::White;
            this->bonustext->StateDisabled->ShortText->Font = (gcnew System::Drawing::Font(L"Gilroy Light", 11.25F));
            this->bonustext->StateNormal->ShortText->Color1 = System::Drawing::Color::Black;
            this->bonustext->StateNormal->ShortText->Color2 = System::Drawing::Color::Black;
            this->bonustext->StateNormal->ShortText->Font = (gcnew System::Drawing::Font(L"Gilroy Light", 11.25F));
            this->bonustext->TabIndex = 66;
            this->bonustext->Values->Text = L"Two bonus filters";
            // 
            // sharp
            // 
            this->sharp->Location = System::Drawing::Point(9, 350);
            this->sharp->Name = L"sharp";
            this->sharp->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->sharp->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->sharp->OverrideDefault->Back->ColorAngle = 45;
            this->sharp->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->sharp->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->sharp->OverrideDefault->Border->ColorAngle = 45;
            this->sharp->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->sharp->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->sharp->OverrideDefault->Border->Rounding = 20;
            this->sharp->OverrideDefault->Border->Width = 1;
            this->sharp->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->sharp->Size = System::Drawing::Size(140, 43);
            this->sharp->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->sharp->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->sharp->StateCommon->Back->ColorAngle = 45;
            this->sharp->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->sharp->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->sharp->StateCommon->Border->ColorAngle = 45;
            this->sharp->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->sharp->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->sharp->StateCommon->Border->Rounding = 20;
            this->sharp->StateCommon->Border->Width = 1;
            this->sharp->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->sharp->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->sharp->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->sharp->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->sharp->StatePressed->Back->ColorAngle = 135;
            this->sharp->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->sharp->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->sharp->StatePressed->Border->ColorAngle = 135;
            this->sharp->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->sharp->StatePressed->Border->Rounding = 20;
            this->sharp->StatePressed->Border->Width = 1;
            this->sharp->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->sharp->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->sharp->StateTracking->Back->ColorAngle = 45;
            this->sharp->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->sharp->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->sharp->StateTracking->Border->ColorAngle = 45;
            this->sharp->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->sharp->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->sharp->StateTracking->Border->Rounding = 20;
            this->sharp->StateTracking->Border->Width = 1;
            this->sharp->TabIndex = 63;
            this->sharp->Values->Text = L"Color Grading";
            this->sharp->Click += gcnew System::EventHandler(this, &MyForm::sharp_Click);
            // 
            // saturation
            // 
            this->saturation->Location = System::Drawing::Point(155, 350);
            this->saturation->Name = L"saturation";
            this->saturation->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->saturation->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->saturation->OverrideDefault->Back->ColorAngle = 45;
            this->saturation->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->saturation->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->saturation->OverrideDefault->Border->ColorAngle = 45;
            this->saturation->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->saturation->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->saturation->OverrideDefault->Border->Rounding = 20;
            this->saturation->OverrideDefault->Border->Width = 1;
            this->saturation->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->saturation->Size = System::Drawing::Size(140, 43);
            this->saturation->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->saturation->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->saturation->StateCommon->Back->ColorAngle = 45;
            this->saturation->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->saturation->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->saturation->StateCommon->Border->ColorAngle = 45;
            this->saturation->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->saturation->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->saturation->StateCommon->Border->Rounding = 20;
            this->saturation->StateCommon->Border->Width = 1;
            this->saturation->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->saturation->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->saturation->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->saturation->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->saturation->StatePressed->Back->ColorAngle = 135;
            this->saturation->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->saturation->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->saturation->StatePressed->Border->ColorAngle = 135;
            this->saturation->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->saturation->StatePressed->Border->Rounding = 20;
            this->saturation->StatePressed->Border->Width = 1;
            this->saturation->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->saturation->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->saturation->StateTracking->Back->ColorAngle = 45;
            this->saturation->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->saturation->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->saturation->StateTracking->Border->ColorAngle = 45;
            this->saturation->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->saturation->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->saturation->StateTracking->Border->Rounding = 20;
            this->saturation->StateTracking->Border->Width = 1;
            this->saturation->TabIndex = 62;
            this->saturation->Values->Text = L"Saturation";
            this->saturation->Click += gcnew System::EventHandler(this, &MyForm::saturation_Click);
            // 
            // back
            // 
            this->back->Location = System::Drawing::Point(695, 458);
            this->back->Name = L"back";
            this->back->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->back->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->back->OverrideDefault->Back->ColorAngle = 45;
            this->back->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->back->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->back->OverrideDefault->Border->ColorAngle = 45;
            this->back->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->back->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->back->OverrideDefault->Border->Rounding = 20;
            this->back->OverrideDefault->Border->Width = 1;
            this->back->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->back->Size = System::Drawing::Size(96, 43);
            this->back->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->back->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->back->StateCommon->Back->ColorAngle = 45;
            this->back->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->back->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->back->StateCommon->Border->ColorAngle = 45;
            this->back->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->back->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->back->StateCommon->Border->Rounding = 20;
            this->back->StateCommon->Border->Width = 1;
            this->back->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
            this->back->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
            this->back->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->back->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->back->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->back->StatePressed->Back->ColorAngle = 135;
            this->back->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->back->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->back->StatePressed->Border->ColorAngle = 135;
            this->back->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->back->StatePressed->Border->Rounding = 20;
            this->back->StatePressed->Border->Width = 1;
            this->back->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->back->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->back->StateTracking->Back->ColorAngle = 45;
            this->back->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->back->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->back->StateTracking->Border->ColorAngle = 45;
            this->back->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->back->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->back->StateTracking->Border->Rounding = 20;
            this->back->StateTracking->Border->Width = 1;
            this->back->TabIndex = 66;
            this->back->Values->Text = L"Back..";
            this->back->Click += gcnew System::EventHandler(this, &MyForm::back_Click);
            // 
            // MorePanel
            // 
            this->MorePanel->Controls->Add(this->skewed);
            this->MorePanel->Controls->Add(this->tv);
            this->MorePanel->Controls->Add(this->sharp);
            this->MorePanel->Controls->Add(this->bonustext);
            this->MorePanel->Controls->Add(this->oilPainted);
            this->MorePanel->Controls->Add(this->saturation);
            this->MorePanel->Location = System::Drawing::Point(543, 44);
            this->MorePanel->Name = L"MorePanel";
            this->MorePanel->Size = System::Drawing::Size(307, 404);
            this->MorePanel->TabIndex = 67;
            // 
            // skewed
            // 
            this->skewed->Location = System::Drawing::Point(150, 82);
            this->skewed->Name = L"skewed";
            this->skewed->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->skewed->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->skewed->OverrideDefault->Back->ColorAngle = 45;
            this->skewed->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->skewed->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->skewed->OverrideDefault->Border->ColorAngle = 45;
            this->skewed->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->skewed->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->skewed->OverrideDefault->Border->Rounding = 20;
            this->skewed->OverrideDefault->Border->Width = 1;
            this->skewed->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->skewed->Size = System::Drawing::Size(140, 43);
            this->skewed->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->skewed->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->skewed->StateCommon->Back->ColorAngle = 45;
            this->skewed->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->skewed->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->skewed->StateCommon->Border->ColorAngle = 45;
            this->skewed->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->skewed->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->skewed->StateCommon->Border->Rounding = 20;
            this->skewed->StateCommon->Border->Width = 1;
            this->skewed->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->skewed->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->skewed->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->skewed->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->skewed->StatePressed->Back->ColorAngle = 135;
            this->skewed->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->skewed->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->skewed->StatePressed->Border->ColorAngle = 135;
            this->skewed->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->skewed->StatePressed->Border->Rounding = 20;
            this->skewed->StatePressed->Border->Width = 1;
            this->skewed->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->skewed->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->skewed->StateTracking->Back->ColorAngle = 45;
            this->skewed->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->skewed->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->skewed->StateTracking->Border->ColorAngle = 45;
            this->skewed->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->skewed->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->skewed->StateTracking->Border->Rounding = 20;
            this->skewed->StateTracking->Border->Width = 1;
            this->skewed->TabIndex = 68;
            this->skewed->Values->Text = L"Skewed 40";
            this->skewed->Click += gcnew System::EventHandler(this, &MyForm::skewed_Click);
            // 
            // tv
            // 
            this->tv->Location = System::Drawing::Point(4, 17);
            this->tv->Name = L"tv";
            this->tv->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->tv->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->tv->OverrideDefault->Back->ColorAngle = 45;
            this->tv->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->tv->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->tv->OverrideDefault->Border->ColorAngle = 45;
            this->tv->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->tv->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->tv->OverrideDefault->Border->Rounding = 20;
            this->tv->OverrideDefault->Border->Width = 1;
            this->tv->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->tv->Size = System::Drawing::Size(140, 43);
            this->tv->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->tv->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->tv->StateCommon->Back->ColorAngle = 45;
            this->tv->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->tv->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->tv->StateCommon->Border->ColorAngle = 45;
            this->tv->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->tv->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->tv->StateCommon->Border->Rounding = 20;
            this->tv->StateCommon->Border->Width = 1;
            this->tv->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->tv->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->tv->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->tv->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->tv->StatePressed->Back->ColorAngle = 135;
            this->tv->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->tv->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->tv->StatePressed->Border->ColorAngle = 135;
            this->tv->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->tv->StatePressed->Border->Rounding = 20;
            this->tv->StatePressed->Border->Width = 1;
            this->tv->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->tv->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->tv->StateTracking->Back->ColorAngle = 45;
            this->tv->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->tv->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->tv->StateTracking->Border->ColorAngle = 45;
            this->tv->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->tv->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->tv->StateTracking->Border->Rounding = 20;
            this->tv->StateTracking->Border->Width = 1;
            this->tv->TabIndex = 67;
            this->tv->Values->Text = L"TV";
            this->tv->Click += gcnew System::EventHandler(this, &MyForm::tv_Click);
            // 
            // blurPanel
            // 
            this->blurPanel->AllowDrop = true;
            this->blurPanel->Controls->Add(this->OkBlur);
            this->blurPanel->Controls->Add(this->radius);
            this->blurPanel->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->blurPanel->Location = System::Drawing::Point(219, 163);
            this->blurPanel->Name = L"blurPanel";
            this->blurPanel->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
            this->blurPanel->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->blurPanel->PanelBackStyle = ComponentFactory::Krypton::Toolkit::PaletteBackStyle::HeaderPrimary;
            this->blurPanel->Size = System::Drawing::Size(209, 104);
            this->blurPanel->StateCommon->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->blurPanel->StateCommon->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->blurPanel->StateCommon->ColorAngle = 75;
            this->blurPanel->StateCommon->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->blurPanel->StateDisabled->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->blurPanel->StateDisabled->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->blurPanel->StateDisabled->ColorAngle = 75;
            this->blurPanel->StateNormal->ColorAngle = 1;
            this->blurPanel->StateNormal->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->blurPanel->TabIndex = 55;
            // 
            // OkBlur
            // 
            this->OkBlur->Location = System::Drawing::Point(66, 61);
            this->OkBlur->Name = L"OkBlur";
            this->OkBlur->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->OkBlur->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->OkBlur->OverrideDefault->Back->ColorAngle = 45;
            this->OkBlur->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->OkBlur->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->OkBlur->OverrideDefault->Border->ColorAngle = 45;
            this->OkBlur->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->OkBlur->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->OkBlur->OverrideDefault->Border->Rounding = 20;
            this->OkBlur->OverrideDefault->Border->Width = 1;
            this->OkBlur->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->OkBlur->Size = System::Drawing::Size(67, 39);
            this->OkBlur->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->OkBlur->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->OkBlur->StateCommon->Back->ColorAngle = 45;
            this->OkBlur->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->OkBlur->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->OkBlur->StateCommon->Border->ColorAngle = 45;
            this->OkBlur->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->OkBlur->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->OkBlur->StateCommon->Border->Rounding = 20;
            this->OkBlur->StateCommon->Border->Width = 1;
            this->OkBlur->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->OkBlur->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->OkBlur->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->OkBlur->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->OkBlur->StatePressed->Back->ColorAngle = 135;
            this->OkBlur->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->OkBlur->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->OkBlur->StatePressed->Border->ColorAngle = 135;
            this->OkBlur->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->OkBlur->StatePressed->Border->Rounding = 20;
            this->OkBlur->StatePressed->Border->Width = 1;
            this->OkBlur->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->OkBlur->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->OkBlur->StateTracking->Back->ColorAngle = 45;
            this->OkBlur->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->OkBlur->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->OkBlur->StateTracking->Border->ColorAngle = 45;
            this->OkBlur->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->OkBlur->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->OkBlur->StateTracking->Border->Rounding = 20;
            this->OkBlur->StateTracking->Border->Width = 1;
            this->OkBlur->TabIndex = 53;
            this->OkBlur->Values->Text = L"Ok";
            this->OkBlur->Click += gcnew System::EventHandler(this, &MyForm::OkBlur_Click);
            // 
            // radius
            // 
            this->radius->Location = System::Drawing::Point(21, 18);
            this->radius->Name = L"radius";
            this->radius->Size = System::Drawing::Size(172, 37);
            this->radius->StateCommon->Back->Color1 = System::Drawing::Color::White;
            this->radius->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->radius->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->radius->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->radius->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->radius->StateCommon->Border->Rounding = 20;
            this->radius->StateCommon->Border->Width = 1;
            this->radius->StateCommon->Content->Color1 = System::Drawing::Color::Gray;
            this->radius->StateCommon->Content->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F));
            this->radius->StateCommon->Content->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
            this->radius->TabIndex = 2;
            this->radius->Text = L"Enter the radius:";
            // 
            // text2
            // 
            this->text2->LabelStyle = ComponentFactory::Krypton::Toolkit::LabelStyle::TitleControl;
            this->text2->Location = System::Drawing::Point(27, 389);
            this->text2->Name = L"text2";
            this->text2->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->text2->Size = System::Drawing::Size(6, 4);
            this->text2->StateCommon->ShortText->Color1 = System::Drawing::Color::White;
            this->text2->StateCommon->ShortText->Color2 = System::Drawing::Color::White;
            this->text2->StateDisabled->ShortText->Color1 = System::Drawing::Color::White;
            this->text2->StateDisabled->ShortText->Color2 = System::Drawing::Color::White;
            this->text2->StateDisabled->ShortText->Font = (gcnew System::Drawing::Font(L"Gilroy Light", 11.25F));
            this->text2->StateNormal->ShortText->Color1 = System::Drawing::Color::Black;
            this->text2->StateNormal->ShortText->Color2 = System::Drawing::Color::Black;
            this->text2->StateNormal->ShortText->Font = (gcnew System::Drawing::Font(L"Gilroy Light", 11.25F));
            this->text2->TabIndex = 56;
            this->text2->Values->Text = L"";
            // 
            // text3
            // 
            this->text3->LabelStyle = ComponentFactory::Krypton::Toolkit::LabelStyle::TitleControl;
            this->text3->Location = System::Drawing::Point(-5, 410);
            this->text3->Name = L"text3";
            this->text3->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->text3->Size = System::Drawing::Size(6, 4);
            this->text3->StateCommon->ShortText->Color1 = System::Drawing::Color::White;
            this->text3->StateCommon->ShortText->Color2 = System::Drawing::Color::White;
            this->text3->StateDisabled->ShortText->Color1 = System::Drawing::Color::White;
            this->text3->StateDisabled->ShortText->Color2 = System::Drawing::Color::White;
            this->text3->StateDisabled->ShortText->Font = (gcnew System::Drawing::Font(L"Gilroy Light", 11.25F));
            this->text3->StateNormal->ShortText->Color1 = System::Drawing::Color::Black;
            this->text3->StateNormal->ShortText->Color2 = System::Drawing::Color::Black;
            this->text3->StateNormal->ShortText->Font = (gcnew System::Drawing::Font(L"Gilroy Light", 11.25F));
            this->text3->TabIndex = 58;
            this->text3->Values->Text = L"";
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
            // PanalOil
            // 
            this->PanalOil->AllowDrop = true;
            this->PanalOil->Controls->Add(this->intensityLevels);
            this->PanalOil->Controls->Add(this->kryptonButton2);
            this->PanalOil->Controls->Add(this->radius2);
            this->PanalOil->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->PanalOil->Location = System::Drawing::Point(190, 142);
            this->PanalOil->Name = L"PanalOil";
            this->PanalOil->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
            this->PanalOil->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->PanalOil->PanelBackStyle = ComponentFactory::Krypton::Toolkit::PaletteBackStyle::HeaderPrimary;
            this->PanalOil->Size = System::Drawing::Size(267, 152);
            this->PanalOil->StateCommon->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->PanalOil->StateCommon->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->PanalOil->StateCommon->ColorAngle = 75;
            this->PanalOil->StateCommon->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->PanalOil->StateDisabled->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->PanalOil->StateDisabled->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->PanalOil->StateDisabled->ColorAngle = 75;
            this->PanalOil->StateNormal->ColorAngle = 1;
            this->PanalOil->StateNormal->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->PanalOil->TabIndex = 56;
            // 
            // intensityLevels
            // 
            this->intensityLevels->Location = System::Drawing::Point(13, 18);
            this->intensityLevels->Name = L"intensityLevels";
            this->intensityLevels->Size = System::Drawing::Size(241, 37);
            this->intensityLevels->StateCommon->Back->Color1 = System::Drawing::Color::White;
            this->intensityLevels->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->intensityLevels->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->intensityLevels->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->intensityLevels->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->intensityLevels->StateCommon->Border->Rounding = 20;
            this->intensityLevels->StateCommon->Border->Width = 1;
            this->intensityLevels->StateCommon->Content->Color1 = System::Drawing::Color::Gray;
            this->intensityLevels->StateCommon->Content->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F));
            this->intensityLevels->StateCommon->Content->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
            this->intensityLevels->TabIndex = 54;
            this->intensityLevels->Text = L"Enter the intensity level you want";
            // 
            // kryptonButton2
            // 
            this->kryptonButton2->Location = System::Drawing::Point(93, 106);
            this->kryptonButton2->Name = L"kryptonButton2";
            this->kryptonButton2->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->kryptonButton2->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->kryptonButton2->OverrideDefault->Back->ColorAngle = 45;
            this->kryptonButton2->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton2->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton2->OverrideDefault->Border->ColorAngle = 45;
            this->kryptonButton2->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton2->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->kryptonButton2->OverrideDefault->Border->Rounding = 20;
            this->kryptonButton2->OverrideDefault->Border->Width = 1;
            this->kryptonButton2->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->kryptonButton2->Size = System::Drawing::Size(67, 39);
            this->kryptonButton2->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->kryptonButton2->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->kryptonButton2->StateCommon->Back->ColorAngle = 45;
            this->kryptonButton2->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->kryptonButton2->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton2->StateCommon->Border->ColorAngle = 45;
            this->kryptonButton2->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton2->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->kryptonButton2->StateCommon->Border->Rounding = 20;
            this->kryptonButton2->StateCommon->Border->Width = 1;
            this->kryptonButton2->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton2->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->kryptonButton2->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->kryptonButton2->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->kryptonButton2->StatePressed->Back->ColorAngle = 135;
            this->kryptonButton2->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->kryptonButton2->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->kryptonButton2->StatePressed->Border->ColorAngle = 135;
            this->kryptonButton2->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton2->StatePressed->Border->Rounding = 20;
            this->kryptonButton2->StatePressed->Border->Width = 1;
            this->kryptonButton2->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton2->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->kryptonButton2->StateTracking->Back->ColorAngle = 45;
            this->kryptonButton2->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->kryptonButton2->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->kryptonButton2->StateTracking->Border->ColorAngle = 45;
            this->kryptonButton2->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->kryptonButton2->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->kryptonButton2->StateTracking->Border->Rounding = 20;
            this->kryptonButton2->StateTracking->Border->Width = 1;
            this->kryptonButton2->TabIndex = 53;
            this->kryptonButton2->Values->Text = L"Ok";
            this->kryptonButton2->Click += gcnew System::EventHandler(this, &MyForm::kryptonButton2_Click);
            // 
            // radius2
            // 
            this->radius2->Location = System::Drawing::Point(13, 60);
            this->radius2->Name = L"radius2";
            this->radius2->Size = System::Drawing::Size(241, 37);
            this->radius2->StateCommon->Back->Color1 = System::Drawing::Color::White;
            this->radius2->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->radius2->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->radius2->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->radius2->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->radius2->StateCommon->Border->Rounding = 20;
            this->radius2->StateCommon->Border->Width = 1;
            this->radius2->StateCommon->Content->Color1 = System::Drawing::Color::Gray;
            this->radius2->StateCommon->Content->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F));
            this->radius2->StateCommon->Content->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
            this->radius2->TabIndex = 2;
            this->radius2->Text = L"Enter a radius(number of pixels): ";
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
            this->Panel->Location = System::Drawing::Point(160, 75);
            this->Panel->Name = L"Panel";
            this->Panel->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
            this->Panel->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->Panel->PanelBackStyle = ComponentFactory::Krypton::Toolkit::PaletteBackStyle::HeaderPrimary;
            this->Panel->Size = System::Drawing::Size(297, 285);
            this->Panel->StateCommon->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
                static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->Panel->StateCommon->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
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
            // SkewPanel
            // 
            this->SkewPanel->AllowDrop = true;
            this->SkewPanel->Controls->Add(this->OkSkew);
            this->SkewPanel->Controls->Add(this->skewval);
            this->SkewPanel->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->SkewPanel->Location = System::Drawing::Point(190, 126);
            this->SkewPanel->Name = L"SkewPanel";
            this->SkewPanel->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
            this->SkewPanel->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->SkewPanel->PanelBackStyle = ComponentFactory::Krypton::Toolkit::PaletteBackStyle::HeaderPrimary;
            this->SkewPanel->Size = System::Drawing::Size(267, 117);
            this->SkewPanel->StateCommon->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->SkewPanel->StateCommon->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->SkewPanel->StateCommon->ColorAngle = 75;
            this->SkewPanel->StateCommon->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->SkewPanel->StateDisabled->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->SkewPanel->StateDisabled->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->SkewPanel->StateDisabled->ColorAngle = 75;
            this->SkewPanel->StateNormal->ColorAngle = 1;
            this->SkewPanel->StateNormal->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->SkewPanel->TabIndex = 57;
            // 
            // OkSkew
            // 
            this->OkSkew->Location = System::Drawing::Point(88, 64);
            this->OkSkew->Name = L"OkSkew";
            this->OkSkew->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->OkSkew->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->OkSkew->OverrideDefault->Back->ColorAngle = 45;
            this->OkSkew->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->OkSkew->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->OkSkew->OverrideDefault->Border->ColorAngle = 45;
            this->OkSkew->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->OkSkew->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->OkSkew->OverrideDefault->Border->Rounding = 20;
            this->OkSkew->OverrideDefault->Border->Width = 1;
            this->OkSkew->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalOffice2003;
            this->OkSkew->Size = System::Drawing::Size(67, 39);
            this->OkSkew->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->OkSkew->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->OkSkew->StateCommon->Back->ColorAngle = 45;
            this->OkSkew->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->OkSkew->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->OkSkew->StateCommon->Border->ColorAngle = 45;
            this->OkSkew->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->OkSkew->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->OkSkew->StateCommon->Border->Rounding = 20;
            this->OkSkew->StateCommon->Border->Width = 1;
            this->OkSkew->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->OkSkew->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F, System::Drawing::FontStyle::Bold));
            this->OkSkew->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->OkSkew->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->OkSkew->StatePressed->Back->ColorAngle = 135;
            this->OkSkew->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->OkSkew->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
                static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->OkSkew->StatePressed->Border->ColorAngle = 135;
            this->OkSkew->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->OkSkew->StatePressed->Border->Rounding = 20;
            this->OkSkew->StatePressed->Border->Width = 1;
            this->OkSkew->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->OkSkew->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->OkSkew->StateTracking->Back->ColorAngle = 45;
            this->OkSkew->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->OkSkew->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(8)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
            this->OkSkew->StateTracking->Border->ColorAngle = 45;
            this->OkSkew->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->OkSkew->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->OkSkew->StateTracking->Border->Rounding = 20;
            this->OkSkew->StateTracking->Border->Width = 1;
            this->OkSkew->TabIndex = 53;
            this->OkSkew->Values->Text = L"Ok";
            this->OkSkew->Click += gcnew System::EventHandler(this, &MyForm::OkSkew_Click);
            // 
            // skewval
            // 
            this->skewval->Location = System::Drawing::Point(13, 21);
            this->skewval->Name = L"skewval";
            this->skewval->Size = System::Drawing::Size(248, 37);
            this->skewval->StateCommon->Back->Color1 = System::Drawing::Color::White;
            this->skewval->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->skewval->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->skewval->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
                | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
            this->skewval->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
            this->skewval->StateCommon->Border->Rounding = 20;
            this->skewval->StateCommon->Border->Width = 1;
            this->skewval->StateCommon->Content->Color1 = System::Drawing::Color::Gray;
            this->skewval->StateCommon->Content->Font = (gcnew System::Drawing::Font(L"Poppins", 9.75F));
            this->skewval->StateCommon->Content->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
            this->skewval->TabIndex = 2;
            this->skewval->Text = L"Enter the skew value in degrees:";
            // 
            // MyForm
            // 
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(252)),
                static_cast<System::Int32>(static_cast<System::Byte>(252)));
            this->ClientSize = System::Drawing::Size(850, 532);
            this->ControlBox = false;
            this->Controls->Add(this->SkewPanel);
            this->Controls->Add(this->PanalOil);
            this->Controls->Add(this->blurPanel);
            this->Controls->Add(this->MorePanel);
            this->Controls->Add(this->back);
            this->Controls->Add(this->more);
            this->Controls->Add(this->Panel);
            this->Controls->Add(this->framePanel);
            this->Controls->Add(this->rotate90);
            this->Controls->Add(this->rotate180);
            this->Controls->Add(this->rotate270);
            this->Controls->Add(this->infraredmode);
            this->Controls->Add(this->Sunlight);
            this->Controls->Add(this->text3);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->text2);
            this->Controls->Add(this->trackBar1);
            this->Controls->Add(this->panel1);
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
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->panel1))->EndInit();
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->framePanel))->EndInit();
            this->framePanel->ResumeLayout(false);
            this->framePanel->PerformLayout();
            this->MorePanel->ResumeLayout(false);
            this->MorePanel->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->blurPanel))->EndInit();
            this->blurPanel->ResumeLayout(false);
            this->blurPanel->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PanalOil))->EndInit();
            this->PanalOil->ResumeLayout(false);
            this->PanalOil->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Panel))->EndInit();
            this->Panel->ResumeLayout(false);
            this->Panel->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SkewPanel))->EndInit();
            this->SkewPanel->ResumeLayout(false);
            this->SkewPanel->PerformLayout();
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
    rotate90->Visible = false;
    rotate180->Visible = false;
    rotate270->Visible = false;
    framePanel->Visible = false;
    MorePanel->Visible = false;
    blurPanel->Visible = false;
    PanalOil->Visible = false;
    SkewPanel->Visible = false;
}



private: System::Void clear_Click_1(System::Object^ sender, System::EventArgs^ e) {
    image_1->Visible = false;
    image1->Image = nullptr;
    PanalOil->Visible = false;
    SkewPanel->Visible = false;
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
    rotate90->Visible = false;
    rotate180->Visible = false;
    rotate270->Visible = false;
    framePanel->Visible = false;
    blurPanel->Visible = false;


}


private: System::Void merge_Click_1(System::Object^ sender, System::EventArgs^ e) {
    MessageBox::Show("Add the two images then click OK to apply the filter", "Instructions", MessageBoxButtons::OK, MessageBoxIcon::Information);

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
    SkewPanel->Visible = false;

    text2->Visible = true;
    text3->Visible = true;
    rotate90->Visible = false;
    rotate180->Visible = false;
    rotate270->Visible = false;
    framePanel->Visible = false;
    PanalOil->Visible = false;
    blurPanel->Visible = false;


    
}
	   
private: System::Void ApplyMergeFilter() {
    if (!System::String::IsNullOrEmpty(imagePath1) && !System::String::IsNullOrEmpty(imagePath2)) {
        Bitmap^ bmp1 = gcnew Bitmap(imagePath1);
        Bitmap^ bmp2 = gcnew Bitmap(imagePath2);
        int maxWidth = Math::Max(bmp1->Width, bmp2->Width);
        int maxHeight = Math::Max(bmp1->Height, bmp2->Height);
        Bitmap^ resizedBmp1 = gcnew Bitmap(bmp1, maxWidth, maxHeight);
        Bitmap^ resizedBmp2 = gcnew Bitmap(bmp2, maxWidth, maxHeight);
        Bitmap^ mergedBmp = gcnew Bitmap(maxWidth, maxHeight);
        int transparencyLevel = trackBar1->Value;
        for (int i = 0; i < maxWidth; ++i) {
            for (int j = 0; j < maxHeight; ++j) {
                Color pixelColor1 = resizedBmp1->GetPixel(i, j);
                Color pixelColor2 = resizedBmp2->GetPixel(i, j);

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
    blurPanel->Visible = false;
	lighten->Visible = false;
    horizontal->Visible = false;
    vertical->Visible = false;
    Panel->Visible = false;
	ok->Visible = false;
    SkewPanel->Visible = false;

    trackBar1->Visible = false;
    PanalOil->Visible = false;
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
    image_1->Visible = false;
    Image_2->Visible = false;
    ok->Visible = false;
    horizontal->Visible = false;
    vertical->Visible = false;
    Panel->Visible = false;
    panel1->Visible = false;
    trackBar1->Visible = false;
    text2->Visible = false;
    SkewPanel->Visible = false;

    text3->Visible = false;
    PanalOil->Visible = false;
    rotate90->Visible = false;
    rotate180->Visible = false;
    rotate270->Visible = false;
    blurPanel->Visible = false;

    framePanel->Visible = false;
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
    image_1->Visible = false;
    PanalOil->Visible = false;
    SkewPanel->Visible = false;
    Image_2->Visible = false;
    ok->Visible = false;
    Panel->Visible = false;
    panel1->Visible = false;
    trackBar1->Visible = false;
    framePanel->Visible = false;
    blurPanel->Visible = false;
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
    SkewPanel->Visible = false;

    horizontal->Visible = false;
    vertical->Visible = false;
    Panel->Visible = false;
    panel1->Visible = false;
    trackBar1->Visible = false;
    blurPanel->Visible = false;
    PanalOil->Visible = false;

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
    blurPanel->Visible = false;
    PanalOil->Visible = false;
    SkewPanel->Visible = false;

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
    blurPanel->Visible = false;
    PanalOil->Visible = false;
    Panel->Visible = false;
    SkewPanel->Visible = false;

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
    blurPanel->Visible = false;
    PanalOil->Visible = false;
    panel1->Visible = false;
    SkewPanel->Visible = false;

    trackBar1->Visible = false;
    text2->Visible = false;
    text3->Visible = false;
    rotate90->Visible = false;
    rotate180->Visible = false;
    rotate270->Visible = false;
    framePanel->Visible = false;
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
    image_1->Visible = false;
    Image_2->Visible = false;
    ok->Visible = false;
    dark->Visible = false;
    blurPanel->Visible = false;
    PanalOil->Visible = false;
    lighten->Visible = false;
    horizontal->Visible = false;
    vertical->Visible = false;
    Panel->Visible = false;
    panel1->Visible = false;
    SkewPanel->Visible = false;

    trackBar1->Visible = false;
    text2->Visible = false;
    text3->Visible = false;
    rotate90->Visible = false;
    rotate180->Visible = false;
    rotate270->Visible = false;
    framePanel->Visible = false;

    if (image1->Image != nullptr) {
        Panel->Visible = true;
    }
    else {
        MessageBox::Show("Please add an image first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    
}
private: System::Void ok1_Click(System::Object^ sender, System::EventArgs^ e) {
    int x, y, CroppedW, CroppedH;

    if (!int::TryParse(xaxis->Text, x) || !int::TryParse(yaxis->Text, y) ||
        !int::TryParse(CroppedWidth->Text, CroppedW) || !int::TryParse(CroppedHeight->Text, CroppedH)) {
        MessageBox::Show("Please enter valid numbers.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    else {
        if (image1->Image != nullptr) {
            Bitmap^ originalImage = gcnew Bitmap(image1->Image);
            int imageWidth = originalImage->Width;
            int imageHeight = originalImage->Height;

            if (x < 0 || y < 0 || CroppedW <= 0 || CroppedH <= 0 ||
                x + CroppedW > imageWidth || y + CroppedH > imageHeight) {
                MessageBox::Show("Invalid cropping dimensions or position.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
            else {
                Bitmap^ croppedImage = gcnew Bitmap(CroppedW, CroppedH);


                for (int i = 0; i < CroppedW; ++i) {
                    for (int j = 0; j < CroppedH; ++j) {
                        int originalWidth = x + i;
                        int originalHeight = y + j;

                        if (originalWidth < imageWidth && originalHeight < imageHeight) {
                            Color pixelColor = originalImage->GetPixel(originalWidth, originalHeight);
                            croppedImage->SetPixel(i, j, pixelColor);
                        }
                    }
                }
                

                image1->Image = croppedImage;
                Panel->Visible = false;
            }
        }
    }
}
private: System::Void resizing_Click(System::Object^ sender, System::EventArgs^ e) {
    image_1->Visible = false;
    Image_2->Visible = false;
    ok->Visible = false;
    dark->Visible = false;
    lighten->Visible = false;
    horizontal->Visible = false;
    vertical->Visible = false;
    Panel->Visible = false;
    PanalOil->Visible = false;
    trackBar1->Visible = false;
    text2->Visible = false;
    text3->Visible = false;
    rotate90->Visible = false;
    rotate180->Visible = false;
    SkewPanel->Visible = false;

    rotate270->Visible = false;
    framePanel->Visible = false;
    blurPanel->Visible = false;

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
            originalImage = gcnew Bitmap(image1->Image);

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
private: System::Void rotate_Click(System::Object^ sender, System::EventArgs^ e) {
    image_1->Visible = false;
    Image_2->Visible = false;
    ok->Visible = false;
    dark->Visible = false;
    lighten->Visible = false;
    horizontal->Visible = false;
    vertical->Visible = false;
    Panel->Visible = false;
    panel1->Visible = false;
    PanalOil->Visible = false;
    trackBar1->Visible = false;
    text2->Visible = false;
    SkewPanel->Visible = false;

    text3->Visible = false;
    rotate90->Visible = true;
    rotate180->Visible = true;
    blurPanel->Visible = false;

    rotate270->Visible = true;
}
private: System::Void rotate90_Click(System::Object^ sender, System::EventArgs^ e) {
    Bitmap^ img = gcnew Bitmap(image1->Image);
    int width = img->Width;
    int height = img->Height;
    Bitmap^ rotatedImage = gcnew Bitmap(height, width);

    for (int i = 0; i < width; ++i) {
        for (int j = 0; j < height; ++j) {
            int newi = height - 1 - j;
            int newj = i;
            rotatedImage->SetPixel(newi, newj, img->GetPixel(i, j));
        }
    }

    image1->Image = rotatedImage;

}
private: System::Void rotate180_Click(System::Object^ sender, System::EventArgs^ e) {
    Bitmap^ img = gcnew Bitmap(image1->Image);
    int width = img->Width;
    int height = img->Height;
    Bitmap^ rotatedImage = gcnew Bitmap(width, height);
    for (int i = 0; i < width; ++i) {
        for (int j = 0; j < height; ++j) {
            int newi = width - 1 - i;
            int newj = height - 1 - j;
            rotatedImage->SetPixel(newi, newj, img->GetPixel(i, j));
        }
    }
    image1->Image = rotatedImage;

}
private: System::Void rotate270_Click(System::Object^ sender, System::EventArgs^ e) {
    Bitmap^ img = gcnew Bitmap(image1->Image);
    int width = img->Width;
    int height = img->Height;
    Bitmap^ rotatedImage = gcnew Bitmap(height, width);
    for (int i = 0; i < width; ++i) {
        for (int j = 0; j < height; ++j) {
            int newi = j;
            int newj = width - 1 - i;
            rotatedImage->SetPixel(newi, newj, img->GetPixel(i, j));
        }
    }

    image1->Image = rotatedImage;

}
private: System::Void frame_Click(System::Object^ sender, System::EventArgs^ e) {
    image_1->Visible = false;
    Image_2->Visible = false;
    ok->Visible = false;
    dark->Visible = false;
    lighten->Visible = false;
    horizontal->Visible = false;
    vertical->Visible = false;
    Panel->Visible = false;
    blurPanel->Visible = false;
    SkewPanel->Visible = false;

    PanalOil->Visible = false;
    panel1->Visible = false;
    trackBar1->Visible = false;
    text2->Visible = false;
    text3->Visible = false;
    rotate90->Visible = false;
    rotate180->Visible = false;
    rotate270->Visible = false;
    framePanel->Visible = true;
}
private: System::Void kryptonButton1_Click_1(System::Object^ sender, System::EventArgs^ e) {
    Bitmap^ img = gcnew Bitmap(image1->Image);
    int thickness = System::Convert::ToInt32(Thickness->Text);

    for (int i = 0; i < img->Width; ++i) {
        for (int j = 0; j < thickness; ++j) {
            img->SetPixel(i, j, Color::FromArgb(13, 119, 255));
        }
    }

    for (int i = 0; i < img->Width; ++i) {
        for (int j = thickness; j < thickness + thickness / 1.5; ++j) {
            img->SetPixel(i, j, Color::FromArgb(255, 255, 255)); 
        }
    }

    for (int i = 0; i < img->Width; ++i) {
        for (int j = img->Height - thickness; j < img->Height; ++j) {
            img->SetPixel(i, j, Color::FromArgb(13, 119, 255));
        }
    }

    for (int i = 0; i < img->Width; ++i) {
        for (int j = img->Height - (thickness + thickness / 1.5); j < img->Height - thickness / 1.5; ++j) {
            img->SetPixel(i, j, Color::FromArgb(255, 255, 255));
        }
    }

    for (int i = 0; i < thickness; ++i) {
        for (int j = 0; j < img->Height; ++j) {
            img->SetPixel(i, j, Color::FromArgb(13, 119, 255)); 
        }
    }

    for (int i = thickness; i < thickness + thickness / 1.5; ++i) {
        for (int j = thickness; j < img->Height - thickness; ++j) {
            img->SetPixel(i, j, Color::FromArgb(255, 255, 255));
        }
    }

    for (int i = img->Width - thickness; i < img->Width; ++i) {
        for (int j = 0; j < img->Height; ++j) {
            img->SetPixel(i, j, Color::FromArgb(13, 119, 255)); 
        }
    }

    for (int i = img->Width - (thickness + thickness / 1.5); i < img->Width - thickness / 1.5; ++i) {
        for (int j = thickness; j < img->Height - thickness; ++j) {
            img->SetPixel(i, j, Color::FromArgb(255, 255, 255)); 
        }
    }

    image1->Image = img;
    framePanel->Visible = false;
}
private: System::Void MorePanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void more_Click(System::Object^ sender, System::EventArgs^ e) {
    MorePanel->Visible = true;
}
private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) {
    MorePanel->Visible = false;
}
private: System::Void sharp_Click(System::Object^ sender, System::EventArgs^ e) {
    image_1->Visible = false;
    Image_2->Visible = false;
    ok->Visible = false;
    dark->Visible = false;
    lighten->Visible = false;
    horizontal->Visible = false;
    vertical->Visible = false;
    Panel->Visible = false;
    blurPanel->Visible = false;
    PanalOil->Visible = false;
    SkewPanel->Visible = false;

    panel1->Visible = false;
    trackBar1->Visible = false;
    text2->Visible = false;
    text3->Visible = false;
    rotate90->Visible = false;
    rotate180->Visible = false;
    rotate270->Visible = false;
    framePanel->Visible = false;
    Bitmap^ bmp = gcnew Bitmap(image1->Image);
    const int brightnes = 30; 
    const double contrast = 1.2;

    for (int i = 0; i < bmp->Width; i++) {
        for (int j = 0; j < bmp->Height; j++) {
            Color pixelColor = bmp->GetPixel(i, j);
            int r = Math::Min(Math::Max(pixelColor.R + brightnes, 0), 255);
            int g = Math::Min(Math::Max(pixelColor.G + brightnes, 0), 255);
            int b = Math::Min(Math::Max(pixelColor.B + brightnes, 0), 255);

            r = (int)((r - 128) * contrast) + 128;
            g = (int)((g - 128) * contrast) + 128;
            b = (int)((b - 128) * contrast) + 128;

            r = Math::Min(Math::Max(r, 0), 255);
            g = Math::Min(Math::Max(g, 0), 255);
            b = Math::Min(Math::Max(b, 0), 255);

            bmp->SetPixel(i, j, Color::FromArgb(r, g, b));
        }
    }

    image1->Image = bmp;
}

private: System::Void saturation_Click(System::Object^ sender, System::EventArgs^ e) {
    image_1->Visible = false;
    Image_2->Visible = false;
    ok->Visible = false;
    dark->Visible = false;
    lighten->Visible = false;
    horizontal->Visible = false;
    vertical->Visible = false;
    Panel->Visible = false;
    SkewPanel->Visible = false;

    blurPanel->Visible = false;
    PanalOil->Visible = false;
    panel1->Visible = false;
    trackBar1->Visible = false;
    text2->Visible = false;
    text3->Visible = false;
    rotate90->Visible = false;
    rotate180->Visible = false;
    rotate270->Visible = false;
    framePanel->Visible = false;
    Bitmap^ bmp = gcnew Bitmap(image1->Image);
    for (int x = 0; x < bmp->Width; x++) {
        for (int y = 0; y < bmp->Height; y++) {
            Color pixelColor = bmp->GetPixel(x, y);
            double lum =0.2126 * pixelColor.R + 0.7152 * pixelColor.G + 0.0722 * pixelColor.B;

            int r = (int)Math::Min(255.0, lum +0.5*(pixelColor.R-lum));
            int g = (int)Math::Min(255.0, lum +0.5*(pixelColor.G-lum));
            int b = (int)Math::Min(255.0, lum +0.5*(pixelColor.B-lum));

            bmp->SetPixel(x, y, Color::FromArgb(r, g, b));
        }
    }

    image1->Image = bmp;
}
private: System::Void blur_Click(System::Object^ sender, System::EventArgs^ e) {
    Bitmap^ bmp = gcnew Bitmap(image1->Image);
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
    rotate90->Visible = false;
    rotate180->Visible = false;
    rotate270->Visible = false;
    framePanel->Visible = false;
    SkewPanel->Visible = false;

    blurPanel->Visible = true;
    PanalOil->Visible = false;

}
private: System::Void OkBlur_Click(System::Object^ sender, System::EventArgs^ e) {
    Bitmap^ bmp = gcnew Bitmap(image1->Image);
    String^ radius_text = radius->Text;
    int radius = Int32::Parse(radius_text);



    for (int i = 0; i < bmp->Width; ++i) {
        for (int j = 0; j < bmp->Height; ++j) {
            int sumR = 0, sumG = 0, sumB = 0;
            int counter = 0;
            for (int x = i - (radius / 2); x <= i + (radius / 2); ++x) {
                for (int y = j - (radius / 2); y <= j + (radius / 2); ++y) {
                    if (x >= 0 && x < bmp->Width && y >= 0 && y < bmp->Height) {
                        Color pixelColor = bmp->GetPixel(x, y);
                        sumR += pixelColor.R;
                        sumG += pixelColor.G;
                        sumB += pixelColor.B;
                        counter++;
                    }
                }
            }
            int avgR = sumR / counter;
            int avgG = sumG / counter;
            int avgB = sumB / counter;
            bmp->SetPixel(i, j, Color::FromArgb(avgR, avgG, avgB));
        }
    }
    image1->Image = bmp;
    blurPanel->Visible = false;
}


private: System::Void oilPainted_Click(System::Object^ sender, System::EventArgs^ e) {
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
    SkewPanel->Visible = false;

    text3->Visible = false;
    rotate90->Visible = false;
    rotate180->Visible = false;
    rotate270->Visible = false;
    framePanel->Visible = false;
    blurPanel->Visible = false;
    PanalOil->Visible = true;
}
private: System::Void tv_Click(System::Object^ sender, System::EventArgs^ e) {
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
    SkewPanel->Visible = false;

    rotate90->Visible = false;
    rotate180->Visible = false;
    rotate270->Visible = false;
    framePanel->Visible = false;
    blurPanel->Visible = false;
    PanalOil->Visible = false;
    Bitmap^ bmp = gcnew Bitmap(image1->Image);
    for (int j = 0; j < bmp->Height; ++j) {
        for (int i = 0; i < bmp->Width; ++i) {
            if (j % 2 == 0) {
                bmp->SetPixel(i, j, Color::FromArgb(53, 57, 53));
            }
            else{
                Color pixelcolor = bmp->GetPixel(i, j);
                Color newcolor = Color::FromArgb(
                    Math::Min(255, pixelcolor.R + 25),Math::Min(255, pixelcolor.G + 25), Math::Min(255, pixelcolor.B + 25)
                );
                bmp->SetPixel(i, j, newcolor);
            }
        }
    }
    image1->Image = bmp;
}
private: System::Void kryptonButton2_Click(System::Object^ sender, System::EventArgs^ e) {
    Bitmap^ bmp = gcnew Bitmap(image1->Image);

    if (image1->Image == nullptr) {
        MessageBox::Show("Please add an image first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }
    String^ radius_text = radius2->Text;
    int radius = Int32::Parse(radius_text);
    String^ intensity_text = intensityLevels->Text;
    int intensityLevels = Int32::Parse(intensity_text);

    for (int i = 0; i < image1->Image->Width; i++) {
        for (int j = 0; j < image1->Image->Height; j++) {
            int sumR[256] = { 0 };
            int sumG[256] = { 0 };
            int sumB[256] = { 0 };

            int intscount[256] = { 0 };

            for (int l = i - radius; l < i + radius + 1; l++) {
                for (int m = j - radius; m < j + radius + 1; m++) {

                    if (l >= 0 && l < image1->Image->Width && m >= 0 && m < image1->Image->Height) {
                        Color pixel_color = bmp->GetPixel(l, m);
                        int r = pixel_color.R;

                        int g = pixel_color.G;
                        int b = pixel_color.B;
                        int currentints = ((r + g + b) / 3.0 * intensityLevels) / 255;

                        sumR[currentints] += r;
                        sumG[currentints] += g;
                        sumB[currentints] += b;
                        intscount[currentints]++;
                    }
                }
            }
            int maxIntensity = 0;
            for (int k = 1; k < 256; k++) {

                if (intscount[k] > intscount[maxIntensity]) {

                    maxIntensity = k;
                }

            }
            Color newColor = Color::FromArgb(

                sumR[maxIntensity] / intscount[maxIntensity],
                sumG[maxIntensity] / intscount[maxIntensity],
                sumB[maxIntensity] / intscount[maxIntensity]
            );
            bmp->SetPixel(i, j, newColor);
        }
    }
    image1->Image = bmp;
    PanalOil->Visible = false;

}
private: System::Void skewed_Click(System::Object^ sender, System::EventArgs^ e) {
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
    rotate90->Visible = false;
    rotate180->Visible = false;
    rotate270->Visible = false;
    framePanel->Visible = false;
    blurPanel->Visible = false;
    PanalOil->Visible = false;
    SkewPanel->Visible = true;
}
private: System::Void OkSkew_Click(System::Object^ sender, System::EventArgs^ e) {
    Bitmap^ bmp = gcnew Bitmap(image1->Image);
    String^ skewval_text = skewval->Text;
    double skewval = Double::Parse(skewval_text);
    double M_PI = 3.1415927;
    double radianAngle = (skewval * M_PI) / 180.0;
    double shrinkingVal = (bmp->Width * bmp->Width) / (bmp->Width + (bmp->Height / Math::Tan(radianAngle)));
    double step = bmp->Width - shrinkingVal;
    double move = step / bmp->Width;

    Bitmap^ image2 = gcnew Bitmap(bmp->Width, bmp->Height);
    double scaleWidth = bmp->Width / shrinkingVal;
    for (int i = 0; i < shrinkingVal; i++) {
        for (int j = 0; j < bmp->Height; j++) {
            int new_i = Convert::ToInt32(Math::Round(i * scaleWidth));
            int new_j = j;
            Color pixelColor = bmp->GetPixel(new_i, new_j);
            image2->SetPixel(i, j, pixelColor);
        }
    }

    Bitmap^ image3 = gcnew Bitmap(image2->Width, image2->Height);
    for (int m = 0; m < image3->Width; ++m) {
        for (int n = 0; n < image3->Height; ++n) {
            int newWidth = m + Convert::ToInt32(n * move);
            if (newWidth >= 0 && newWidth < image3->Width) {
                Color pixelColor = image2->GetPixel(m, n);
                image3->SetPixel(newWidth, n, pixelColor);
            }
        }
    }
    Bitmap^ rotated_image = gcnew Bitmap(image3->Height, image3->Width);
    for (int i = 0; i < image3->Width; ++i) {
        for (int j = 0; j < image3->Height; ++j) {
            int newi = image3->Height - 1 - j;
            int newj = i;
            Color pixelColor = image3->GetPixel(i, j);
            rotated_image->SetPixel(newi, newj, pixelColor);
        }
    }

    image1->Image = rotated_image;
    SkewPanel->Visible = true;

}
};
}