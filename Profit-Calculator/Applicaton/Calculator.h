#pragma once
class Calculator
{
public:
	Calculator();

	int runProgram();

	void getUserChoice(); // Asks the user what part of the program they want to access

	void getPlantInfo(); // Gets the info of the plant

	void getDiscount(); // Asks if the client wants a discount

	void getPrices();

	~Calculator();
};

