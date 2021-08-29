//liner search is a basic searching algo which traverses through each element and checks if
//the element is equal to the key
//time complexity is O(n)
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
    int key;
    cin >> key;
    for (int i = 0; i < n; i++) //looop to traverse through the list
    {
        if (arr[i] == key) //condition to check if key is equal to array element at that index
        {
            cout << "element found at location: " << i << " and element is: " << arr[i] << endl;
            break; //if element is found then break out of the loop
        }
    }
}