// declair an array for sun & average by using some loop.
#include<iostream>
using namespace std;
int main()
  {
  	  double number[6]={ 1,2,3,4,5,6};
  	  double sum=0;
  	  double average;
      cout << " The numbers are :";
  	  for(int i=0; i<6; i++)
  	    {
  	       cout << number[i] <<" " ;
  	        sum = sum + number[i];  
		}	
		cout <<" their sum is " <<  sum << endl;
		
		 average =  sum / 6;
		cout << "their average is " <<  average << endl;
		
		return 0;
  }
