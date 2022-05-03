#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{

	const int table_size = 20;
	int table[table_size];
	int i;
	int j;
	int zmienna;
	int losowa;
	int chwilowa;


	for (i = 0; i < table_size; i++)
	{
		cout << "wpisz znaki, aby przerwac podaj 0  " << endl;

		cin >> zmienna;

		if (zmienna == 0)
		{
			break;
		}
		else
		{
			table[i] = zmienna;
		}
	}


	for (j = 0; j < i; j++)
	{
		chwilowa = table[j];
		srand(time(NULL));
		losowa = rand() % chwilowa;
		cout << "wylosowane miejsce w tablicy to: " << table[losowa] << endl;
	}
}