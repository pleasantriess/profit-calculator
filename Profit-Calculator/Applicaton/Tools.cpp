#include "pch.h"
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

	std::cout << "\nChange Log 2018\n"
		<< "Oct 3rd  : Made program \n"
		<< "Oct 10th : Made a section asking what the user wants to do, WIP!\n"
		<< "Oct 14th : The program is now able to kill itself\n"
		<< "Dec 6th  : Re Writing entire program"
		<< std::endl;

	Sleep(350);
	std::cout << ".";
	Sleep(350);
	std::cout << ".";
	Sleep(400);
	std::cout << ".";
	Sleep(500);

	Sleep(500);
	system("cls");

}

void Tools::ReadKeys(std::string &var, int tellPlantsChoice) // takes in var to read
{
	// Get var working ^^

	// Making an object of ifstream (reading vars)
	std::ifstream in;
    
	// Open Plants.txt
	in.open("Plants.txt"); 

	// Check for errors
	if (in.fail()) { std::cerr << "Error Opening File!" << std::endl; exit(1); }

	std::string test;

	int count = 0;

	std::string x; // Declaring x so it can store a value from text file

	// Getting the first var from text
	in >> x;

	std::cout << x;

	if (tellPlantsChoice == 1)
	{
		while (!in.eof()) // While not equal to end of file (eof)
		{
			in >> test;

			count++;
		}

		std::cout << count;
	}

	/*
	int x; // Declaring x so it can store a value from text file

	// Getting the first var from text
	in >> x; 

	// Printing value of x
	std::cout << "num = " << x; 
	*/

	// Fix this
	//std::vector<int> amountOfVarsInFile{};

	//for (auto vars : amountOfVarsInFile)
	//{

	//}

	in.close();
}

void Tools::WriteKeys(std::string &var)
{
	std::ofstream out;

	out.open("Plants.txt");

	out << var;

	out.close();
}


Tools::~Tools()
{
}
