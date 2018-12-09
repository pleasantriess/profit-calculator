/*

	Made by Scott Banister

	GitHub Organization - github.com/billionare


 TODO: 

 ~ Make a check whether the program has run before. If it hasn't, it won't need to check for the variables in the storage file.
 


*/


#include "pch.h"

#include "tools.h"
#include "Calculator.h"


int main()
{
	Tools *tools = new Tools;

	Calculator *program = new Calculator;

	tools->StartingAnimation();

	program->runProgram();

	return 0;
}