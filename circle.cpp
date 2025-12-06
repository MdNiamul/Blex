#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    double area, redius, pi;

    cout<<showpoint;
    cout<<setprecision(10);

    cout<<"Enter the number Redius : ";
    cin>>redius;

    cout<<"Enter the number pi : ";
    cin>>pi;

    area = 2 * pi * redius * redius;
    cout<<setw(20)<<"This is circle is : "<<area;




    getch();
}