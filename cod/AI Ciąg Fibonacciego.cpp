#include <iostream>
using namespace std;
int main()
{
    std::cout << "Hello World!\n";

    int n = 0;
    cout << "numer liczby Fibonacciego.. ";
    cin >> n;

    int f1,f0,f;
    f0 = 0;
    f1 = 1;
    for (int i = 0; i <= n; i++)
    {
        if (i>1)
        {
            f = f0 + f1;
            f0 = f1;
            f1 = f;
        }
        else
        {
            f = i;
            continue;
        }
        cout << f << "\n";
    }


}
