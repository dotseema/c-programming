// programe for devaukt value displaying with four cases
#include<iostream>
using namespace std;
// function prototype
void display( int=10, float=15.50);
int main()
    {
    	 //case-1
    	 cout<<" call without argument "<< endl;
    	 display();
    	 cout<<" ############# "<< endl;
    	 //case-2
    	 cout<<" call with one argument " << endl;
    	 display(100);
    	 cout<<"============= " << endl;
    	 //case-3
         cout<<" call with both the argument" << endl;
         display(14, 17.70);
         cout<<" ============= " << endl;
         //case-4
         cout<<" call with one argument which will be passed to the first argument " << endl;
         display(19.90);
         cout<<"============= " << endl;
         return 0;
	}
	void display(int x, float y)
	{
		cout<<" x is "<< x << endl;
		cout<<" y is "<< y << endl;
	}
