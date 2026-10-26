#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a no. : ";
    cin>>a;
    int b;
    cout<<"enter its power : ";
    cin>>b;
    int st = 1;
    for(int i = 1;i<=b;i++){
        st *= a;
         if(a==1) break;
                
    }
    if(a==0 && b==0) cout<<"1";
    else cout<<st;

}
      
    

 
