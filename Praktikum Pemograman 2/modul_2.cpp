#include<iostream>
#include <bits/stdc++.h>
using namespace std;
 
 int main()
 {
    map<string, int> speed{ { "A", 1 },{ "B", 2 },{ "C", 3 },{ "A", 4 },{ "A", 5 },{ "A", 6 },{ "A", 1 }, { "A", 1 }, };
   string b = "A";
   cout<<speed[b];
 }
