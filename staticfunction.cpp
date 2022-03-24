#include<iostream>
using namespace std;
class room
		{
			public:
				//declaring the static data member
				static int objectcount;
			public:
				int tempvariable;
			//constructor definition
			room()
				{
					cout<<" constructor called " << endl;
					objectcount++;
				}
			//declaring yhe staric function
			static int getobjectcount()
				{
					cout<<" calling the static function " <<endl;
					return objectcount;
				}
		};
	//initialize static member of class room
	int room::objectcount=0;
	int main(void)
			{
				room room1;
				room room2;
				cout<<" total objects are " << room::getobjectcount()<<endl;
				return 0;
			}
