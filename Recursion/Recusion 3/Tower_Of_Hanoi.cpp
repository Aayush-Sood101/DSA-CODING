/*Discs are named as source helper and destination
For n discs to be taken from Source to Destination : 
1. n-1 discs ko source se helper leke jao using recursion
2. Biggest nth disk ko source se destination
3. n-1 disks ko recursion lagake helper se destination le jao
4. For n-1 disks 1st rod is source 2nd is destination and 3rd is helper
5. Souce helper and destination are named as A B and C
*/
#include<iostream>
using namespace std;
void hanoi(int n ,char a , char b, char c)
{
    if(n==0)
    return;
    hanoi(n-1,a,c,b);
    cout<<a<<" -> "<<c<<endl;
    hanoi(n-1,b,a,c);
} 
int main()
{
    cout<<"Enter no. of discs : "<<endl;
    int n=4;
    hanoi(n,'A','B','C');
}