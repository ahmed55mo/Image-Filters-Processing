/*
assingment 3 GUI version 4.8
authors:    ahmed mohamed ahmed --> 20231013     performed filters no. 2 , 5 , 8 , 11 , 13 , 16 (filter number 15 in this file) ,17 (filter number 14 in this file)     section 11
			ali alnazeir ahmed --> 20230824      performed filters no. 1 , 4 , 7 , 10 , make the 2 new filters, did the gui   section 11
			abdullah alaa --> 20231103           performed filters no. 3 , 6 , 9 , 12      section 11
*/
#include "MyForm.h"
#include "Image_Class.h"

using namespace System;
using namespace System::Windows::Forms;
class Image;
[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GUI2::MyForm form;
	Application::Run(% form);
}
