//C++ Program
//Decimal to binary conversion
#include <iostream>
#include<vector>
#include <math.h>
using namespace std;

int gcd(int a, int b)
{
    int remainder = 0;
    if(b == 0)
    {
        cout<< a;
    }
    remainder = a % b;
    gcd(b, remainder);
}

int main()
{
gcd(270, 192);
}
