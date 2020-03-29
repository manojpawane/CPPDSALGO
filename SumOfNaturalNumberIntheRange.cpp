#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the minimum Number for sum of N Natural Number";
    int minimum, maximum, sum = 0;
    cin>> minimum;
    cout<<"Enter the maximum Number for sum of N Natural Number";
    cin>> maximum;
    for(int i = minimum ; i <= maximum; i++)
    {
        sum = sum + i;
    }
    cout << sum;
}
