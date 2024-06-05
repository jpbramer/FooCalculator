#include "Form.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]


void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	FooCalculator::Form form;
	Application::Run(% form);
}