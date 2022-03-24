#include<iostream>
using namespace std;
//declaring the class
class wall
		{
			public:
			double length;
			public:
		// default constructor to initiate variable
			wall()
				{
					cout<<" creating a wall " << endl;
					length=5.5;					
				}
			void display()
				{
					cout<<" calling display function " << endl;
					cout<<" length : " << length << endl;
				}
			//destructor
			~wall()
				{
					cout<<" destroy the wall " << endl;
				}
		};
	int main()
			{
				wall wall1;
				cout<<" length set from constructor is :: " << wall1.length << endl;
				wall1.display();
				cout<<" executing return statement "<< endl;
				return 0;
			}
