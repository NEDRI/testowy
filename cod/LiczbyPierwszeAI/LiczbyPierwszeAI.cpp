#include <iostream>
using namespace std;

int main()
{
	int n;
	int lp = 0;
	int p = 2;

	cout << "Ile liczb pierwszych chcesz wyswietlic: ";
	cin >> n;
	cout << "Liczby pierwsze: ";

	while (lp < n)
	{
		for (int d = 2; d <= p - 1; d++)
		{
			if (p % d == 0)
				goto K8;
		}
		cout << p << ", ";
		lp++;

	K8:
		p++;
	}
}