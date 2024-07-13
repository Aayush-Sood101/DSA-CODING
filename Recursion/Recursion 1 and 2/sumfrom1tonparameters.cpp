#include<iostream>
using namespace std;
void sum(int s,int n)
{
    //base case
    if(n==0)
    {
        // printing 
        cout<<s;
        return;
    }
    //recursive call 
    sum(s+n,n-1);
}
int main()
{
    cout<<"Enter the value of n : ";
    int n;
    cin>>n;
    sum(0,n);
}