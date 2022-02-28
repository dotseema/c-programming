//find sum of positive number
//whenever user enter negative number break the loop;
 #include<iostream>
 using namespace std;
 int main()
    {
    	 int num;
    	 int sum=0;
    	 while(true)
    	     {
    	     	//take input from the user
    	     	cout<<"enter the number";
    	     	cin>>num;
    	     	// break condition if number is negative
    	     	
    	     	  if(num<0)
    	     	  { 
    	     	     break;
				   }
				   //add all positive number
				   sum+=num;
			 }
		// display the sum
		cout<<"sum is:" << sum <<endl;
		return 0;
	}
