// Writw a programme to print the sum of numbers less than 0 and greater than zero using array.
 
 
 #include<iostream>
using namespace std;
int main ()
{
    int arr[10], i, sum = 0;
    
    cout << "\nEnter the elements of the array : ";
    
    cin >> arr[i];
    for (i = 0; i < 10; i++)
    {
        sum += arr[i];
     
    }
    cout << "\nSum of array elements : " << sum;

    return 0;
}
