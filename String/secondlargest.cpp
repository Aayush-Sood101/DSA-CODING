#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    int n=stoi(s);
    int max=INT_MIN;int smax=max;
    while(n>0)
    {
        int rem=n%10;
        cout<<rem;
        if(rem>max)
        max=rem;
        else if(smax<rem && smax<max)
        smax=rem;
        n=n/10;
    }
    cout<<"Second maximum digit : "<<smax;
}