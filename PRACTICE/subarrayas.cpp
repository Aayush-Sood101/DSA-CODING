#include<iostream>
#include<vector>
using namespace std;
int numOfSubarrays(vector<int> arr, int k, int threshold)
    {
        int n = arr.size();
        int sum=0;
        int count = 0;
        for(int i=0;i<k;i++)
        sum+=arr[i];
        int avg = sum/k;
        if(avg>=threshold)
        count++;
        int i=1;
        int j=k;
        while(j<n)
        {
            sum+=(arr[j]-arr[i-1]);
            avg = sum/k;
            if(avg>=threshold)
            {
            count++;
            }
            j++;
        }
        return count;
    }
int main()
{
    cout<<numOfSubarrays({11,13,17,23,29,31,7,5,2,3},3,5);
}