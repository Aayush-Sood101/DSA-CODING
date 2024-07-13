using namespace std;
#include<iostream>
#include<vector>
#include<algorithm>
void helper(string s , string str , int idx,bool flag)
{
    if(idx==s.length())
    {
        cout<<str<<endl;
        return;
    }
    char ch=s[idx];
    if(idx==s.length()-1)
    {
        //include
        if(flag==true)
        helper(s,str+ch,idx+1,true);
        //exclude
        helper(s,str,idx+1,true);
    }
    else
    {
        char nch=s[idx+1];
        if(ch==nch)
        {
            if(flag==true)
            helper(s,str+ch,idx+1,true);
            helper(s,str,idx+1,false);
        }
        else
        {
            if(flag==true)
            helper(s,str+ch,idx+1,true);
            helper(s,str,idx+1,true);
        }
    }
}
int main()
{
    cout<<"Enter a string : ";
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    helper(s,"",0,true);
}