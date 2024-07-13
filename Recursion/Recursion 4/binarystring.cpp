/*Generate all binary strings of length n 
withour consective 1's*/
#include<iostream>
using namespace std;
void binarystring(int n, string str)
{
    if(str.length()==n)
    {
        cout<<str<<endl;
        return;
    }
    //concatenate 0;
    binarystring(n,str+'0');
    // concatenate 1
    if(str[str.length()-1]!='1')
    binarystring(n,str+'1');
}
int main()
{
    binarystring(30,"");
}