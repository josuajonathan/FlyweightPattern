#include "Factory.h"
#include "Manager.h"

int main()
{
	Factory factory;
	Manager manager;
	cout << "Generating Objects..." << endl;
	manager.generateObjek();
	cout << "Displaying Objects..." << endl;
	manager.printArray();
	manager.printVectorSize();

	int option = 0;
	while (option != 99)
	{
		cout << endl;
		cout << "1. Use Object" << endl;
		cout << "2. Display All Objects" << endl;
		cout << "3. List of Object Created On Vector" << endl;
		cout << "99. exit" << endl;
		cout << "[] : "; cin >> option;

		switch (option)
		{
		case 1:
			manager.useObjek();
			break;
		case 2:
			manager.printArray();
			break;
		case 3:
			manager.printVectorSize();
			break;
		}
	}
}