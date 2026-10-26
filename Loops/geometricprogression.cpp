#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no. of terms : ";
    cin>>n;
    int a;
    cout<<"enter 1st term of GP : ";
    cin>>a;
    int r;
    cout<<"enter common ratio : ";
    cin>>r;
    for(int i = 1;i<=n;i++){
        cout<<a<<endl;
        a *=r ;
    }
   
    
     
 }