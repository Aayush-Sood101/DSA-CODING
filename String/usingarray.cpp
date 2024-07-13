#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    cout<<"Enter a string : ";
    string s;
    cin>>s;
    vector<int> arr(26,0);
    for(int i=0;i<s.length();i++)
    {
        int idx=((int)s[i]-97);
        arr[idx]+=1;
    }
    int max=0;
    for(int i=0;i<26;i++)
    {
        if(max<arr[i])
        max=arr[i];
    }
    for(int i=0;i<26;i++)
    {
        if(arr[i]==max)
        cout<<(char)(i+97)<<" "<<max<<endl;
    }
}