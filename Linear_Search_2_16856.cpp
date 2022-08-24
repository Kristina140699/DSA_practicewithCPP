#include <iostream>
using namespace std;

int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int main(void)
{
    int a[10], key;
    int n = sizeof(a) / sizeof(a[0]);


    for(int i=0; i<n; i++) //to pollute the values in array.
    {
        cin >> a[i]; 
    }

    cin>>key; //enter the search key

    int loc = search(a, n, key);
    (loc == -1)
        ? cout << "ELEMENT NOT FOUND"
        : cout << loc + 1;
    return 0;
}
