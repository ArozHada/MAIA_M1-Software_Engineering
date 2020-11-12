// Problem 2 
//C++ Program to find the max and the min of a table.

#include <iostream>
using namespace std;

int Max(int a[],int n) 
{
	int i, max;
	max = a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max) 
			max =a[i]; 
	}
	return max; 
}

int Min(int a[],int n) 
{
	int i, min;
	min = a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<min)
			min =a[i];
	}
	return min; 
}

int main()
{
	int i, array[50], size, max, min;

	cout<<"Input size of array\n";
	cin>>size;

	cout<<"Enter "<< size << " integers\n";
	for(i=0;i<size;i++)
	cin>>array[i];

	max = Max(array,size); 
	min = Min(array,size); 

	cout<<"Maximum element in the array is:" << max << "\n";
	cout<<"Minimum element in the array is:" << min << "\n";

return 0;
}