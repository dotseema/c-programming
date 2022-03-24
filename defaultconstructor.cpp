#include<iostream>
using namespace std;
class wall
			{
				public:
				double length;
				public:
					//default constructor to initialise variable
					wall()
						{
							cout<<"creating a wall"<< endl;
							length=5.5;
						}
					void Display()
					        {
					        	cout<< " called display function" << endl;
					        	cout<<" length " << length << endl;					        	
						    }
			};
			
			int main()
					{
							wall wall1;
							cout<< "length set from constructor is " << wall1.length<< endl;
							wall1.Display();
							return 0;
					}
