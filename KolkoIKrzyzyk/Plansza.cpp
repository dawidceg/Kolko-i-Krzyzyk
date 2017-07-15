#include "Plansza.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<String^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	KolkoIKrzyzyk::Plansza forma;
	Application::Run(%forma);

	return 0;
}