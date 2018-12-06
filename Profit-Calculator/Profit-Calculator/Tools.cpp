#include "Tools.h"


Tools::Tools()
{
}

void Tools::StartingAnimation()
{
	std::cout << "Welcome to Profit Calculator v2 !" << std::endl;


	Sleep(200);
	std::cout << ".";
	Sleep(200);
	std::cout << ".";
	Sleep(200);
	std::cout << ".";
	Sleep(200);
	std::cout << ".";
	Sleep(200);


	system("cls");
	std::cout << "Welcome to Profit Calculator v2 !" << std::endl;

	std::cout << "\nChange Log \n"
		<< "Oct 3rd  : Made program \n"
		<< "Oct 10th : Made a section asking what the user wants to do, WIP!\n"
		<< "Oct 14th : The program is now able to kill itself"
		<< std::endl;

	Sleep(350);
	std::cout << ".";
	Sleep(350);
	std::cout << ".";
	Sleep(300);
	std::cout << ".";
	Sleep(300);

	Sleep(500);
	system("cls");
}

Tools::~Tools()
{
}
