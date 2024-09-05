

// Write a program to find adult or not

#include<iostream>
using namespace std;

// if person is greater than 18 then he is adult
// else he is not adult 

// int main(){
//     int person;

//     if (person>18)
//     {
//         cout<<"Person is an adult";
//     } else {
//         cout<<"He is not an adult";
//     }
//     return 0;
// }


/*int main(){
    int a, b, c;

    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;

    if(a>b) {
        cout<<"A is greater than B";
    }
    if(b>c){
        cout<<"B is greater than C!";
    }
    if(a & b > c){
        cout<<"A and B are greater than C";
    }
    if(b & c){
        cout<<"B and C are greater than A";
    }
    else{
        cout<<"c is the smallest number!";
    }
    return 0;
}
*/


// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;

//     for(int i = 0; i<n; i++){
//         if(i == 3){
//             break;
//         }
//         cout<<i;
//     }
//     return 0;
// }


// int main(){
//     int marks;
//     cout<<"Enter marks: ";
//     cin>>marks;

//     if(marks < 25){
//         cout<<"Grade F";
//     }
//     else if(marks >= 25 && marks <= 45){
//         cout<<"Grade E";
//     }
//     else if(marks >= 45 && marks <= 49){
//         cout<<"Grade D";
//     }
//     else if(marks >= 50 && marks <= 59){
//         cout<<"Grade C";
//     }
//     else if(marks >= 60 && marks <= 79){
//         cout<<"Grade B";
//     }
//     else if(marks >= 80 && marks <= 100){
//         cout<<"Grade A";
//     }
    
//     return 0;
// }


int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    if(age<18){
        cout<<"Not eligible for job.";
    }
    // else if(age <=54){
    //     cout<<"Eligible fir job.";
    // }
    else if(age <= 57){
        cout<<"Eligible for job.";
        if(age >=55){
            cout<<"but retirement soon";
        }
    }
    else{
        cout<<"Retirement time.";
    }
    return 0;
}