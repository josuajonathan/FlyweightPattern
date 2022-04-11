#pragma once
#include <iostream>
#include "Objek.h"
#include <vector>

class Factory
{
public:
	vector<Objek> obyek;
	Objek* getObjek(string type);
};