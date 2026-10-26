#include<iostream>
using namespace std;
void CountDigits(int n, int* ptr){
     int count = 0;
    if(n==0) count++;
    while(n!=0){
        n /= 10;
        count++;
    }
    *ptr = count;
    
}
int main(){
    int n;
    cout<<"enter a no. : ";
    cin>>n;
    int c = 0;
    CountDigits(n,&c);
    cout<<c;
}