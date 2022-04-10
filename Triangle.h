#pragma once
#include "Objek.h"
#include <string>

class Triangle : public Objek
{
private:
	double luas;
	int x, y;
	string tipe;
	bool status;

public:
	Triangle();
	void settipe(string);
	string gettipe();

	void setukuran(double, double);
	double getukuran();

	void setKoord(int, int);
	int getKoordX();
	int getKoordY();

	void enableObj();
	void disableObj();
	bool getStatus();
	void draw();
};
