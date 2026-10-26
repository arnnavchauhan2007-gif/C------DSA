#include<iostream>
using namespace std;
int main(){
    int side;
    cout<<"enter an odd no. : ";
    cin>>side;
    int quo = side/2;   // or int mid = n/2 + 1 
    int rem = side%2;
    int sum = quo+rem;
  for(int i = 1; i <= side; i++){
    for (int j = 1; j<= side;j++){  
        if(i==sum || j == sum)cout<<"* ";   // i==mid || j==mid
        else cout<<"  ";
    }
    cout<<endl;
  }
}