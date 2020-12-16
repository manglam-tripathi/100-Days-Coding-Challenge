// C++ program to illustrate need of loops 
#include <iostream> 
using namespace std; 

int main() 
{ 
	cout << "Hello World\n"; 
	cout << "Hello World\n"; 
	cout << "Hello World\n"; 
	cout << "Hello World\n"; 
	cout << "Hello World\n"; 
	cout << "Hello World\n"; 
	cout << "Hello World\n"; 
	cout << "Hello World\n"; 
	cout << "Hello World\n"; 
	cout << "Hello World\n"; 
	
	
	
	
	for (int i = 1; i <= 10; i++) 
    { 
        cout << "Hello World\n"; 
    } 
    
    
    // initialization expression 
    int i = 1; 
  
    // test expression 
    while (i < 6) 
    { 
        cout << "Hello World\n"; 
  
        // update expression 
        i++; 
    } 
  
  
  
  
  
    do
    { 
        // loop body 
        cout << "Hello World\n"; 
  
        // update expression 
        i++; 
  
    }  while (i < 1);   // test expression 
	return 0; 
} 

