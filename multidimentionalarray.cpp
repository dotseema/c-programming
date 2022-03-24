//c++ programme to display all elements of 
//an two dimentional array
#include<iostream>

using namespace std;
int main()
   {
   	  int x[3][3]={{2,-5} ,
		 {4,0}, 
		 {9,1}};
   	  for(int row=0; row<3; row++)
   	     {
   	     	  for(int column=0; column<2; column++)
   	     	     {
   	     	     	cout<<"  x=[" << row << "][" << column << "]=" << x[row][column] ;
				 }
				cout<< " \n";
		 }
			
	return 0;
   }
