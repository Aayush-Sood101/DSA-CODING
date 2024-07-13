#include<iostream>
using namespace std;
int sum(int n)
{
    //base case
    if(n==1)
    return 1;
    //recursive call + code
    return n+sum(n-1);

}
int main()
{
    cout<<"Enter the value of n : ";
    int n;
    cin>>n;
    cout<<sum(n);
}