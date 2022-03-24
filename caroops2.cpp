#include<iostream>
#include<string>
using namespace std;
class car
  		{
  			public: string CarName, model;
  			public: float topspeed;
  			
  			private: string carnumber;
  public:void showcar()
  					{
  						cout<<" enter name "<<CarName <<endl;
  						cout << " enter model" << model <<endl;  						
						cout<<"enter speed "<< topspeed << endl;
						cout<<"your car number is " << carnumber<<endl;
					}
	
	public:void setcarnumber()
					{
						carnumber="456789";
					}				
	    };
int main()
         {
         	 car myowncar;
         	 myowncar.CarName =" Audi";
         	 myowncar.topspeed = 150 ;
         	 myowncar.model = " A6";
         	 
         	 myowncar.setcarnumber();
         	 myowncar.showcar();
         	 return 0;
		 }			
