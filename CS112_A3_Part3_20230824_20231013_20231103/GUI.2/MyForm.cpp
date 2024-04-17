/*
assingment 3 version 7.0
authors:    Ahmed Mohamed Ahmed --> 20231013     performed filters no. 2 , 5 , 8 , 11 , 13 , 14 , 15 , 18    section 11
            Ali Alnazeir Ahmed --> 20230824      performed filters no. 1 , 4 , 7 , 10 , did the gui , performed 2 more filters 16 , 17   section 11
            Abdullah Alaa --> 20231103           performed filters no. 3 , 6 , 9 , 12 , 19 , 20   section 11
this file is an image filter modification application 
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
