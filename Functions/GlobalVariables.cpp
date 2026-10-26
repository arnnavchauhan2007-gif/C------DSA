#include<iostream>
using namespace std;
int x = 8;  //GLOBAL VARIABLE: CAN BE USED IN ANY FUNCTION THROUGHOUT THE WHOLE CODE
void fun(){
    x = 24;
}
int main(){
    cout<<x<<endl;
    fun();
    cout<<x<<endl;

}