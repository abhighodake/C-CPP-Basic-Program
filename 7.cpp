// WAP to input an ASCII code from the user and print its corresponding character.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the ASCII code : ";
    cin>>n;
    char c;
    c=n;
    cout<<"The corresponding character for the given ASCII code is : "<<c;
    return 0;
}