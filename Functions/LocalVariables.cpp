#include<iostream>
using namespace std;
void fun(){
  // cout<<x;    // it will give erroe bcz there is no x defined in the void functionn
}
int main(){
    int x = 10; // x is only defined in main function
   fun();

}      //X IS THE LOCAL VARIABLE OF MAIN FUNCTION AND CAN BE PRINTED IN MAIN FN ONLY
