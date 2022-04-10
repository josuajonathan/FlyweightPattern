#include "Circle.h"

void Circle::settipe(string tipe) 
{
	tipe = "Circle";
}

string Circle::gettipe() {
	return tipe;
}

void Circle::setukuran(double radius)
{
	double luas = 3.14 * radius * radius;
}

double Circle::getukuran()
{
	return luas;
}

void Circle::setKoord(int x, int y)
{
	this->x = x;
	this->y = y;
}

int Circle::getKoordX() 
{
	return x;
}

int Circle::getKoordY() 
{
	return y;
}

void Circle::enableObj()
{
	status = true;
}

void Circle::disableObj()
{
	status = false;
}

bool Circle::getStatus()
{
	return status;
}

void Circle::draw() 
{
	cout << "Gambar " << gettipe()<< "dengan Ukuran" << getukuran() << "x : " << getKoordX() << "y : " << getKoordY() << endl;
}
