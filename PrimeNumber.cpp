#include<iostream>
using namespace std;
int main()
{
    int number;
    bool flag = false;
    cout<<"Enter the number to check whether it is prime number";
    cin >> number;
    for(int i = 2; i < number; i++)
    {
        if(number % i == 0)
        {
            flag = true;
            cout << "Number is not a prime number";
            break;
        }
    }
    if(!flag)
    {
        cout<< number<<" is a prime number";
    }
}
