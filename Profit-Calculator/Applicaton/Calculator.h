#pragma once
class Calculator
{
public:
	Calculator();

	int RunProgram(int choice);

	void GetUserChoice(); // Asks the user what part of the program they want to access

	void GetPlantInfo(); // Gets the info of the plant

	void GetDiscount(); // Asks if the client wants a discount

	void GetPrices(); // Gets the prices of the plants

	~Calculator();
};

