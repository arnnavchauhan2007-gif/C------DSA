#include<iostream>
using namespace std;
int main(){
    int a = 3;int b  = 4;
    int temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b;
}