#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string , int> m;
    //first method of insertion
    pair<string , int> p1;
    p1.first = "Aayush";
    p1.second = 9;
    m.insert(p1);

    //second method of insertion

    m["Mahesh"] = 13;

    //printing using for each loop
    for(pair<string , int> p : m){
        cout<<p.first<<" "<<p.second;
        cout<<endl;
    }

    //deleting element
    m.erase("Mahesh");

    //size
    cout<<m.size()<<endl;
}