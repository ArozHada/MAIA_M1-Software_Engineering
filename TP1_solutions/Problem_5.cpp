// Problem 5 
//C++ Program to compute the truth table of the AND & OR operators using 3 variable as input.
#include<iostream>

int main()
{
	
	std::cout<<"Truth Table for AND operator\n";
	truth_table_AND();
	std::cout<<"Truth Table for OR operator\n";
	truth_table_OR();
	
	return 0;
}

void truth_table_OR()
{
	int i,j,k;
	
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			for(k=0;k<=1;k++)
			{
				std::cout << '\t' << i << ' ' << j << ' ' << k << " --> "<< (i||j||k) << '\n';
			}
		}
	}
	return;
}


void truth_table_AND()
{
	int i,j,k;
	
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			for(k=0;k<=1;k++)
			{
				std::cout << '\t' << i << ' ' << j<< ' ' << k <<" --> " << (i&&j&&k) << '\n';
			}
		}
	}
	return;
}


