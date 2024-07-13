using namespace std;
#include<iostream>
#include<vector>
void substring(string str, string s , int idx,vector<string> &v)
{
    // base call
    if(idx==s.length())
    {
        v.push_back(str);
        return;
    }
    char ch=s[idx];
    //include
    substring(str+ch,s,idx+1,v);
    //exclude 
    substring(str,s,idx+1,v); 
}
int main()
{
    cout<<"Enter a string : ";
    string s;
    cin>>s;
    vector<string> v;
    substring("",s,0,v);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<endl;
}