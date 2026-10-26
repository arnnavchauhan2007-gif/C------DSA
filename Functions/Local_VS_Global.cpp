#include<iostream>
using namespace std;
int x = 10;
int main(){
    cout<<x<<endl;
    int x =100;
    cout<<x<<endl;   // if there is a local variable it will be prioritised first

                     // if no local variable is there then global is used
                    // this only happens if u use same names

}