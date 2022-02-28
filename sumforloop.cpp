#include<iostream>
using namespace std;
int main()
  {
  	 int number;
  	 cout<<"enter the numer to find sum of";
  	 cin>> number;
  	 int sum;
  	 for(int counter=1;counter<=number;counter++)
  	      {
  	      	sum=sum+counter;
			}
		cout<<"addition is" << sum <<endl;
		return 0;
  	 
  }
