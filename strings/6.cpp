//validate the string no special characters are allowed


#include<bits/stdc++.h>
using namespace std;
int checkValid(char s[])
{
 int i=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(!(s[i]>=65&&s[i]<=90)
        && !(s[i]>=97&&s[i]<=122)
        && !(s[i]>48&&s[i]<=57))//range of characters upper,lower and numbers
        {
        return 1;
        }
  
    }
}
int main()
{
    char s[10];
    gets(s);
   
if(checkValid(s))
{
    cout<<"not valid"<<endl;
}
else{
cout<<"valid"<<endl;
}

}