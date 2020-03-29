#include<iostream>
using namespace std;
int main()
{
    int sum = 1;
    int number = 0;
    cout << "Please enter the number to find factorial: ";
    cin >> number;
    for(int i = 1; i <= number; i++)
    {
        sum = sum * i;
    }
    cout<<"Factorial of the number is.." << sum;
}
