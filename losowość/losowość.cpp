#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{

	const int table_size = 20;
	int table[table_size];
	char i;
	char zmienna;
	int losowa;


	for (i = 0; i < table_size; i++)
	{
		cout << "wpisz znaki, aby przerwac podaj 0  " << endl;

		cin >> zmienna;

		if (zmienna == '0')
		{
			break;
		}
		else
		{
			table[i] = zmienna;
		}
	}

	for (int j = i; j <= i; j++)
	{
		losowa = table[i];
		srand((int)time(0));
		losowa = rand() % table[i];
		cout << "losowo" << endl;
		cout << losowa;
	}

}