#include<iostream>
using namespace std;
int main(){
    int length;
    cout<<"LENGTH : ";
    cin>>length;
    int breadth;
    cout<<"BREADTH : ";
    cin>>breadth;
    int area = length*breadth;
    int perimeter = 2*(length + breadth);

    if(area > perimeter) cout<<"THE AREA IS GREATER THAN THE PERIMETER";
    else cout<<"PERIMETER IS GREATER THAN THE AREA";
    

}