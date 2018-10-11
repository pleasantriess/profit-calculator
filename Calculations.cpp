#include "pch.h"
#include "Calculations.h"
 
// This class does the bulk of the things this program is meant for. Discounts, recording plants etc.

Calculations::Calculations()
{
	

}

// Prototyping in the correct order they will be used in
	/*void getDiscount();
	int getPrices();
	void getPlantInfo(); */


// Quick function to call all of the other functions
void Calculations::runProgram()
{
	getUserChoice();
	getPlantInfo();
	getDiscount();
	getPrices();
}

// Asks the user if they want to add a plant, look at plants 

void Calculations::getUserChoice()
{
	int choice = 0;

	std::cout << "You can : "
			  << "1: Add a new plant            "
			  << "2: Find a plant |Not working| "
			  << "3: Edit a plant |Not working| "
			  << "What do you want to do ? :    ";

	std::cin >> choice;

	switch (choice)
	{
	case 1:
		runProgram();
		break;

	case 2:
		// WIP
	case 3:
		// WIP
		break;
	}
}

// Gets the plant name, size and type (perennial/ annual)

void Calculations::getPlantInfo()
{
	std::string plantName = ""; // Name of plant
	double gallons = 0.0; // Amount of gallons the plant pot is

	int numberOfPlants = 0; // Number of plants the user wants to input

	system("cls"); // clearing console because of a weird thing I was encountering

	std::cout << "How many plants do you want to record? : ";
	std::cin >> numberOfPlants;


	for (int i = 0; i >= numberOfPlants; i++)
	{
		std::cout << "What is the plant name? : ";
		std::cin >> plantName;
		std::cout << std::endl;

		std::cout << "What is the plant size?: ";
		std::cin >> gallons;

		getPlantInfo();
	}
}

// Asks if the client wants a discount. If so, calculate

void Calculations::getDiscount()
{

	// wanted to use bool but it just won't cooperate. I will look this up later
	// bool discountyn = false;

	std::string discountyn = " "; // Does the client want a discount (y/n)

	std::cout << "Does the client want a discount? : " /*<< plantName */ << "? (y/n): ";
	std::cin >> discountyn;

	if (discountyn == "y" || "Y")
	{
		std::cout << "\n";
		std::cin.get();

	}
	else if (discountyn == "n" || "N")
	{
		std::cout << "No? Alright.\n";

		std::cin.get();
	}
}


// Asks if the client wants a discount. If so, calculate

void Calculations::getPrices()
{

	double originalProductPrice = 0; // Actual price of product that others ;) pay
	double contractorsPrice = 0; // What we are buying it for
	double profitMargin = 0; //*originalProductPrice - contractorsPrice;*/ // Difference between product and selling price
	double clientPrice = 0; // Price the client buys the plant for



	// Getting the price that people normally pay for it
	std::cout << "Enter the price that people normally pay : ";
	std::cin >> originalProductPrice;
	std::cout << std::endl;

	// Getting the price the client pays
	std::cout << "Enter the price that the client payed : ";
	std::cin >> clientPrice;
	std::cout << std::endl;

	// Getting the price that we payed (contractorsPrice)
	std::cout << "Enter the contractors price : ";
	std::cin >> contractorsPrice;
	std::cout << std::endl;

	// Calculations

	profitMargin = (originalProductPrice - contractorsPrice) + clientPrice;

	//--------------------

	std::cout << profitMargin;

} // Always use this after discount



Calculations::~Calculations()
{
	std::cout << "Object destroyed" << std::endl;
	
	Sleep(2000);
}
