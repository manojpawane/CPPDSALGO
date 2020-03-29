#include<iostream>
using namespace std;
int gcd(int, int);
int count = 0;
int main()
{
    int a , b;
    cout<< "Enter the value of A and B..";
    cin >> a>>b;
    int value = gcd(a, b);
    cout << "GCD.." << value;
    cout << "Count.." << count;
}

int gcd(int a, int b)
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
}

