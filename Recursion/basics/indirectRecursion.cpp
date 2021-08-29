#include<bits/stdc++.h>
using namespace std;
int funB(int n);
int funA(int n)
{
    if(n>0)
    {
        cout<<n<<' '; 
        funB(n-1);
    }
}
int funB(int n)
{
    if(n>1)
    {
        cout<<n<<" ";
        funA(n/2);
    }
}




int main()
{
funA(20);
}