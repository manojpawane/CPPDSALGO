#include<iostream>
using namespace std;
int main()
{
    int x, y;
    cout<<"Enter the value of X & Y coordinate(s)..";
    cin>> x >>y;
    if(x == 0)
    {
        cout<<"Lies on the y axis..";
    }
    else if(y == 0)
    {
        cout<<"Lies on x axis..";
    }
    else if(x > 0 && y > 0)
    {
        cout<<"First Quadrant..";
    }
    else if(x < 0 && y > 0)
    {
        cout<<"Second Quadrant..";
    }
    else if(x < 0 && y < 0)
    {
        cout<<"Third Quadrant..";
    }
    else if(x > 0 && y < 0)
    {
        cout<<"Fourth Quadrant..";
    }
    else
    {
        cout<<"Lies on origin..";
    }
    cout<<endl <<"Thank You..";
}
