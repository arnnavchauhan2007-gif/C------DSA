#include<iostream>
#include<cmath>
using namespace std;
int main(){
//  int n;
//     cout<<"enter a no. : ";
//     cin>>n;
//     int count = 0;
//     for(int i = 1;i<=sqrt(n);i++){
//         if(n%i==0){
//             count++;
//         }
        
//     }
   
//     if (n == 1) cout<<"neither prime nor composite ";
//     if (count > 2) cout<<"composite no. ";
//     if (count != 2) cout<<"prime no. ";
      
    
   
int n;
    cout<<"enter a no. : ";
    cin>>n;
    bool flag = false;
    for(int i = 2;i<=sqrt(n);i++){
        if(n%i==0){
            flag = true;
            break;
        }
        
    }
    if (flag==true) cout<<"composite";
    else cout<<"prime";
    

}