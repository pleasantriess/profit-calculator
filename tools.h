#pragma once
class Tools
{
public:
	Tools();

	//void CreateProc(LPCWSTR CreateProcIn);

	void KillTask  (const char * killTaskIn);

	void WriteKeys (std::string &variableOut);

	void ReadKeys(std::string &variableIN, int tellPlantsChoice);

	~Tools();
};

