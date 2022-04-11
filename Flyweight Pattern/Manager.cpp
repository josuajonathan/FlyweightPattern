#include "Manager.h"

void Manager::generateObjek()
{
	srand(time(0));

	for (int i = 0; i < 9; i++)
	{
		array[i] = *factory.getObjek(randomTipe(0 + rand() % 3));
		array[i].setKoord(i);
		array[i].setSize(rand(), rand());
	}
}

void Manager::printArray()
{
	for (int i = 0; i < 9; i++)
	{
		array[i].draw();
	}
	cout << endl;
}

void Manager::useObjek()
{
	int i;
	cout << "in which coordinate?" << endl;
	cout << "Input Koord : ";
	cin >> i;
	array[i].use();
	cout << endl;
	cout << "Tipe Objek " << array[i].getTipe() << " at " << i << " is used";
}

void Manager::printVectorSize()
{
	cout << "Membuat Tipe Objek : ";
	for (auto i = factory.obyek.begin(); i != factory.obyek.end(); ++i)
	{
		cout << i->getTipe() << ", ";
	}
	cout << "Ukuran Vektor : " << factory.obyek.size() << endl;
}

string Manager::randomTipe(int index)
{
	return tipe[index];
}