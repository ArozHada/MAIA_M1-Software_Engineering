//Sort
#include <iostream>
using namespace std;

void BubbleSort(inst temp[], int len);

int main()
{
  int arr[10];
   cout<<"Enter 10 integer values\n";
  for(int i=0;i<10;i++) {
     cout<<"value "<<i<<":";cin>>arr[i]; 
    } 
 
  BubbleSort(arr,10);
}

void BubbleSort(int temp[], int len)
{
    for( int i = 9 ; i > 0 ; i--){
        for( int j = 0 ; j < i ; j++ ){
            if(temp[j]>temp[j+1])
            {
                swap(temp[j],temp[j+1]);
            }
        }
    }
    for(int i=0 ; i< len ; i++){
        cout<<temp[i]<<" ";
    }
}