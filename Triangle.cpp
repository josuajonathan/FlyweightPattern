#include "Triangle.h"

void Triangle::settipe(string tipe)
{
	tipe = "Triangle";
}

string Triangle::gettipe() 
{
	return tipe;
}

void Triangle::setukuran(double alas, double tinggi)
{
	luas = 0.5*alas*tinggi;
}

double Triangle::getukuran()
{
	return luas;
}

void Triangle::setKoord(int x, int y)
{
	this->x = x;
	this->y = y;
}

int Triangle::getKoordX()
{
	return x;
}

int Triangle::getKoordY()
{
	return y;
}

void Triangle::enableObj()
{
	status = true;
}

void Triangle::disableObjek()
{
	status = false;
}

bool Triangle::getStatus()
{
	return status;
}

void Triangle::draw()
{
	cout << "Gambar " << gettipe() << "dengan Ukuran" << getukuran() << "x : " << getKoordX() << "y : " << getKoordY() << endl;
}
