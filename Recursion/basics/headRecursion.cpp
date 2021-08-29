//head recursion is one where a functin calls itself and if the recurring function
//is the first statement of the function then it is head recursion
#include<bits/stdc++.h>
using namespace std;

void fun(int x)
{
    if(x>0)
    {
        fun(x-1);//head recursion
        cout<<x<<' ';
    }
}

int main(){
    int x=3;
    fun(3);
}