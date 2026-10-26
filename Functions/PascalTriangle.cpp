#include<iostream>
using namespace std;
int fact(int x){
    int fct=1;
    for(int i=1;i<=x;i++)
    fct*=i;
    return fct;
}
int ncr(int n , int r){
    return fact(n)/(fact(n-r)*fact(r));
}
int main(){
     int n;
    cout<<"enter n : ";
    cin>>n;
    for (int i=0;i<=n;i++){
          for(int j = 1;j<=n-i;j++){
            cout<<"  ";
            
        }
        
        for(int j=0;j<=i;j++){
            cout<<ncr(i,j)<<"   ";
        }
        cout<<endl;
        
    }
    

}

