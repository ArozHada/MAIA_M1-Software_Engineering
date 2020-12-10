// Exercise 2

#include <iostream>
using namespace std;

class data{
   public:
   int n1,n2;
   data(int num1a,int num2a){
nu1=num1a;nu2=num2a;cout <<"numbers initialized \n";
    }
    int sum_num(){return nu1+nu2;}
};


int main (){

    int num1;
	int num2;
	cout<<"Enter first number : ";
	cin>>num1;
	cout<<"Enter second number : ";
	cin>>num2;


	data set_nu(num1,num2);

	cout << "The addition result on:"<< set_nu.sum_num()<<"\n";

	s
	return 0;
}