#include "pch.h"
#include "Tools.h"
#include "common.h"
#include "calculations.h"

// This class is for various Tools I need that I shouldn't put in Calculations

Tools::Tools()
{
	char x = N;
}

void Tools::killTask()
{
	system("taskkill /F /T /IM 'Profit Calculator.exe'");
}

void Tools::writeKeys(LPCSTR keys)
{
		std::ofstream logfile; // Make logfile
		logfile.open("Plants.txt", std::fstream::app); // Opens txt file
		logfile << keys; // Writes input to txt file
		logfile.close(); // Close file
}

Tools::~Tools()
{
}
