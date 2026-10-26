#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no.: ";
    cin>>n;
    for (int i = 1; i <= n; i++){
        
        for( int j = 1;j<=n+1-i;j++) {           //for( int j = i;j<=n;j++){   // for(int i = n;i>=1;i--)
                                                                               //     for(int j = 1; j<=n;j++)
            cout<<"* ";
            
        }
        cout<<endl;
    }
}
