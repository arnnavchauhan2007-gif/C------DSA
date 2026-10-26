// CHATGPT

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;

//     for (int i = 0; i < n; i++) {
//         // Print spaces
//         for (int j = 0; j < i; j++) {
//             cout << "  ";
//         }

//         // Print stars
//         for (int j = 0; j < 2 * (n - i) - 1; j++) {
//             cout << "* ";
//         }

//         cout << endl;
//     }

//     return 0;
// }

//OP METHOD

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the no. : ";
    cin>>n;
    int space = 1;
    int star = 2*n-1;
    for(int i=1;i<=n;i++){
        for(int j = 1;j<=space;j++){
            if(j==1){
                continue;  // 1st line me bhi space aa rha tha islie 1st ko skip krne k lie continue 
            }
            cout<<"  ";
        }
        for(int j = 1;j<= star;j++){
            cout<<"* ";
        }
        space++;
        star -= 2;
        cout<<endl;
    }
}
    


