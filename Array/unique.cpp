#include <iostream>
using namespace std;
int mul(int x, int res[], int res_size){
int carry = 0;
for (int i = 0; i < res_size; i++) {
int prod = res[i] * x + carry;
res[i] = prod % 10;
carry = prod / 10;
}
while (carry) {
res[res_size] = carry % 10;
carry = carry / 10;
res_size++;
}
return res_size;
}
int main() {
int n;
cin>>n;
int res[500];
res[0] = 1;
int res_size = 1;
}