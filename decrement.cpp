#include<iostream>
using namespace std;
int main()
{ 
  int a=15;
  int b;
   b=a--;
   cout <<"value of b" << b<<endl;
   b=a;
   //cout<<"a  " ;
   cout<< "value of a after decrement is " <<  a<<endl;
   b=a--;
   cout<< "the value of b " << b <<  "value of a " << a << endl;
   b=--a;
   cout<< "value of b " <<b  << "value of a " << a;
   return 0;
   }   
