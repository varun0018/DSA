//lower case to upper case just sub 32

#include<bits/stdc++.h>
using namespace std;
int main()
{
  char s[10]="welcome";
  int i=0;
  for(i=0;s[i]!='\0';i++)
  {
      s[i]=s[i]-32;//if we sub 32 from lowercase we get upper case
  cout<<s[i];
  }

}

//Upper case to lower case just add 32

#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[10]="HELLO";
    int i=0;
    for(i=0;c[i]!='\0';i++)
    {
        c[i]=c[i]+32;//if we add 32 to upper case we get lower case
        cout<<c[i];
    }
}