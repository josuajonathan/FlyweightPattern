#include "Rectangle.h"

void Rectangle::settipe(string tipe)
{
	tipe = "Rectangle";
}

string Rectangle::gettipe() 
{
	return tipe;
}

void Rectangle::setukuran(double panjang, double lebar)
{
	luas = panjang * lebar;
}

double Rectangle::getukuran()
{
	return luas;
}

void Rectangle::setKoord(int x, int y)
{
	this->x = x;
	this->y = y;
}

int Rectangle::getKoordX()
{
	return x;
}

int Rectangle::getKoordY()
{
	return y;
}

void Rectangle::enableObj()
{
	status = true;
}

void Rectangle::disableObj()
{
	status = false;
}

bool Rectangle::getStatus()
{
	return status;
}

void Rectangle::draw()
{
	cout << "Gambar " << gettipe() << "dengan Ukuran" << getukuran() << "x : " << getKoordX() << "y : " << getKoordY() << endl;
}
