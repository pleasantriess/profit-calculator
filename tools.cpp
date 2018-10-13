#include "pch.h"
#include "tools.h"
#include "common.h"

// This class is for various tools I need that I shouldn't put in Calculations

tools::tools()
{
}

void tools::killTask()
{
	system("taskkill /F /T /IM Profit Calculator.exe");
}

void tools::writeKeys()
{


}

tools::~tools()
{
}
