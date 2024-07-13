#include<iostream>
#include<algorithm>
using namespace std;
// int helper(int num,string str)
// {
//     if(num==0)
//     {
//         reverse(str.begin(),str.end());
//         return stoi(str);
//     }
//     int rem=num%2;
//     str+=to_string(rem);
//     return helper(num/2,str);
// }
void helper(int num,string &str)
{
    //base call
    if(num==0)
    {
        return;
    }
    helper(num/2,str);
    int rem=num%2;
    str+=to_string(rem);
}
int main()
{
    cout<<"Enter a  number : ";
    int num;
    cin>>num;
    string str="";
    helper(num,str);
    cout<<str;
}