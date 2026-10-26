#include<iostream>
using namespace std;
void change(int* ptr){
    *ptr = 230;
}
int main(){
   int x = 10;
   change(&x);
   cout<<x; 
}