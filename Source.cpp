#include "Log_in.h"

using namespace System;
using namespace System :: Windows :: Forms;

[STAThreadAttribute]

int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	DatabasesAppsdoctorsOffice::Log_in form;
	Application::Run(% form);

	return 0;
}