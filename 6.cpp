// WAP to calculate the area of the circle.

#include<iostream>
using namespace std;
int main()
{
    float r,pi=3.14,area;
    cout<<"Enter the radius of the circle : ";
    cin>>r;
    area=pi*r*r;
    cout<<"The area of the circle is : "<<area;
    return 0;
}