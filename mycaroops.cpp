#include<iostream>
#include<string>
using namespace std;
class car
  		{
  			public: string CarName;
  			public: string model;
  			public: float topspeed;
  			
  	void Buildcar()
  					{
  						cout<<" enter name " <<endl;
  						cin>>CarName;
  						cout << " enter model" << endl;
  						cin>> model;
  						cout<<"enter speed "<< endl;
  						cin>>topspeed;						
					}
	void showcar()
	                {
	                	cout<< " name of the car is :" << CarName <<endl;
	                	cout << " model is :" << model << endl;
	                	cout << " speed of the car is :"<< topspeed << endl;
					}				
	    };
int main()
         {
         	 car myowncar;
         	 myowncar.Buildcar();
         	 myowncar.showcar();
         	 return 0;
		 }						
