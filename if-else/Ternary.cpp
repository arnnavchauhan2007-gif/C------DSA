#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no.";
    cin>>n;
    (n%2 == 0) ? cout<<"even" : cout<<"odd";
     //  or   cout<<((n%2==0) ? "even" : "odd");
}