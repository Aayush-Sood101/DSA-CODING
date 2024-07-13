#include<iostream>
using namespace std;
int power(int a , int b )
{
    //base case
    if(b==0)
    return 1;
    //recusive call+ code
    return a * power(a,b-1);
}
int main()
{
    cout<<"Enter the value of a and b : ";
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);
}