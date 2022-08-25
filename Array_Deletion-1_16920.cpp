#include <iostream>
using namespace std;

int main()
{
    int n, index = -1;
    cin >> n; //to enter the limit of the array.

    int a[n], i, key;

    for(i=0; i<n; i++) 
    {
        cin >> a[i]; 
       /* if(a[i]==a[i+1]){
        cout<<"Input are to be non-duplicate.";
    }*/
    }
    
    
    
    cin >> key; //to ask for the value, which is to be deleted.

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            index = i;
            break;
        }
    }

    if(index != -1)
    {
        for(i = index; i < n - 1; i++)
            a[i] = a[i+1];

         for(i=0; i<n-1; i++) //The elements of the array, after deletion
    {
        cout << a[i]<<' '; 
    }
    }
    else
             for(i=0; i<n; i++) //The elements of the array, after deletion
    {
        cout << a[i]<<' '; 
    }
     
    return 0;
}
