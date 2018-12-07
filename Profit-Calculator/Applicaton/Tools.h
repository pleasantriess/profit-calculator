#pragma once

class Tools {

public:

	Tools();

	// Animation at the start of the program
	void StartingAnimation();

	// Writes variables to a text file named Plants.txt
	void WriteKeys(std::string &var);

	// Reads variables from a text file named Plants.txt
	void ReadKeys(std::string &var, int tellPlantsChoice);
	

	~Tools();

};

