#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    int c=0;
    for(int i=0;i<s.length();i++)
    {
        for(int j=1;j<=s.length()-i;j++)
        {
            string s1=s.substr(i,j);
            cout<<s1<<endl;
            bool flag=true;
            for(int k=0;k<s1.length();k++)
            {
                char ch=s1[k];
                if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                continue;
                else
                {
                    flag=false;
                    break;
                }
            }
            if(flag==true)
            c++;
        }
    }
    cout<<c;
}