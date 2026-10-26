#include<iostream>
using namespace std;
int main(){
    int side;
    cout<<"enter no. : ";
    cin>>side;
    for(int i = 1; i <= side; i++){           //LOOP KE ANDAR 2 LOOP
      for(int j= 1; j<=side-i;j++){   // side+1-i ki jgh side-i krdia cuz hr line me 1 extra space print hora tha
          cout<<"  ";  
      
        }
         for (int j = 1; j<=i;j++){
         cout<<"* ";
        }
    
    cout<<endl;
  }
}
//   for(int i = 1; i <= side; i++){
//     for (int j = 1; j<= side;j++){
//         if (i+j>=(side+1)) cout<<"* ";
//             else cout<<"  ";
//     }
//     cout<<endl;
//   }
// }