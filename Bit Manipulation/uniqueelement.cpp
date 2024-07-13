#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2,5,4,8,4,5,8,2,7,432,7};
    int n=11;
    int res = 0;
    for(int i=0;i<n;i++)
    {
        res = res ^ arr[i];
    }
    cout<<res;
}