#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<' ';//prints the elements of the array
        }
    cout<<endl;
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<&arr[i][j]<<' ';//prints addresses of the array
        }
    cout<<endl;
    }

}