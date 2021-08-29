//binary search is the best searching technique O(logn)
//binary search can only be used when the elements are sorted
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
    int low = 0, high = n - 1;//assigning value of low to starting position and end to last position
    int mid = (low + high) / 2;//middle value is low + high divided by 2
    int key;
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (key == arr[mid])//checking if key is equal to middle element
        {
            cout << "element found at " << mid + 1;
        break;//if key is found then break out of the loop
        }
        else if (key > arr[mid])//if key value is greater than middle value then increment low by mid+1
        {
            low = mid + 1;
        }
        else if (key < arr[mid])//if key is less than mid then decrement hig by mid-1
        {//continue this till the element is found
            high = mid - 1;
        }
    }
}