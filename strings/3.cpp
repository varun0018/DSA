//total no of vawel and consonents

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int vcount=0,ccount=0;//vcount=count for vowels
    //ccount=count for consonents
    char s[20];
    gets(s);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')//condition to check if its vowel
    {
        vcount++;
    }
    
    else if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=120))
    {
        ccount++;
            }
    }
cout<<"no of vowels are: "<<vcount<<endl;
cout<<"no of consonents are: "<<ccount<<endl;
}