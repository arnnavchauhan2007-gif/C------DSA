#include<iostream>
using namespace std;
int main(){
    int x = 7;
    int* ptr = &x;
    cout<<*ptr<<endl;   // acceses the value whose address is stored in ptr
    *ptr = 70;    //  can also change the value with the help of dereference operator
    cout<<x;      // dereference operator is "*"
}