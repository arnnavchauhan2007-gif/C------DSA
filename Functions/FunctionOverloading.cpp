#include<iostream>
using namespace std;
void fun(){
    cout<<"hi"<<endl;

}
// void fun(){  // gives errrorrrrr
//     cout<<"good morning"<<endl;
// }
void fun(int x){  
    cout<<"good morning"<<endl;
}
int main(){
    fun();
    fun(3);

}