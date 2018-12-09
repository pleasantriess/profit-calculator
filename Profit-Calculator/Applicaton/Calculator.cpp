#include "pch.h"
#include "Calculator.h"


Calculator::Calculator()
{
}

int Calculator::RunProgram(int section)
{

	if (section == 0)
	{
		GetUserChoice();
		GetPlantInfo();
		GetDiscount();
		GetPrices();
	}

	else if (section == 1)
	{
		GetPlantInfo();
	}

	else if (section == 2)
	{
		GetDiscount();
	}

	else if (section == 3)
	{
		GetPrices();
	}
	
	return 0;
}


// Asks the user if they want to add a plant, look at plants 

void Calculator::GetUserChoice()
{
	using std::cout;
	using std::cin;
	using std::endl;

	int choice = 0;

   cout << "1: Add a new plant           \n"
		<< "2: Find a plant |Not working|\n"
		<< "3: Edit a plant |Not working|\n\n"

		<< "What do you want to do ? : ";

	cin >> choice;

	system("cls");

	switch (choice)
	{
	case 1:
		RunProgram(1);
		break;

	case 2:

		break;

	case 3:
		
		break;
	}
}

// Gets the plant name, size and type (perennial/ annual)

void Calculator::GetPlantInfo() // Name of plant
{
	using std::cout;
	using std::cin;
	using std::endl;

	std::string plantName; // Name of plant

	double gallons = 0.0; // Amount of gallons the plant pot is

	int numberOfPlants = 0; // Number of plants the user wants to input


	//system("cls");


	cout << "How many plants do you want to record? : ";
	cin >> numberOfPlants;


	for (int i = 0; i >= numberOfPlants; i++)
	{
		cout << "What is the plant name? : ";
		cin >> plantName;
		cout << endl;

		cout << "What is the plant size?: ";
		cin >> gallons;

	}
}

// Asks if the client wants a discount. If so, calculate

void Calculator::GetDiscount()
{
	using std::cout;
	using std::cin;
	using std::endl;

	std::string discountyn = " "; // Does the client want a discount (y/n)

	cout << "Does the client want a discount? : " /*<< plantName */ << "? (y/n): ";
	cin >> discountyn;

	if (discountyn == "y" || discountyn == "Y")
	{
		cout << "\n";
		cin.get();

	}
	else if (discountyn == "n" || discountyn == "N")
	{
		cout << "No? Alright.\n";

		cin.get();
	}
}

// Asks if the client wants a discount. If so, calculate

void Calculator::GetPrices()
{
	using std::cout;
	using std::cin;
	using std::endl;


	double originalProductPrice = 0; // Actual price of product that others ;) pay
	double contractorsPrice		= 0; // What we are buying it for
	double profitMargin			= 0; // Difference between product and selling price
	double clientPrice			= 0; // Price the client buys the plant for



	// Getting the price that people normally pay for it
	cout << "Enter the price that people normally pay : ";
	cin >> originalProductPrice;
	cout << endl;

	// Getting the price the client pays
	cout << "Enter the price that the client payed : ";
	cin >> clientPrice;
	cout << endl;

	// Getting the price that we payed (contractorsPrice)
	cout << "Enter the contractors price : ";
	cin >> contractorsPrice;
	cout << endl;

	// Calculations

	profitMargin = (originalProductPrice - contractorsPrice) + clientPrice;

	//--------------------

	cout << "The profit margin is: " << profitMargin;

} // Always use this after discount


Calculator::~Calculator()
{
}
