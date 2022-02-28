// print average of any 5 integers using loop
#include<iostream>
using namespace std;
int main()
{
    int count, sum = 0;
    int n;
    cout<<"enter numbers";
    cin>>n;
    for(count=1; count <= n; count++)
    {
        sum = sum + count;
    }
    cout<<"sun is : "<<sum <<endl;
    return 0;
}
