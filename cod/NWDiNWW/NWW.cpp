#include <iostream>
using namespace std;
int main()
{
	cout << "Hello World!\n";



	int a;
	int b;
	int iloczyn;
	int nww;


	cout << "Podaj liczba dla a\n";
	cin >> a;
	cout << "Podaj liczbe dla b\n";
	cin >> b;

	iloczyn = a * b;


	while (a != b)
	{
		if (a < b)
		{
			b = b - a;

		}
		else
		{
			a = a - b;
		}
	}
	nww = iloczyn / a;
	cout << nww;
}