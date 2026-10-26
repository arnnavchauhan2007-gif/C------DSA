#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a no.";
    cin>>n;
     
    if(n % 5 == 0 or n % 3 == 0) cout<<"divisible by 3 or 5";
    else cout<<"not divisible ";
}
