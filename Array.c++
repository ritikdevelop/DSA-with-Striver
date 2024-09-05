#include<iostream>
using namespace std;

// int main(){
//     int arr[5];
//     cin>> arr[0] >>arr[1]>>arr[2]>>arr[3]>>arr[4];

//     cout<<arr[0] <<arr[1] <<arr[2] <<arr[3] <<arr[4];
//     // cout<<arr[3];

//     return 0;
// }

// int main(){
//     int arr[5];
    
//     for(int i =0;i<5;i++){
//         cout<<"Enter Number: ";
//         cin>>arr[i];
//     }
//     return 0;
// }

int main(){
    int arr[5];

    for(int i = 0; i < 5; i++){
        cout<<"Enter Number: ";
        cin>>arr[i];
    }

    int search;
    cout<<"Enter the number to find: ";
    cin>>search;
    for(int i = 0; i < 5; i++){
        if(search == i){
            cout<<"Number found at index: "<<i;
        }
    }
    return 0;
}