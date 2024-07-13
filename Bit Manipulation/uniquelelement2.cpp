#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,4,2,1};
    int n = 8;
    int res = 0;
    //XOR OF ALL ELEMENTS
    for(int i=0;i<n;i++)
    {
        res = res ^ arr[i];
    }
    //FINDING INDEX OF SET BIT
    int temp = res;
    int k = 0;
    while(true)
    {
        if(temp & 1 == 1)
        {
            break;
        }
        temp = temp >> 1;
        k++;
    }
    //NEXT OPERATION
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        if((arr[i]>>k) & 1 == 1)
        ans = ans ^ arr[i];
    }
    cout<<ans<<endl;
    cout<<(res ^ ans);
}