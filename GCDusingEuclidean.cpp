#include<iostream>
using namespace std;

int count = 0;
int FindGCDNumber(int firstNumber, int secondNumber)
{
    count++;
    int remainder = 0;
    int quotient = 0;
    if(firstNumber == 0)
    {
        return secondNumber;
    }
    else if(secondNumber == 0)
    {
        return firstNumber;
    }
    if(firstNumber > secondNumber)
    {
        remainder = firstNumber % secondNumber;
        FindGCDNumber(secondNumber, remainder);
    }
    else
    {
        remainder = secondNumber % firstNumber;
        FindGCDNumber(firstNumber, remainder);
    }
}

/*int gcd(int a, int b)
{
    count ++;
    cout<< " A.." << a;
    cout<<" B.." << b;
    cout<< endl;
    if(b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}*/

int main()
{
    int firstNumber = 0;
    int secondNumber = 0;
    cout<<"Enter the first number..";
    cin >> firstNumber;
    cout<<"Enter the second number..";
    cin>> secondNumber;
    int GcdNumber = FindGCDNumber(firstNumber, secondNumber);
    cout << "The Gcd.." << GcdNumber;
    cout << "Count.." << count;
    return 0;
}
