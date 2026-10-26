#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no.: ";
    cin>>n;
    // FIRST ROW TO PRINT 2N-1 STARS
    for(int i = 1;i<=2*n-1;i++){  
        cout<<"* ";
    }
    cout<<endl;
    
    // 1 LOOP ME 3 LOOP
    for(int i = 1;i<=n-1;i++){
        for(int j = 1;j<=n-i;j++){
            cout<<"* ";    // HORIZONTALLY FLIPPED STAR TRIANGLE
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"  "; // PYRAMID
        }
        for(int j = 1;j<=n-i;j++){
            cout<<"* ";   // // HORIZONTALLY FLIPPED STAR TRIANGLE
        }
        cout<<endl;
    }
  
}