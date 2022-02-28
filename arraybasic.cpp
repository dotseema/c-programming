// display and initialize array of an 5 numbers.
//display them

#include<iostream>
using namespace std;
int main()
    {
    	//initialize an array
        int number[6]={7,5,6,12,35,45};
		cout<<"the numbers are : "<< endl ;
		// printing the array elements using traditional for loop 
		for(int i=0;i<6;i++)
		  {
		  	  cout<<"the position of array : "<< i << " " << number[i] << " "  << endl;
		  }   	
		  
	return 0;
	}
