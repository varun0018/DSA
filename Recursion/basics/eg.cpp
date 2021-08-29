#include <bits/stdc++.h>
using namespace std;

void fun(int x)
{
    if (x > 0)//base condition
    {
        cout << x << ' ';//printing x

        fun(x - 1);//recursive function
    }
}

int main()
{
    int x = 3;
    fun(x);
}
