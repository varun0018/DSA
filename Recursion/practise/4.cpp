//replace string pi with 3.14

#include <bits/stdc++.h>
using namespace std;

void rep(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    else if (s[0] == 'p' && s[1] == 'i')
    {
        cout << "3.14";
        rep(s.substr(2));
    }
    else
    {
        cout << s[0];
        rep(s.substr(1));
    }
}

int main()
{
    string s = "pippppiiiipi";
    rep(s);
}