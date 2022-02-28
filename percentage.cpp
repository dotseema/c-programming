#include<iostream>
using namespace std;
int main()
 {
 	 int hin,mar,eng,maths,his;
int total,percent;

cout<<"Enter marks of hindi";
cin>>hin;
cout<<"enter marks of English";
cin>>eng;
cout<<"enter marks of marathi";
cin>>mar;
cout<<"enter marks of maths";
cin>>maths;
cout<<"enter marks of history";
cin>>his;
total= hin+mar+eng+maths+his;
percent=total/5.0;
if(percent>=75)
{
cout<<"distinction";
}
else if(percent>=60)
{
cout<<"first class";
}
else if(percent>=50)
{
cout<<"second class";
}
else if(percent>=40)
{
cout<<"pass";
}
return 0;
 }
