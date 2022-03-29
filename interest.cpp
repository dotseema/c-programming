//Write a C++ Program To Calculate Simple Interest using class
//( Formula to calculate the intrest  is Amount * Rate* Duration ) 
#include<iostream>
#include<string>
using namespace std;
	class interest
		{
			public:
				float amount,rate, duration,interest;
			public:void calinterest()
					{
						cout<<"\n the amount is : "<< amount ;
						cin>>amount;
						cout<<"\n the rate is : "<< rate ;
						cin>>rate;
						cout<<"\n the duration is : "<< duration ;
						cin>>duration;
						interest= amount*rate*duration;
						cout<<"\n total interest is = " << interest << endl;
					}
			
		};
	int main()
			{
				interest money;
				money.calinterest();
				return 0;
			}
