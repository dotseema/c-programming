#include<iostream>
using namespace std;
int main()
{
	 int number;
	 cout<<"please enter the  number";
	 cin>>number;
	 int remainder=number%2;
	 
	 if(remainder==0)
	  {
	  	 cout<<"entered number is even number as remainder is " << remainder <<endl;
	  }
	  else
	  { 
	    cout<<"entered number is odd number as remainder is "<< remainder << endl;
	  }
	   
	     return 0;
}

