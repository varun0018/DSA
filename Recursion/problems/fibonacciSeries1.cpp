//using concept of memoization to reduce time and space complexity

#include <bits/stdc++.h>
using namespace std;

int arr[20];

int fib(int n)
{
    if (n <= 1)
    {
        arr[n] = n;
    return n;
    }
    else
    {
        if (arr[n - 2] == -1)
        {
            arr[n - 2] = fib(n - 2);
        }
        if (arr[n - 1] == -1)
        {
            arr[n - 1] = fib(n - 1);
        }
    }
    return fib(n - 2) + fib(n - 1);
}
int main()
{

    for (int i = 0; i < 20; i++)
    {
        arr[i] = -1;
    }
    cout << fib(5);
}