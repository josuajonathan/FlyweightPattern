#include "Factory.h"

Objek* Factory::getObjek(string tipe)
{
	Objek* returnObjek = new Objek;

	struct tipeobjek
	{
		tipeobjek(string const& o) : tipe(o) {}
		bool operator () (Objek& a) {return a.getTipe() == tipe; }
	private:
		string tipe;
	};

	vector<Objek>::iterator it = find_if(obyek.begin(), obyek.end(), tipeobjek(tipe));

	if (it != obyek.end())
	{
		*returnObjek = *it;
	}

	else
	{
		Objek* temp;
		temp = new Objek();
		temp->setTipe(tipe);
		obyek.push_back(*temp);
		returnObjek = temp;
	}
	return returnObjek;
}