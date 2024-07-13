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
    stringstream ss(s);
    stringstream ss1(s);
    string temp1,temp2,temp3;
    int max=1;
    while(ss>>temp1);
    {
        int count =0;
        while(ss1>>temp2)
        {
            if(temp1==temp2)
            {
                count++;
            }
        }
        if(max<count)
        {
            max=count;
            temp3=temp1;
        }
    }
    if(max!=1)
    cout<<"Word occuring most times : "<<temp3<<" "<<max;
    else
    cout<<"No word occurs more than once ";
}