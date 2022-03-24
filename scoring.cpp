#include <iostream> 
using namespace std; 
int main()
   { 
     int marks, total; 

     for( int i=0; i<10; i++ ) 
	 
	 { 
        cout << "Enter subject " << i << " marks : "; 
        cin >> marks; 
        total += marks; 
    } 
 
    cout << "Average marks : " << (total / 10.0) << endl; 
} 
