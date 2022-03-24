//write a programme to swap two numbers.

#include<iostream>
using namespace std;
int add( int a,int b)
  {
  	  return (a+b);
  }
int subtract(int a, int b)
  {
  	  return (a-b);
  }
 
  
  int main()
     {
     	 int a,b;
     	
     	
     	 cout<<" enter the first value ";
     	  cin>>a;
     	 cout<<" enter the second value" ;
     	  cin>>b;
     	 cout<<"\nbefore swapping a and b " << a << " and " << b << endl;
     	 a=add(a,b);
     	 cout<<" sum is " << a << endl;
     	 b=subtract(a,b);
     	 cout << " subtraction is " << b << endl;
     	 a=subtract(a,b);
     	 cout<<" \nafter swapping a and b " << a << " and " << b << endl;
     	 return 0;
     	 
     	 
	 }
