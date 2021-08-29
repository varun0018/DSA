//tail recursion is one in which a recursive call is the last statement of the fucntion

#include <bits/stdc++.h>
using namespace std;

void fun(int n)
{
    if (n > 0)
    {
        cout << n << ' ';
        fun(n - 1); //this is tail recursion as recursive call is last statement
    }
}
int main()
{
    int x = 4;
    fun(x);
}