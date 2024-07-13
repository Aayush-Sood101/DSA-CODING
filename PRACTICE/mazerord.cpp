#include<iostream>
using namespace std;
void mazepath(int m,int n,string s)
{
    if(m==1 && n==1)
    {
        cout<<s<<endl;
        return;
    }
    if(m==0 || n==0)
    return;
    mazepath(m,n-1,s+'R');
    mazepath(m-1,n,s+'D');
}
int main()
{
    mazepath(23,12,"");
}