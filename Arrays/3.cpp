//more than one missing element in the array
//using same array element minus index method but this time using for loop to get all the missing element in the array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int diff = arr[0];
    for (int i = 0; i < n; i++)
    {
        while (diff < arr[i] - i)
        {
            cout << "missing element: " << i + diff<<endl;
            diff++;
        }
    }
}