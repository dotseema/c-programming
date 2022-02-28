#include<iostream>
 using namespace std;
int main()
 {
 	int a,b;
 	a=7;
 	b=9;
 	bool result;
 	result= (a==b);  //false
 	cout<<"7==9 is( 7 is equal to 9) result is " << result <<endl;
 	result =(a!=b);  //true
    cout<< "7!=9 is(7 is not equal to 9) result is "<< result << endl;
	result=(a>=b);  //false
	cout<< "7>= 9 is (7 is greater than or equal to 9) result is "<< result << endl;
	result=(a<=b) ; // true
	cout<<"7<=9 is (7 is less than or equal to 9) result is "<< result << endl;
	result=(a>b);  //false
	cout<< "7>9 is (7 is greater than 9) result is "<< result << endl;
	result=(a<b) ; // true
	cout<<"7<9 is (7 is less than 9) result is "<< result << endl;
	return 0;	 
 }
