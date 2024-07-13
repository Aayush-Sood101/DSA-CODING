#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int returnmax(vector<int> &v,int i,int max)
{
    if(i==v.size())
    return max;
    //code
    if(v[i]>max)
    max=v[i];
    //recursive call
    returnmax(v,i+1,max);
}
void displaymax(vector<int> &v,int i,int max)
{
    //base case
    if(i==v.size())
    {
        cout<<"MAX VALUE OF ARRAY : "<<max<<endl;
        return;
    }
    //code
    if(v[i]>max)
    max=v[i];
    //recursive call
    displaymax(v,i+1,max);
}
int main()
{
    cout<<"Enter size of array : ";
    int n;
    cin>>n;
    cout<<"Enter array elements : ";
    vector<int> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    displaymax(v,0,INT_MIN);
    cout<<"Returned value of max : "<<returnmax(v,0,INT_MIN);
}
