#include<iostream>
using namespace std;
int main(){
    // int* p1;
    // int* p2;
    // p1 = &p2; // will give error because p1 can only store the address of an integer
    int x = 10;
    int* p1 = &x;
    int** p2 = &p1; // this is called double pointerr (used to store address of another pointer)
    cout<<*p1<<endl;
    cout<<**p2<<endl;

}