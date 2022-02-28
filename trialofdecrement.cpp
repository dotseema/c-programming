#include<iostream>
using namespace std;
int main()
{
	int a=46;
	int b;
	b=a++;
	cout<<"value of b " << b << endl;
	b=a;
	cout<<"value of b is equal to value of a " << a << endl;
	cout<<"value of a after increment " << a << endl;
	b=a--;
	cout<<" value of b "<< b <<"value of a "<< a << endl; 
	b=++a;
	cout<<"value of b " << b <<"value of a "<< a << endl;
     	return 0;
}
