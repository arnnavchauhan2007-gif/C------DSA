#include<iostream>
using namespace std;
int main(){
  int rows;
  cout<<"enter no. of rows : ";
  
  cin>>rows;
  int col;
  cout<<"enter no. of columns : ";
  
  cin>>col;
  for(int i = 1; i <= rows; i++){
    for (int j = 1; j<= col;j++){
      cout<<"* ";
    }
    cout<<endl;
  }
}