#include <iostream>
using namespace std;



void main()
{
	int klucz;
	int dl;
	char tab[1000];

	dl = 1000;
	int indeks = 0;

	cout << "ile liczb wygenerowac\n";
	cin >> klucz;

	cout << "podaj napis\n";
	cin >> tab;

	if (!(klucz >= -26 && klucz <= 26))
	{
		return;
	}

	if (klucz >= 0)
	{
		cout << "AAAAAA\n";
		while (indeks < dl)
		{
			if (tab[indeks] + klucz <= 'z')
			{
				tab[indeks] += klucz;
			}
			else
			{
				tab[indeks] = tab[indeks] + klucz - 26;
			}
			indeks++;
		}
	cout << tab;
	}
	else
	{
		cout << "BBBBB\n";
		while (indeks < dl)
		{
			if (tab[indeks] + klucz >= 'a')
			{
				tab[indeks] += klucz;
			}
			else
			{
				tab[indeks] = tab[indeks] + klucz + 26;
			}
			indeks++;
		}
	cout << tab;
	}

}