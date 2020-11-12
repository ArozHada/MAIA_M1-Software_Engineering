// Problem 3 
//C++ Program to compute the Fibonacci sequence.
#include<bits/stdc++.h> 
using namespace std; 
  
int fib(int n) 
{ 
    int a = 0, b = 1, c, i; 
    if( n == 0) 
        return a; 
    for(i = 2; i <= n; i++) 
    { 
       c = a + b; 
       a = b; 
       b = c; 
    } 
    return b; 
} 
   
int main() 
{ 
    int n;
    cout<<"Input rank of the sequence : ";
	cin>>n;
	cout <<"The fibbonacci number at " << n << " rank is: " << fib(n); 
    return 0; 
}

