#include<iostream>
using namespace std;
void starTriangle(int n){
    for(int i = 1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
}
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
     int c;
     cin>>c;
    starTriangle(a);
     
    starTriangle(b);
    
    starTriangle(c);
    
}