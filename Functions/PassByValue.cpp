#include<iostream>
using namespace std;
void change(int x){
    x=20;    //LOCAL VARIABLE OF VOID FUNCTION = X
}
int main(){
    int x = 10;  // LOCAL VARIABLE OF MAIN FUNCTION = X
    change(x);
    cout<<x<<endl;  // LOCAL VARIABLE OF MAIN FUNCTION IS ASKED FOR OUTPUT
    

}