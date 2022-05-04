#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{

	const int table_size = 10;
	int table[table_size];
	int i;
	int j;
	int liczba;
	int proba;

	cout << "wylosowano liczbe od 1 do 100, zgadniesz?" << endl;

	for (i = 0; i < table_size; i++)
	{
		srand(time(0));
		liczba = 0;
		liczba = rand() % 100 + 1;
		table[i] = liczba;

	}
	cout << "podaj liczbe: ";
	cin >> proba;

	for (i = 0; i < table_size; i++) {
	

		if (table[i] == proba) {
		
			cout << "brawo zgadles :( ";
		}
		break;

		if (table[i] != proba) {
		
			cout << "nie tym razem :)";
		}
		break;
	}

	

}