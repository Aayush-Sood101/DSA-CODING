#include<iostream>
#include<vector>
using namespace std;
void factorial(long long int n , vector<long long int> &v)
{
    long long int c = 1000000000 + 7;
    for(long long int i = 2;i<=n+1;i++)
    {
        v[i] = ((i % c) * (v[i-1] %c)) %c;
    }
}
int main()
{
    cout<<"Enter the value of n : ";
    long long int n;
    cin>>n;
    vector<long long int> v(n+1,1);
    factorial(n,v);
    for(long long int i=0;i<n+1;i++)
    cout<<i<<"! = "<<v[i]<<endl;
}