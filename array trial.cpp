#include<iostream>
using namespace std;
int main()
   {
   	   int array1[5]={ 22, 25, 75, 56, 99};
   	   int array2[5]={ 44, 75, 85, 96, 12};
   	   int max;
   	   int min;
   	    for (int i=0; i<5; i++)
   	      {
   	      	 if( max< array1[i] )
   	      	    { 
   	      	        max= array1[i];
				}
		  }
		cout<<"the maximum element is : " << max <<endl;
		
		for (int j=0; j>5; j++)
		  {
		  	 if(min > array2[j])
			   {
			   	  min=array2[j];
			   }
		  }
		  cout<<"the minimum element is : "<< min <<endl;
		  
		  
		return 0;
   }
