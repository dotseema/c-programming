// function prototype
#include<iostream>
using namespace std;

int add(int,int);

int main()
   {
   	   int sum;
   	   sum=add(4,5);
   	   cout<< " sum is " << sum;
   	   return 0;
   	
   }
   
   int add(int x,int y)
   {
   	   return(x+y);
   }
