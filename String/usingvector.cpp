#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a sentence : ";
    getline(cin,s);
    vector<string> v;
    stringstream ss(s);
    string temp;
    while(ss>>temp)
    {
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    string tempo;
    int c=1,maxc=1;
    for(int i=1;i<v.size();i++)
    {
        if(v[i]==v[i-1])
        {
            c++;
        }
        else
        {
            c=1;
        }
        if(maxc<c)
        {
            maxc=c;
            tempo=v[i];
        }
    }
    cout<<"WORD OCCURING MOST TIMES : "<<tempo;
}