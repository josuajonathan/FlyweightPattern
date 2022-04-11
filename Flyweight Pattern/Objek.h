#include <iostream>
#include <string>
using namespace std;

struct Size {
	string tipe;
	int size = 0;
};

class Objek {
private:
	string tipe;
	Size size[2];
	int koord;
	bool status = false;

public:
	void setTipe(string tipe);
	string getTipe();
	void setSize(int, int);
	Size* getSize();
	void setStatus(bool);
	bool getStatus();
	void setKoord(int);
	int getKoord();
	void use();

	void draw();
};