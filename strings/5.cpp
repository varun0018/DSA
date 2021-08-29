//to check no of words in a string

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     char s[10];
//     gets(s);
//     int i=0,nwords=0;
//     for(int i=0;s[i]!='\0';i++)
//     {
//         if(s[i]==' ')//if there is a white space then increment nwords count
//         {
//             nwords++;
//         }
//     }
// cout<<"no of words are: "<<nwords+1;
// }

//for more than one white space in a string

#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10];
    gets(s);
    int i=0,count=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=' '&&s[i-1]!=' ')//if there are more than one white space between words
        //we have to check if there is no space before the word increment count
        {
            count++;
        }
    }
cout<<"no of words are: "<<count;
}