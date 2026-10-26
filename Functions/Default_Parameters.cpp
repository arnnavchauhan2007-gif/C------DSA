#include<iostream>
using namespace std;
void fun(int age = 18){  // default value is 18; so if no value is given then it will display 18
    cout<<"My Age is : "<<age<<endl;
}
int main(){
    fun();

}