//write a programme to orint the multidimentional array
//without initializing the elements of array
#include<iostream>
using namespace std;
int main()
   {
   	   int numbers[3][3];
   	   cout<< "enter the 9 numbers : " << endl ;
   	   for( int row=0; row<3;row++)
   	     { 
   	         for ( int column=0; column<3; column++)
   	           {
   	           	   int x;
   	           	   cin>>x;
   	           	   numbers[row][column]=x;
				  }
		 }
	    cout<<" the numbers are : "<< endl;
	    //printing the array elements
	    for(int row=0; row<3; row++)
	       {
	       	   for(int column=0; column<3; column++)
	       	        {
	       	           cout << numbers[row][column]<<" ";
					}
					cout <<"\n";
		   }
		   
   }
