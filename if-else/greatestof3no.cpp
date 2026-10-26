#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter 1st no. ";
    cin>>a;
     int b;
    cout<<"enter 2nd no. ";
    cin>>b;
     int c;
    cout<<"enter 3rd no. ";
    cin>>c;
    if(a >= b and a >= c) cout<<a<<" is the greatest";
    else if(b >= a and b >= c) cout<<b<<" is the greatest";
    else if(c >= b and c >= a) cout<<c<<" is the greatest";
    

}