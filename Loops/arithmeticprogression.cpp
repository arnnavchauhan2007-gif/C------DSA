#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no. of terms : ";
    cin>>n;

    // int a = 2 + (n-1)*3;
    // for(int i = 2;i <= a;i += 3){
    //     cout<<i<<endl;
    // }

    //     int n;
    // cout<<"enter the no. of terms : ";
    // cin>>n;
    // int a;
    // cout<<"enter 1st term : ";
    // cin>>a;
    // int d;
    // cout<<"enter common diff : ";
    // cin>>d;
    // int ap = a + (n-1)*d;


    
    // for(int i = a;i <= ap;i += d){
    //     cout<<i<<endl;
    // }
       
    
    
    
    int a = 2, d = 3;
       for(int i = 1;i<=n;i++){
        cout<<a<<endl;
        a+=d;
       }
       

}