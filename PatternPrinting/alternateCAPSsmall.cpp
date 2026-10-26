#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a no. : ";
    cin>>n;
    if (n>26) cout<<"fuck you";             
    else{
        for(int  i = 1; i<= n;i++){
            for(int j = 1; j<=n; j++){
                if (i%2==0) cout<<(char)(i+64)<<" ";
                else cout<<(char)(i+96)<<" ";
                }
        cout<<endl;
            }
        }
    }
    