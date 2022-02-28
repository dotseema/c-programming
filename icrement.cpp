#include<iostream>
using namespace std;
int main ()
 {
 	//declaired a variable assigned a value
 	int a=10;
 	//declaired another variable
 	 int b;
 	 //increment value
 	  b=a++;
 	   cout<<"value of b  " <<  b  <<  endl;
 	    b=a;
 	     cout<< "a";
 	     //check on display value of a
 	      cout<<"value of a after increament is  "<< a  << endl;
 	      //post increment operator
 	       b=a++; 
 	        cout<<"the value of b"<< b <<"value of a" << a <<endl;
 	        //pre increment operator
 	         b=++a;
 	          cout<<"value of b"<< b <<"value of a" << a ;
 	           return 0;
 }
