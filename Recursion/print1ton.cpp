#include<iostream>
using namespace std;
void print(int i,int n)
{
    //base case
    if(i>n)
    return;
    //code
    cout<<i<<endl;
    //recursive call
    print(i+1,n);

}
int main()
{
    cout<<"Enter a number ";
    int n;
    cin>>n;
    print(1,n);
}