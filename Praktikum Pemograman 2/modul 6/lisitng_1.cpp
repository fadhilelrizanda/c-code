#include <iostream>

using namespace std;

class Rectangle
{
public:
    int *length, *width;

public:
    Rectangle(int a, int b)
    {
        length = new int;
        width = new int;

        *length = a;
        *width = b;
    }
    int arectangle()
    {
        return (*length * *width);
    }
    ~Rectangle()
    {
        cout << "\nThe result before destructor executed is : " << (*length * *width) << endl;
        cout
            << "The address of length is : "
            << &length
            << endl;
        cout << "The address of width is : " << &width << endl
             << endl;
        system("pause");
        delete length;
        delete width;
        cout << "\nThe result after destructor executed is : " << (*length * *width) << endl;
        cout << "The address of length is : " << &length << endl;
        cout << "The address of width is : " << &width << endl
             << endl;
        system("pause");
    }
};

int main()
{
    Rectangle square1(3, 4);
    cout << "The rectangle of the square1 is : " << square1.arectangle() << endl
         << endl;
}