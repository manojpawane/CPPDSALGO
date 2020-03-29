#include<iostream>
#define AREA(l, b) (l * b)

int main()
{
    int a =55 , b = 10, area;
    area = AREA(a, b);
    std::cout << "Area of rectangle is: " << area;
    return 0;
}
