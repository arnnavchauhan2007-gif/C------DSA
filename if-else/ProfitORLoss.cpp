#include<iostream>
using namespace std;
int main(){
    float cp;
    cout<<"enter the cost price : ";
    cin>>cp;
    float sp;
    cout<<"enter the selling price : ";
    cin>>sp;

    // if(cp > sp) cout<<"You have incurred a loss of :"<<cp-sp;
    // if(sp > cp) cout<<"you have made a profit of :"<<sp-cp;
    // if(cp == sp) cout<<"neither profit nor loss";    
                    //    OR
    if(cp > sp) cout<<"You have incurred a loss of :"<<cp-sp;
    else if(sp > cp) cout<<"you have made a profit of :"<<sp-cp;
    else if(cp == sp) cout<<"neither profit nor loss"; 

}
