//Write a class having two private variables and one member function which will return
//the area of the rectangle.
// Exercise 1

#include <iostream>
using namespace std;

class CRectangle {
   private:
   int x,y;
   int area()
   {return x*y;}

};

int main () {

  CRectangle rect;
  cout<<"Enter length of rectangle:";
  cin>>rect.x;
  cout<<"Enter breadth of rectangle:";
  cin>>rect.y;
  cout <<"Area:"<< rect.area();

  
  return 0;
}

