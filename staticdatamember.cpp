#include<iostream>
using namespace std;
class room
		{
			public:
				//declaring the static data member
				static int objectcount;
				int tempvariable;
				
				//constructor definition
			room()
				{
					tempvariable;
					cout<<" object count is "<< objectcount << endl;
					cout<<" constructor called" << endl;
					objectcount++;
				}
				
		};
		//initialize static member of class room
		int room::objectcount=0;
		// datatype of static member class room::(scope resolution operators) data member none=(value)
		int main(void)
				{
					room room1;
					room room2;
					room room3;
					cout<<"total objects : "<< room::objectcount<<endl;
					cout<<" value of temp variablefor room1 "<< room1.tempvariable<<endl;
					return 0;
				}
