// Problem 4 
//C++ Program to display in the terminal any multiplication table
#include <iostream> 
using namespace std; 
  
void multi_table(int n, int i) 
{ 
    if (i > 10) 
        return;
    
    cout << n << " * " << i << " = " << n * i << endl; 
  
    return multi_table(n, i + 1); 
} 
  
 
int main() 
{ 
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    multi_table(n, 1); 
    return 0; 
}
