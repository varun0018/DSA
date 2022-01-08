#include <bits/stdc++.h>
using namespace std;

void swaper(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubble(int arr[], int n)
{
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        flag = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])//comparing if elements are soreted in ascending order
            {
                swaper(&arr[j], &arr[j + 1]);
                flag = true;
            }
        }
        if (flag == false)//if swaping does not take place even once then all the elements are alredy swapped
        {
            break;//so we break out of loop
        }
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
    bubble(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
}