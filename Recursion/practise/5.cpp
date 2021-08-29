//remove duplicate

#include <bits/stdc++.h>
using namespace std;

string removeDup(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char first = s[0];
    string ros = removeDup(s.substr(1));
    if (first == ros[0])
    {
        return ros;
    }
    else
    {
        return first + ros;
    }
}

int main()
{
    string s = "abbbcccd";
    cout << removeDup(s);
}