#include<iostream>
#include<vector>
using namespace std;
void rotation(vector<int> &v,int a,int b)
{
    for(int i=a,j=b;i<j;i++,j--)
    {
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
}
void rotate(vector<int> &v,int k)
{
    int a=0;
    int b=v.size()-1-k;
    int c=v.size()-k;
    int d=v.size()-1;
    rotation(v,a,b);
    rotation(v,c,d);
    rotation(v,a,d);
}
void display(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    int size;
    cout<<"Enter no. of elements in array : ";
    cin>>size;
    vector<int> v(size);
    cout<<"Enter array elements : ";
    for(int i=0;i<v.size();i++)
    cin>>v[i];
    cout<<"Enter no. of rotations : ";
    int k;
    cin>>k;
    if(k>v.size())
    k=k%v.size();
    rotate(v,k);
    display(v);
}