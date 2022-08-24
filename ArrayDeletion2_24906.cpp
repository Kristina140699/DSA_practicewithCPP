#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n; //to enter the limit of the array.

    int a[n], i, pos;

    for(i=0; i<n; i++) //to pollute the values in array.
    {
        cin >> a[i]; 
    }
    cin >> pos; //to ask for the index number , from where we want to delete the element.
    
    for (i = pos; i <= 9; i++)
    {
        a[i] = a[i + 1];
    }

    for(i=0; i<n-1; i++) //The elements of the array, after deletion
    {
        cout << a[i]; 
    }
             
    return 0;
}
