//declare the pre  fix and postfix
#include<iostream>
#include<string>
using namespace std;
class count 
		{
			private:
				int value;
				public:
			// constructor to initialize count to 10
			count()
				{
					value=10;
				}
			//overload ++ when  used as prefix
			void operator ++ ()
				{
					cout<<"\n calling prefix function " << endl;
					++value;
				}
			// overload ++ when used as postfix
			void operator ++(int)
				{
					cout<<"\n calling the postfix function " << endl;
					value++;					
				}
				void display()
					{
						cout<<"\n count : "<< value <<endl;
					}
		};
int main ()
		{
			count count1;
			// call the void operator for prefix
			++count1;
			count1.display();
			// call the void operator for postfix
			count count2;
			count2++;
			count2.display();
			return 0;
		}
