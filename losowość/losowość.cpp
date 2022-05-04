#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{

	const int table_size = 10;
	int table[table_size];
	int i;
	int ;
	int liczba;
	int proba;

	cout << "wylosowano liczbe od 1 do 100, zgadniesz?" << endl;

	for (i = 0; i < table_size; i++)
	{

		liczba = 0;
		liczba = rand() % 100 + 1;
		table[i] = liczba;

	}
	cout << "podaj liczbe: ";
	cin >> proba;

	for (i = 0; i < table_size; i++) 
	{

		if (proba == table[i]) 
		{
			cout << "brawo zgadles :( " << endl;
			break;
			losowanie nie działa poprawnie sprawdzanie poprawione
		}


		if (proba != table[i]) 
		{
			cout << i+1 <<" liczba sie nie zgadza :) " << endl;
		}

	}



}