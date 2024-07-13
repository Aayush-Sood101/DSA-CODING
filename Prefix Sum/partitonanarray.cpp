/*partition an array into two continuous arrays
such that sum of the two halves are equal*/
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,5,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++)
    {
        arr[i] = arr[i] + arr[i-1];
    }
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        if(arr[n-1]/2.0==arr[i])
        {
        flag = true;break;
        }
    }
    cout<<flag;
}