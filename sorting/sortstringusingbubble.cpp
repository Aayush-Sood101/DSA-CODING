#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string s="";
    cout<<"Enter a string : ";
    cin>>s;
    for(int i=0;i<s.length()-1;i++)
    {
        bool flag=true;
        for(int j=0;j<s.length()-1-i;j++)
        {
            if(s[j]>s[j+1])
            {
                swap(s[j],s[j+1]);
                flag=false;
            }
            
        }
        if(flag==true)
        break;
    }
    cout<<"String sorted : "<<s;
}