//to find repeating of element and no of times it is repeating

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
    int j = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            j = i + 1;
            while (arr[j] == arr[i])
            {
                j++;
            }
            cout << arr[i] << " is appearing " << j - i << " times" << endl;
            i = j - 1;
        }
    }
}