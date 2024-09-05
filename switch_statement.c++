#include<iostream>
using namespace std;

// int main(){
//     int day;
//     cin >> day;

//     switch(day){
//         case 1: 
//         cout<<"Monday";
//         break;

//         case 2: 
//         cout<<"Tuesday";
//         break;

//         case 3: 
//         cout<<"Wednesday";
//         break;

//         case 4: 
//         cout<<"Thursday";
//         break;

//         case 5: 
//         cout<<"Friday";
//         break;

//         case 6: 
//         cout<<"Saturday";
//         break;

//         case 7: 
//         cout<<"Sunday";
//         break;
//     }
        
//     return 0;
// }


int main(){
    float num1, num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;

    char op;
    cout<<"Enter an operator: (+, -, *, /)";
    cin>>op;

    switch(op){
        case '+':
        cout<<num1+num2;
        break;

        case '-':
        cout<<num1-num2;
        break;

        case '*':
        cout<<num1*num2;
        break;

        case '/': 
        cout<<num1/num2;
        break;

        default:
        cout<<"Invalid operator";
    }

    return 0;
}