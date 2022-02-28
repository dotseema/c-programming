#include<iostream>
using namespace std;
int main()
  { 
     int number;
     cout<<"enter the number to find sub of ";
     cin>>number;
     int sub;
     for(int counter=1; counter<=number; counter--)
      { 
         cout<<"subtraction is: " << sub << "number is: " <<number <<endl;
         sub=sub-counter;
	  }
	  cout<<"subtraction is " << sub <<endl;
	  return 0;



   }
