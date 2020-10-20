#include <iostream>
#include <string>
using namespace std;
int main()
{
    //Experimental Data Types
    string Univ;
    int a, b;
    float c;
    double d;
    char e;

    cout << "Enter The value of a : ";
    cin >> a;
    cout << "Enter The value of b : ";
    cin >> b;
    cout << "Enter The value of c : ";
    cin >> c;
    cout << "Enter The value of d : ";
    cin >> d;
    cout << "Enter The value of e : ";
    cin >> e;

    cout << "Enter your University : ";
    cin >> Univ;
    cout << endl
         << endl;

    cout << " Your University is : " << Univ << endl;
    cout << " The value of a is " << a << endl;
    cout << " The value of b is " << b << endl;
    cout << " The value of c is " << c << endl;
    cout << " The value of d is " << d << endl;
    cout << " The value of e is " << e << endl
         << endl;

    //arithmetic Operator
    cout << " The value of a+b =" << a + b << endl;
    cout << " The value of a%b =" << a % b << endl
         << endl;

    b = 0;
    a = 1;
    b += a;
    cout << " a = 1" << endl;
    cout << " b += a" << endl;
    cout << " The value of b is = " << b << endl;
    b = b + a;
    cout << " b=b+a" << endl;
    cout << " The value of b is = " << b << endl;
    b -= a;
    cout << " b-=a" << endl;
    cout << " The value of b is = " << b << endl;
    b = b - a;
    cout << " b=b-a" << endl;
    cout << " The value of b is = " << b << endl;
    cout << endl
         << endl;
    cout << " The value of a is = " << a << endl;
    b = ++a;
    cout << " b = ++a" << endl;  //! Ganti dengan b = b++;
    cout << " The value of a is = " << a << endl;
    cout << " The value of b is = " << b << endl;
    b = a++;
    cout << " b = a++" << endl;
    cout << " The value of a is = " << a << endl;
    cout << " The value of b is = " << b << endl;
    b = --a;
    cout << " b = --a" << endl;
    cout << " The value of a is = " << a << endl;
    cout << " The value of b is = " << b << endl;
    b = a--;
    cout << " b = a--" << endl;
    cout << " The value of a is = " << a << endl;
    cout << " The value of b is = " << b << endl;

    system("PAUSE");
    return 0;
}