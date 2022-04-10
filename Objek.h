#pragma once
#include <string>
#include <iostream>
using namespace std;

class Objek {
public :
	Objek();
	virtual void settipe()   = 0;
	virtual string gettipe() = 0;

	virtual void setukuran()   = 0;
	virtual double getukuran() = 0;

	virtual void setKoord() = 0;
	virtual int getKoordX() = 0;
	virtual int getKoordY() = 0;

	virtual void enableObj()  = 0;
	virtual void disableObj() = 0;
	virtual bool getStatus()  = 0;

	virtual void draw();
};
