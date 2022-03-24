#include<iostream>
using namespace std;
class wall
		{
			public:
				double length;
				double height;
			public:
			wall(double len, double hgt)
				{
					length=len;
					height=hgt;
				}
			//COPY CONSTRUCTOR with a wll object as parameter
			//copies data of the obj parameter
			wall(wall &obj)
						{
							cout<<" \ncalling copy constructor for wall\n" << endl;
							length=obj.length;
							height=obj.height;
						}
		
		};
	int main()
			{
				wall wall1(22.3, 12);
				cout<< "length of wall1 is = " << wall1.length<< endl;
				cout<< "height of wall1 is = " << wall1.height<< endl;
				
				wall wall2(wall1);
				cout<< "length of wall2 is = " << wall2.length<< endl;
				cout<< "height of wall2 is = " << wall2.height<< endl;
				
				return 0;
			}
