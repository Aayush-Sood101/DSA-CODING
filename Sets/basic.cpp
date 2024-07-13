#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    //size
    cout<<s.size()<<endl;
    //for each loop
    for(int x : s){
        cout<<x<<" ";
    }
    cout<<endl;
    //finding target in set
    int target = 3;
    /*
    s.find()
    1.It searches in the set and if it is not found returns the last element of the set
    */
    if(s.find(target) != s.end()){ // target exits
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    //erase
    s.erase(3);
}