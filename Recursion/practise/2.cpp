//first occurance

#include <bits/stdc++.h>
using namespace std;

int occ1(int arr[], int n, int i, int key) //first occurance
{

    if (i == n)
    {
        return -1;
    }
    if (arr[i] == key)
    {
        return i;
    }

    return occ1(arr, n, i + 1, key);
}

int occ2(int arr[], int n, int i, int key)//last occurance
{
    int restarray = occ2(arr, n, i + 1, key);
    if (restarray != -1)
    {
        return restarray;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return -1;
}

int main()
{
    int arr[] = {4, 1, 2, 5, 2, 7};
    cout << occ1(arr, 6, 0, 2);
}