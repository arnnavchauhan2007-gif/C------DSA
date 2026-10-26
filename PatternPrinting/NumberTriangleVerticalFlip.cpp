#include<iostream>
using namespace std;
int main(){
    int side;
    cout<<"enter no. : ";
    cin>>side;
    for(int i = 1; i <= side; i++){           
      for(int j= 1; j<=side-i;j++){  
          cout<<"  ";  
      
        }
         for (int j = 1; j<=i;j++){
         cout<<j<<" ";
        }
    cout<<endl;
  }
}