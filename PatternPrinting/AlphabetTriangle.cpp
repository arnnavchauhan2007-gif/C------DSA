#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a no. : ";
    cin>>n;
    if (n>26) cout<<"fuck you";
    else{
        for(int i = 1; i<=n; i++){
         for(int j = 1; j<= i;j++){
        cout<<(char)(j+64);
                }
        cout<<endl;
            }
        }
    }
    
   