// Program factorial
#include <iostream>
using namespace std;

int main()
{
    int n, i, factorial;
    cout << "Enter the number :";
    cin >> n;
    cout << "n! = " << n << "! = ";
    factorial = 1;
    // for (i = n; i >= 1; i--)
    // for (i = 1; i <= n; i++)
    i = n;
    do
    {
        factorial *= i;
        // if (i != 1)
        if (i != n)
        {
            cout << i << "x";
        }
        else
        {
            cout << i << " = ";
        }
        i--;
    } while (i >= 1);

    cout
        << factorial << endl
        << endl;
    system("PAUSE");
    return 0;
}