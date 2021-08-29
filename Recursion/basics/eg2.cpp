#include <bits/stdc++.h>
using namespace std;

void fun(int x)
{
    if (x > 0)
    {
        fun(x - 1);//here recursive function is called first
        cout << x << ' ';//then the value is printed
    }
}

int main()
{
    int x = 3;
    fun(x);
}