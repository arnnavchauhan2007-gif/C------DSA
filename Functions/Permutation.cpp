#include<iostream>
using namespace std;
int fact(int x){
    int fct=1;
    for(int i=1;i<=x;i++)
    fct*=i;
    return fct;
}
int main(){
    int n,r;
    cout<<"enter n and r: ";
    cin>>n>>r;
    fact(n);
    
    fact(n-r);
    cout<<fact(n)/(fact(n-r));
}