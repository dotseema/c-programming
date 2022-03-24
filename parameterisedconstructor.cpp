#include<iostream>
using namespace std;
class Wall
			{
				public:
				double length;
				double height;
				public:
						// parameterised constructor to initialise variables
						
				Wall(double len, double hgt)
							{
								length=len;
								height=hgt;										
							}
									
				double calculateArea()
								{
									return length*height;
								}
											
			};
			
			
	int main()
				{
					Wall Wall1(10.5,5.6);
					Wall Wall2(11.5,6.7);
					
					cout<< "length of Wall1 is = "<< Wall1.length<<endl;
					cout<< "height of Wall1 is = "<< Wall1.height<<endl;
					
					cout<< "length of Wall2 is = "<< Wall2.length<<endl;
					cout<< "height of Wall2 is = "<< Wall2.height<<endl;
					
					cout<< " area of Wall1 is = " << Wall1.calculateArea()<< endl;
					cout<< " area of Wall2 is = " << Wall2.calculateArea()<< endl;
					
					return 0;		
				}
