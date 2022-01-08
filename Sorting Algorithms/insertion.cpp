#include <bits/stdc++.h>
using namespace std;

void insertion(int arr[], int n)//function to insertion sort
{
    for (int i = 1; i < n; i++)//starts from 1st index
    {
        int j = i - 1;//take j to one index less than i
        int x = arr[i];//store the value of arr[i] in x
        while (j > -1 && arr[j] > x)//while j>-1 and arr[j] is greater than value of x
        {
            arr[j + 1] = arr[j];//move arr[j] to arr[j+1]
            j--;//decrement j
        }
        arr[j + 1] = x;//after this process is complete store x in arr[j+1]
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertion(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
}