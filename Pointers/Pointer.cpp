#include<iostream>
using namespace std;
int main(){
  int x = 3;
  int* ptr = &x;   // understand int* as a datatype used to store address of any variable
  cout<<&x<<endl<<ptr<<endl<<&ptr;        
}