#include <iostream>
using namespace std;

class Triangel
{
public:
    float firstSide, secondSide, thirdSide, sum;
    Triangel(float a, float b, float c)
    {

        firstSide = a;
        secondSide = b;
        thirdSide = c;
        if ((firstSide + secondSide) > thirdSide)
        {
            sum = firstSide + secondSide;
        }
        else if ((firstSide + thirdSide) > secondSide)
        {
            sum = firstSide + thirdSide;
        }
        else
        {
            sum = secondSide + thirdSide;
        }
    }
};