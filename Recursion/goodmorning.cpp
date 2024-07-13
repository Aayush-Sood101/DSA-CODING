#include<iostream>
using namespace std;
void greet(int n)
{
    if(n==0)
    return;
    cout<<"Good Morning"<<endl;
    greet(n-1);
}
int main()
{
    int n;
    cout<<"Enter no of times greeting is to be printed : ";
    cin>>n;
    greet(n);
}