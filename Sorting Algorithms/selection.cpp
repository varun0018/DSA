#include <bits/stdc++.h>
using namespace std;

void swaper(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selection(int arr[], int n)
{
    int j, k;
    for (int i = 0; i < n - 1; i++) //looop to scan through elements
    {
        for (j = k = i; i < n; j++)
        {
            if (arr[j] < arr[k])
            {
                k = j;
            }
        }
        swaper(&arr[i], &arr[k]);
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
    selection(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
}