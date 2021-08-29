//check if all the elements in array are sorted in ascending order

#include <bits/stdc++.h>
using namespace std;

bool checksort(int arr[], int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    else if (arr[n - 1] < arr[n - 2])
    {
        return false;
    }
    return checksort(arr, n - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 5, 4};
    cout << checksort(arr, 5);
}