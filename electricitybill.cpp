#include <iostream>
using namespace std;
int main()

{
	  int unit;
	  int total_bill;
	  cout<<"enter total units consumed by customer";
	  cin>>unit;
	    if(unit<=75)
	     {
	   	   total_bill = 75*1;
	     }
	    else if(unit<=150)
	      {
	      	 total_bill = 75*1 + (unit-75)*2;
		  }
	    else if( unit<=250)
	       {
	       	   total_bill = 75*1 + 75*2 + (unit-150)*3;
		   }
		else if(unit>250)
		   {
		   	  total_bill = 75*1 +75*2 + 100*3 + (unit-250)*4;
		   	  
		   }
		   
		cout<<"total electricity bill is "<< total_bill <<endl;
	return 0;
}
