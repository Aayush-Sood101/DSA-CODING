/*We need to find longest subarray of
bitwise and */
#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
    int arr[] = {};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i=0,j=0;
    int max = INT_MIN;
    int len = -1;
    while(j<n)
    {
        if(arr[j]>=max)
        {
            max=arr[j];
            while(arr[j+1]==arr[j])
            j++;
            j++;
            i=j;
            int length = j - i;
            if(length>len)
            len=length;
        }
        else
        {
            j++;
            i++;
        }
    }
    cout<<len;
}