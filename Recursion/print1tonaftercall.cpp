#include<iostream>
using namespace std;
void print(int n)
{
    // base case
    if(n==0)
    return;
    //recursive call
    print(n-1);
    //code
    cout<<n<<endl;
}
int main()
{
    cout<<"Enter a number ";
    int n;
    cin>>n;
    print(n);
}