#include<iostream>
using namespace std;
int main()
{
    int month;
    cout << "Enter month number (1-12):";
    cin >> month;
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
       
        cout << "No. of days 31 days" <<endl;
    }
    else if(month == 2)
    {
       
        cout << "No. of days 28 or 29 days" <<endl;
    }
    else if(month == 4 || month == 6 || month == 9 || month == 11)
    {
       
        cout << "No. of days 30 days" <<endl;
    }
    
  
    else
    {
        cout << "Invalid input! Please enter month number between (1-12).";
    }
    return 0;
}
