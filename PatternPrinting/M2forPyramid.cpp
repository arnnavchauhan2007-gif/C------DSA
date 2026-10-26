#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. : ";
    cin>>n;
    int spaces = n-1;
    int stars = 1;
    for(int i =1;i<=n;i++){
        for(int j=1;j<=spaces;j++){
            
            cout<<"  ";
        }
        for(int j=1;j<=stars;j++){
           
            cout<<"* ";
        }
        spaces -= 1;
        stars +=2;
        cout<<endl;
    }
}