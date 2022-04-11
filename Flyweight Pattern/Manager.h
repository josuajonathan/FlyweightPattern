#pragma once
#include "Factory.h"

class Manager
{
private:
	string tipe[3] = {"Circle","Rectangle","Triangle" };
	Objek array[9];
	Factory factory;

public:
	void generateObjek();
	void printArray();
	void printVectorSize();
	string randomTipe(int index);
	void useObjek();
};