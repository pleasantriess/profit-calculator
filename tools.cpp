#include "pch.h"
#include "Tools.h"
#include "common.h"

// This class is for various Tools I need that I shouldn't put in Calculations

Tools::Tools()
{
}

void Tools::killTask()
{
	system("taskkill /F /T /IM 'Profit Calculator.exe'");
}

void Tools::writeKeys()
{


}

Tools::~Tools()
{
}
