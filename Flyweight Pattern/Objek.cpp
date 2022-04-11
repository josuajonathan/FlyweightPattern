#include "Objek.h"

void Objek::setTipe(string tipe)
{
	this->tipe = tipe;
	if (tipe == "Circle")
	{
		size[0].tipe = "r";
		size[1].tipe = "r";
	}
	else if (tipe == "Rectangle")
	{
		size[0].tipe = "p";
		size[1].tipe = "l";
	}
	else if (tipe == "Triangle")
	{
		size[0].tipe = "a";
		size[1].tipe = "t";
	}
}

string Objek::getTipe()
{
	return tipe;
}

void Objek::draw()
{
	cout << "Gambar [ " << tipe << ", "
		<< size[0].tipe << " = " << size[0].size << ", "
		<< size[1].tipe << " = " << size[1].size
		<< " - at Koordinat " << koord << " ]" << " dengan status ";

	if (this->getStatus())
	{
		cout << "Enabled";
	}

	else 
	{
		cout << "Disabled";
	}
	cout << endl;
}

void Objek::use()
{
	status = true;
}

void Objek::setStatus(bool status)
{
	this->status = status;
}

bool Objek::getStatus()
{
	return status;
}


void Objek::setSize(int x, int y)
{
	size[0].size = x;
	size[1].size = y;
}

Size* Objek::getSize()
{
	return size;
}

void Objek::setKoord(int x)
{
	koord = x;
}

int Objek::getKoord()
{
	return koord;
}
