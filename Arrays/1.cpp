//to check missing number in given sorted continious array
//we first find the sum of given array 
//we find sum of n natural elements using formula n*(n+1)/2
//find missing no by subtracting sum of natural no and sum of given array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum = 0, sum_of_natural = 0;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)//finding sum of array
    {
        sum = sum + arr[i];
    }
    sum_of_natural = ((arr[n - 1] * (arr[n - 1] + 1)) / 2);//finding sum of natuaral no using last element of array
    int missing_no = sum_of_natural - sum;//getting the missing no
    cout << "the missing no is: " << missing_no << endl;
}