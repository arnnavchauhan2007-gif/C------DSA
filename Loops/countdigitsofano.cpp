#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a no. : ";
    cin>>n;
    int count = 0;
    if(n==0) count++;
    while(n!=0){
        n /= 10;
        count++;

        
    }
    cout<<count<<" digit no.";




}