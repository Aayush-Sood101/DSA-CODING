/*Either one or two steps allowed at one time
return the combinations*/
#include<iostream>
using namespace std;
int noofways(int n)
{
    //base call
    if(n==2)
    return 2;
    if(n==1)
    return 1;
    //recursive call
    return noofways(n-1) + noofways(n-2);
}
int main()
{
    cout<<"Enter the no. of stairs ";
    int n;
    cin>>n;
    cout<<"Number of permutations are : "<<noofways(n);
}