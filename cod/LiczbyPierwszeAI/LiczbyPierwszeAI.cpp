#include <iostream> 
using namespace std;
int main() {
	int n;
	int lp = 0;
	int p = 2;
	int d;
	cout << "ile liczb wygenerowac";
	cin >> n;
	while (lp < n)
	{
		for (int d = 2; d <= p - 1; d++)
		{
			if (p % d == 0)
			{
				goto KROK;
			}
		}
		cout << p << " ";
		lp = lp + 1;
		
		KROK:
			p = p + 1;
	}
}
