//continue statement
#include<iostream>
using namespace std;
int main()
   {
   	   for(int num=0; num<=5; num++)
   	       {
   	       	  if(num%2==0)
   	       	     {
   	       	     	  cout<<"even numbers are : "<< num <<endl;
   	       	     	  continue;
				 }
			   if(num%2!=0)
			      {
			      	   cout<<"odd numbers are : " <<num <<endl;
			      	   continue;
				  }
   	       	  
			}
			
		return 0;
   }
