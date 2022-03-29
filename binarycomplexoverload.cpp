#include<iostream>
#include<string>
using namespace std;
class complex
		{
			private:
				float real;
				float imag;
			public:
				// constructor to initialize real and imaginary to 0
			complex():real(0),imag(0) {}
			void input()
				{
					cout<<"\n enter real and imaginary parts respectively ";
					cin>>real;
					cin>>imag;
				}
			//overload the + operator
			complex operator + ( const complex obj )
						{
							complex temp;
							temp.real = real + obj.real;
							temp.imag = imag + obj.imag;
							return temp;
						}
			void output()
				{
					if(imag<0)
						cout<<"\noutput complex number : " <<real << imag << " i " << endl;
					else 
					     cout<<"\n output complex number : " << real <<" + " << imag <<" i "<< endl;					     
				}				
		};
	int main()
			{
				complex complex1, complex2, result;
				cout<<"\n enter first complex number : "<< endl;
				complex1.input();
				cout<<"\n enter second complex number : " << endl;
				complex2.input();
				// complex1 call the operator function
				// complex2 is passed as an argument to the function
				result = complex1 + complex2;
				result.output();
				return 0;
			}
