#include <bits/stdc++.h>
using namespace std;

void h(int n, int a, int b, int c)
{
    if (n > 0)
    {
        h(n - 1, a, c, b);
        cout << a << ',' << c << '\n';
        h(n - 1, b, a, c);
    }
}

int main()
{
    h(3, 1, 2, 3);
}