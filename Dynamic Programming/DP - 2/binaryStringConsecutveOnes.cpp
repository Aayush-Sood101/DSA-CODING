//no consecutve strings in binary strings of length n
//the number of strings formed for each n forms a fibonacci serieszz


#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void f(int n , string str , bool flag){
        if(str.size() == n){
                cout<<str<<endl;
                return ;
        }

        //left call for 1
        if(flag)
        f(n , str + '1' , false);
        //right call for 0
        f(n , str + '0' , true);
}

int main(){
        int n;
        cin>>n;

        f(n , "" , true);
}