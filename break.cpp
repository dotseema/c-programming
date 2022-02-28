#include<iostream>
using namespace std;
int main()
   {
   	   for (int i=0; i<5; i++)
   	   for(int j=0; j<5; j++)
   	      {
   	          if(i==3&&j==4 || i==2&&j==3)
				   {
				   	   break;
				   }
			cout<<i <<" " <<j <<"\n" ;
				  
		  }
    return 0;
   }
