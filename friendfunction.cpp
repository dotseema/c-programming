#include<iostream>
#include<string>
using namespace std;
	class Distance
		{
			private:
				int meter;
				friend int AddDistance(Distance);
				
		};
	int AddDistance(Distance d)
		{ 
			d.meter=d.meter+1;
			return d.meter;	
		}	
	int main()
		{
			Distance D;
			cout<<"\n Distance is : " << AddDistance(D) ;
			return 0;
		}
