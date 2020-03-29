#include<iostream>
using namespace std;
int main()
{
    int number = 0;
    int sqaureNumber =0;
    cout << "Enter the number to check whether it is Automorphic Number..";
    cin >> number;
    sqaureNumber = number * number;
    while(number!=0)
    {
        if((number % 10) != (sqaureNumber %10))
        {
            cout << "Number is not a Automorphic Number..";
            return 0;
        }
        number = number / 10;
        sqaureNumber = sqaureNumber /10;
    }
    cout << "Number is Automorphic Number..";

}
