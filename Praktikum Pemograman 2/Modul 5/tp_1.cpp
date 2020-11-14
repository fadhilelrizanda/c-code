#include <iostream>
using namespace std;
int main()
{
    int new1 = 6;
    int *p_new1;
    p_new1 = &new1;
    cout << "value: new1 = " << new1;
    cout << ", *p_new1 = " << *p_new1 << "\n";
    cout << "address new1 = " << &new1;
    cout << ", p_new1 = " << p_new1 << "\n";
    *p_new1 = *p_new1 + 1;
    cout << "The present new1 = " << new1 << "\n";
    system("PAUSE");
    return 0;
}