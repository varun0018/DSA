//move all x to end of string

#include <bits/stdc++.h>
using namespace std;

string move(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    if (s[0] == 'x')
    {
        return move(s.substr(1)) + x;
    }
    else
    {
        return move(s.substr(1));
    }
}

int main()
{
}