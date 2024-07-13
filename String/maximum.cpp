#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<string>
#include<sstream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string : ";
    getline(cin,s);
    stringstream ss(s);
    string temp;
    int max=0;string maxw="";
    while(ss>>temp)
    {
        int sum=0;
        for(int i=0;i<temp.length();i++)
        {
            char ch=temp[i];
            sum+=(int)((ch-97));
        }
        if(sum>max)
        {
            max=sum;
            maxw=temp;
        }
    }
    cout<<"MAXIMUM LEXICO : "<<maxw;
}