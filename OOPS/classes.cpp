#include<iostream>
using namespace std;
class Student //user defined data type
{
public:
    string name;
    int rno;
    float percent;
};
int main()
{
    Student s={"Aayush",1,100};
    cout<<s.name<<endl;
    cout<<s.rno<<endl;
    cout<<s.percent<<endl;
}