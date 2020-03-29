using namespace std;
#include<iostream>

int main()
{
    cout<<"Please enter the Nth value for sum of natural number";
    int N;
    int sum = 0;
    cin >> N;
    for(int i = 0; i <= N; i++)
    {
      //  sum = sum + i;
    }
    sum = (N * (N+1)/2);
    cout<< sum;
    return 0;
}
