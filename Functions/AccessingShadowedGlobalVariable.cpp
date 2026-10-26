#include<iostream>
using namespace std;
int x = 8;
int main(){
    int x = 203;
    cout<<x<<endl;
    cout<<::x<<endl;  // for accessing the shadowed global variable
                      // '::' is  called SCOPE RESOLUTION OPERATOR   
}