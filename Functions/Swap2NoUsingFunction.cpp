#include<iostream>
using namespace std;
void swap(int& a, int& b){ // its called alias and it make sures that the a and b are the ones which are declared in main function 
    int temp = a;
    a = b;
    b = temp;

}
int main(){
    int a = 3;int b  = 4;
    swap(a,b);  // built in function;
    cout<<a<<" "<<b;
}