#include<iostream>
 using namespace std;
  int main()
   {
   	 int number;
   	 cout<<"enter the number";
   	 cin>>number;
   	  if (number!=0)
   	     {
   	     	  if(number>0)
   	     	    { 
   	     	        cout<<"entered number is positive " << number << endl;
					}
			   else
			    {
			    	 cout<<"entered number is negative " << number <<endl;
			    }
		 }
	  else
	     {
	     	 cout<<"entered number is zero which is neither positive nor negative" << endl ;
	     	 
		 }
		  cout<<"this line always printed" << endl;
	   return 0;
	  
   }
