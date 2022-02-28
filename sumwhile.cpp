//write a programme to print sum  of 1 to 10 numbers using while loop
#include<iostream>
using namespace std;
 int main()
   {
   	   int sum, n;
   	   int number;
   	   cout<<"enter the integer value";
   	   cin>>n;
   	   while(number<=n)
   	     {
   	     	  cout<<" number is : " << number <<"sum is : " << sum << endl;
   	     	  sum=sum+number;
   	     	  number++;
			}
		cout<<"the sum of all the number is : " << sum << endl;
		return 0;
   }
