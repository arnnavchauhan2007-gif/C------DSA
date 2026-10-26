#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter 1st side ";
    cin>>a;
    int b;
    cout<<"enter 2nd side ";
    cin>>b;
    int c;
    cout<<"enter 3rd side ";
    cin>>c;
    if(a+b>c and b+c>a and c+a>b) cout<<"yes they can be the sides of a triangle";
    else cout<<"no they cannot";
    
}