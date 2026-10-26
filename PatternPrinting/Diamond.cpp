// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter no. : ";
//     cin>>n;
//     int spaces = n-1;
//     int stars = 1;
//     int spaceR = 1;
//     int starR = n+1;
//     for(int i =1;i<=n;i++){
//         for(int j=1;j<=spaces;j++){
            
//             cout<<"  ";
//         }
//         for(int j=1;j<=stars;j++){
           
//             cout<<"* ";
//         }
//         spaces -= 1;
//         stars +=2;
//         cout<<endl;}
//         for(int i =1;i<=n;i++){
//         for(int j = 0;j<=spaceR;j++){
//             if(j==1){
//                 continue;  // 1st line me bhi space aa rha tha islie 1st ko skip krne k lie continue 
//             }
//             cout<<"  ";
//         }
//         for(int j = 1;j<= starR;j++){
//             cout<<"* ";
//         }
//         spaceR++;
//         starR -= 2;
//         cout<<endl;
//     }
// }


// method -2 : in a single loop

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. : ";
    cin>>n;
    int spaces = n-1;
    int stars = 1;
    for(int i = 1;i<=2*n-1;i++){
        for(int j=1;j<=spaces;j++){

            cout<<"  ";
            
        }
        for(int j = 1;j<=stars;j++){
            cout<<"* ";
        }
        if(i<=(n-1)){
            stars+=2;
            spaces--;}
            else {stars -=2;
                spaces++;}
                cout<<endl;

    }
}
