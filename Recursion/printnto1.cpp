#include<iostream>
using namespace std;
void print(int n)
{
    // base case
    if(n==0)
    return;
    //code
    cout<<n<<endl;
    //recursive call
    print(n-1);
}
int main()
{
    cout<<"Enter a number ";
    int n;
    cin>>n;
    print(n);
}