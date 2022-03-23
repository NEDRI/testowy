#include <iostream>
using namespace std;
int main()
{
	cout << "Hello World!\n";



	int a;
	int b;



	cout << "Podaj liczba dla a\n";
	cin >> a;
	cout << "Podaj liczbe dla b\n";
	cin >> b;



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
		cout << a;
}