#include<iostream>
 using namespace std;
  int main()
   {
   	 //INCREMENT OPERATOR
     int x=21;
     int y;
     y=x++;
     cout<<"value of y " << y << endl;
     y=x;
     cout<< " value of y is equal to value of x " << x  << endl;
     cout<< "value of x after increment " << x << endl;
     y=x++;
     cout<<"value of y " <<y << "value of x " << x << endl;
     y=++x;
     cout<<"value of y " << y << "value of x " << x << endl;
      // DECREMENT OPERATOR
     int c=45;
     int d;
     d=c--;
     cout<<"value of d "  << d << endl;
     d=c;
        cout<<" value of d is equal to value of c " << c << endl;
     	cout<<"value of c after decrement " << c << endl;
     	d=c--;
     	cout<<"value of d " << d <<"value of c " << c << endl;
		d=--c;
		cout<<"value of d " << d <<"value of c " << c << endl;
     return 0;
   }
