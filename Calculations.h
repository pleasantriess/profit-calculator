#pragma once
#include "../common.h"

class Calculations
{
public:
	Calculations();

	bool doesFileExist(const char *fileName);
	void createFolder(const char * path);
	void makeSaveFiles();
	
	void runProgram();

	void getUserChoice();

	void getPlantInfo();
	void getDiscount();
	void getPrices();

	void Debugging();

	~Calculations();


};

