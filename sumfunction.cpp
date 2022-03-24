//programme to add 2 numbers using function.

#include<iostream>
using namespace std;
int add ( int a,int b)
   {
   	  int c=a+b;
   	  return c; //if we write return c or not it will give us same output.
   }
int main()
   {
   	  int sum;
   	  //add=35+15;
   	   //callimg the function and storing the values
   	   // the returned value is sum
   	    sum = add(45,32);
   	    cout<<" 45+32 = " <<sum <<endl;
   	     sum = add(245,132);
   	    cout<<" 245+132 = " <<sum <<endl;
   	     sum = add(945,632);
   	    cout<<" 945+632 = " <<sum <<endl;
   	    return 0;
   }
