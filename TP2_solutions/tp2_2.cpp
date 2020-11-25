//Max,min,mode
#include <iostream>
using namespace std;

int main()
{
  int arr[10];
   cout<<"Enter 10 integer values\n";
  for(int i=0;i<10;i++) {
     cout<<"value "<<i<<":";cin>>arr[i]; 
    } 
 
//find the max value 
 int i,max;
 max = arr[0];
 for(i=0;i<10;i++)
     if(max<arr[i]) {
          max=arr[i];
         }
                 
  cout<<"Max="<<max;
  cout<<"\n";
  
//find the min value 
 int j,min;
 min = arr[0];
 for(j=0;j<10;j++)
     if(min>arr[j]) {
          min=arr[j];
         }
                 
  cout<<"Min="<<min;
  cout<<"\n";

//find mode
int number = arr[0];
int mode = number;
int count = 1;
int countMode = 1;

for (int i=1; i<10; i++)
{
      if (arr[i] == number) 
      { 
         ++count;
      }
      else
      { 
            if (count > countMode) 
            {
                  countMode = count; 
                  mode = number;
            }
           count = 1; 
           number = arr[i];
  }
}
cout << "mode : " << mode << endl; 

}
