#include<iostream>
using namespace std;
template <class T>
class vector{
public:
    T *arr;
    int size;
    vector(int size){
        this->size = size;
        arr = new T[size];
    }
    T dotproduct(vector &v){
        T d = 0;
        for(int i = 0 ; i<size ; i++){
            d += arr[i] * v.arr[i];
        }
        return d;
    }
};
int main(){
    vector<float> v1(3);
    v1.arr[0] = 4.23;
    v1.arr[1] = 10.123;
    v1.arr[2] = 20.123;
    vector<float> v2(3);
    v2.arr[0] = 1.12;
    v2.arr[1] = 0;
    v2.arr[2] = 1.42;
    cout<<v1.dotproduct(v2)<<endl;
}