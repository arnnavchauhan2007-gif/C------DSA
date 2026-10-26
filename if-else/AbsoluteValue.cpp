#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the no. ";
    cin>>num;

    if(num < 0) num = num*-1;  // or num *=-1
    cout<<num;

        //   OR

    // if(num<0) cout<<-num;
    // else cout<<num;
}