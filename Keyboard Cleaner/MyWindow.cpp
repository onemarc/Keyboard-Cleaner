#include "MyWindow.h"

using namespace System;
using namespace System::Windows::Forms;

extern "C" {
	__declspec(dllimport) int __stdcall BlockInput(int fBlockIt);
}

[STAThreadAttribute]

int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	OneKeyBoardCleaner::MyWindow window;
	Application::Run(% window);
}