//reverse a string

#include <bits/stdc++.h>
using namespace std;

void rev(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    string ros = s.substr(1);//leaves things before 1 index of strinf ie 0
    rev(ros);
    cout << s[0];
}

int main()
{
    string s = "binod";
    rev(s);
}