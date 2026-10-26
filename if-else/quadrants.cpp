#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter X coordinate : ";
    cin>>x;
    int y;
    cout<<"enter Y coordinate : ";
    cin>>y;

    if(x>0 and y>0) cout<<"1ST QUADRANT";
    if(x>0 and y<0) cout<<"2ND QUADRANT";
    if(x<0 and y<0) cout<<"3RD QUADRANT";
    if(x<0 and y>0) cout<<"4TH QUADRANT";
    if(x==0 and y>0) cout<<"Y-AXIS";
    if(x==0 and y<0) cout<<"Y-AXIS";
    if(x>0 and y==0) cout<<"X-AXIS";
    if(x<0 and y==0) cout<<"X-AXIS";
    if(x==0 and y==0) cout<<"ORIGIN";

}