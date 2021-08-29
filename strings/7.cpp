//reverse a string

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for (int i = s.length(); i >= 0;i--)//loop from end of the string to the begining of the string
    {
        cout << s[i];
    }
}