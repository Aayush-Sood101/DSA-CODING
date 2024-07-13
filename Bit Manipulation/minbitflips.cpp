/*Calculate minimum number of bit flips
to convert one number to another
Observation :
Use of XOR OPERATOR
*/
#include<iostream>
using namespace std;
int main(){
    int x=23;
    int y=32;
    cout<<__builtin_popcount(x^y);
}