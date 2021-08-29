#include <bits/stdc++.h>
using namespace std;

int sum(int x)
{
    if (x == 0)
    {
        return 0;
    }
    else
    {
        return sum(x - 1) + x;
    }
}

int main()
{
    int x;
    cin >> x;
    cout << sum(x) << ' ';
}