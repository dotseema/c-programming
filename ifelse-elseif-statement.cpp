// write a programme to determine if the number entered is positive negative or zero.
#include<iostream>
 using namespace std;
  int main()
  {
  	 int number;
  	 cout<<"enter the number";
  	 cin>>number;
  	   if(number>0)
  	    { 
  	       cout<<" entered number is positive " << number << endl ;
		  }
		else if(number<0)
		 {
		 	 cout<<"entered number is negative " << number << endl;
		 }
		 else 
		 { 
		   cout<< "entered number is zero which is  not positive not negative "<< number << endl;
		   
		 }
		 cout<<" i will always executed after if else" ;
		 return 0;
  }
