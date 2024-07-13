#include<iostream>
using namespace std;
void helper(int n, int i ,string &str,string s)
    {
        //base case
        if(i==1)
        {
            i+1;
            str=str+'1';
        }
        if(i>n)
        return;
        for(int i=0;i<str.length();i++)
        {
            int count = 1;
            char ch1=str[i];
            for(int j=i+1;j<str.length();j++)
            {
                char ch2=str[j];
                if(ch1==ch2)
                count++;
                else
                break;
            }
            s=s+to_string(count)+ch1;
        }
        cout<<s<<endl;
        str=s;s="";
        helper(n,i+1,str,s);
    }
int main()
{
    string str="";
    helper(4,0,str,"");
    cout<<str;
}