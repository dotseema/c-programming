//write a programme to reverse the number.

#include<iostream>
using namespace std;
int main()
   {
   	  int a,remainder,result=0;
   	  cout<<"enter the number";
   	  cin>>a;
   	  while(a!=0)
   	    {
   	    	  remainder=a%10;
   	    	  result=result*10+remainder;
   	    	  a/=10;
		   }
		   
	  cout<<"result is : " << result << endl;
	  return 0;
   }
