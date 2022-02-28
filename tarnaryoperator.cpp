#include<iostream>
#include<string>
 using namespace std;
 int main()
 {
 	  int number;
 	  string result, result1;
 	  cout<<"enter the number";
 	  cin>>number;
 	  result1=(number>0) ?"positive number ":"negative number" ;
 	 
 	  result=(number==0)?"zero":(number>0)?"positive number" : "negative number " ;
 	  
 	  cout<< result1 << result <<endl;
 	  return 0;
 }
