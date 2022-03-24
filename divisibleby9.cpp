//write a programme to find sum of all integers between 100to 750 which are divisible by 9.


#include<iostream>
using namespace std;
int main()
{
	int i,sum=0;
	cout<<" enter numbers between 100 to 750 which are divisible by 9"<<endl;
	i=100;
	do
	{
		if(i%9==0)
		{
			cout<<"number divisible by 9 is : "<<i<<endl;
			sum=sum+i;
	}
		i++;
	}
	while(i<750);
	cout<<"the sum of all numbers divisible by 9 is: "<<sum;
}
