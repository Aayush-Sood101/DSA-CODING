/*Observations
1. All odd 0 originate from a 0
2. All even 0 originate from a 1
3. All odd 1 originate from a 1
4. All even 1 originate from a 0
*/
#include<iostream>
using namespace std;
int helper(int n , int k)
{
    if(n==1)
    return 0;
    if(k%2!=0)
    {
        return helper(n-1,k/2+1);
    }
    else
    {
        return helper(n-1,k/2)==0 ? 1 : 0;
    }
}
int main()
{
    int n=4,k=4;
    cout<<"Value "<<helper(n,k);
}