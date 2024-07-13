
#include<iostream>
using namespace std;
void printpath(int i , int j ,int m ,  int n , string s)
{
    // base calls
    if(i==m && j==n)
    {
        cout<<s<<endl;
        s="";
    }
    else if(i>m || j>n)
    return;
    //recursive call
    printpath(i,j+1,m,n,s+'R');
    printpath(i+1,j,m,n,s+'D');
}
using namespace std;
int main()
{
    cout<<"Enter no . of rows and columns : ";
    int m,n;
    cin>>m>>n;
    string s="";
    printpath(0,0,m-1,n-1,s);
}