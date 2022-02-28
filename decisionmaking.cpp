//we need to print the positive number
//take the input from the user and decide if that number is positive or not
#include<iostream>
using namespace std;
int main()
{
 int numbertocheck;
	  cout<<"please enter the number ";
	   cin>>numbertocheck;
	    if(numbertocheck>0)
	     {
	  	     cout<<"you entered number is positive" << numbertocheck << endl;
	     }
	     cout<<"this code will always execute after the if statement" ;
	     return 0;
}
