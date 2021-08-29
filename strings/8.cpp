//to check if strings are equal or not

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    string s2;
    cin >> s1 >> s2;
    int i = 0, j = 0;
    for (int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)//check if s1 is equal to s2
    {
        if (s1[i] != s2[i])//if s1 and s2 are not equal then break
        {
            break;
        }
    }
    if (s1[i] == s2[i])//if they are equal then print equal
    {
        cout << "strings are same" << endl;
    }
    else if (s1[i] < s2[j])
    {
        cout << "first string is smaller" << endl;
    }
    else
    {
        cout << "first string is larger" << endl;
    }
}