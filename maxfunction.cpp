#include <iostream>
 
using namespace std;
 
double MAX(double a, double b);
 
int main()
{
	double a, b;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	cout << "The greater number is: " << MAX(a, b) << endl;

	return 0;
}
 
double MAX(double a, double b)
{
	if (a > b) return a;
	else return b;
}
