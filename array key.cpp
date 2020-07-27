// CPP program to demonstrate associative arrays
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // the first data type i.e string represents
    // the type of key we want the second data type
    // i.e int represents the type of values we
    // want to store at that location
    map<string, int> marks{{"Rithvik", 78},
                           {"Suraj", 91},
                           {"Jessie", 100},
                           {"Praveen", 99},
                           {"Bisa", 84}};

    map<string, int>::iterator i;
    cout << "The marks of all students are" << endl;
    for (i = marks.begin(); i != marks.end(); i++)
        cout << i->second << " ";

    cout << endl;

    // the marks of the students based on there names.
    cout << "the marks of Computer geek Jessie are"
         << " " << marks["Jessie"] << endl;

    cout << "the marks of geeksforgeeks contributer"
            " Praveen are "
         << marks["Praveen"] << endl;
}
