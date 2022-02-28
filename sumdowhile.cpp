//write a programme to print sum of number 1 to 10 using do while loop
#include<iostream>
 using namespace std;
 int main()
    {
    	  int number=1 ;
    	  int sum=0 ;
    	  do
		   {
		   	cout<<" sum is : "<< sum <<" number is : " << number  <<endl;
		   	sum=sum+number;
		   	number++;
		   }
		   while(number<=10);
		   cout<<"the sum of all number is "<< sum << endl;
		   return 0;
	}
