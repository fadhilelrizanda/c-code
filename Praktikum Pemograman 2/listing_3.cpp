#include <iostream>
using namespace std;

int main()
{
int z;
 bool x, y;
 cout << "x : ";
 cin >> x;
 cout << "y : ";
 cin >> y;
 z = (x || y) && !(x && y);
 cout<<x<<" XOR "<<y<< " = "<< z << endl;
 cout<<"-------------------------"<<endl; // tambahan
 cout<<x<<" XOR "<<y<< " = "<< !z << endl; //tambahn
 system("PAUSE");
 return 0;
 }