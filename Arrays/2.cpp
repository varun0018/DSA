//finding missing elements in a array using index method
//here we use index to find the missing element
//the differnce of element and index should be constant to all the 
//elements in array as they are sorted if they are not constant then
//we get the first missing element at that location

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int diff=arr[0]-0;//this diff should be constant throught the array
    //if not then we get the first missing element in the array
    for (int i = 0; i < n; i++)
    {
        if(arr[i]-i!=diff)
        {
            cout<<"missing element is: "<<i+diff;
        break;
        }
    }
    
}

//eg
//11 12 14 15 15
//missing element is 13