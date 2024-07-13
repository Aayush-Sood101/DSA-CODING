#include<iostream>
using namespace std;
template<class T>
class vector{
public:
    T* arr;
    int size;
    vector(){

    }
    vector(int size){
        this->size = size;
        arr = new T[size];
    }
};
int main(){
    vector<int> v1;
    vector<float> f;
    vector<vector<int>> v3;
}