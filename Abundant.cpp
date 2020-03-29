#include<iostream>
using namespace std;
int main()
{
    int number = 0;
    cout<< "Enter the number to check whether it is abundant or not..";
    cin >> number;
    int sum = 0;
    for(int i = 1; i < number; i++)
    {
        if(number % i == 0)
        {
            sum = sum + i;
        }
    }
    if(sum > number)
    {
        cout << number << " is abundant number..";
    }
    else
    {
        cout << "It is not a abundant number..";
    }
}
