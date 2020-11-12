/*****************************************************************************
		MAIA Master M1
Software Engg. : Practise Excersice 1 

*******************************************************************************/
// Problem 1 
//C++ Program to find the area of the circle using function
#include<iostream>
using namespace std;
float area(float);
float circumference(float);

int main()
{
    int diameter;   
    cout<<"\n Enter Diameter of the Circle: ";
    cin>>diameter;
    cout<<"\n Area of the Circle : "<<area(diameter);
    cout<<"\n Circumference of the Circle : "<<circumference(diameter);
}
float area(float diameter)
{
    return (3.14 * (diameter/2) * (diameter/2)  );
}
float circumference(float diameter)
{
    return(3.14 * diameter;
}