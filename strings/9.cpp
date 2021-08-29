//check if two strings are palindrome or not

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = s1.length(); i >= 0; i--)
    {
        s2[i] = s1[i];
    
    }
    for (int i = s1.length(); i >= 0; i--)
    {
       if(s1[i]!=s2[i])
       {
    break;
       }
    }
if(s1[i]==s2[i])
{
    cout<<"palindrome";
}
else {
    cout<<"not a palindrome";
}
}