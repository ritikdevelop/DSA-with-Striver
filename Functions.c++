#include<iostream>
using namespace std;

// Without any parameter

// void hello(){
//     cout<<"Hello World!";
// }

// int main(){
//     hello();
//     return 0;
// }


// Taking parameter in function

// void hello(string name){
//     cout<<"Hello " <<name;
// }

// int main(){
//     string name;
//     cin>>name;
//     hello(name);
//     return 0;
// }

// return function
int add(int num1,int num2){
    return num1+num2;
}

int main(){
    int num1,num2;
    cout<<add(1,2);
    return 0;
}


// Pass by Value
void hellon(int n){
    cout<<n<<endl;
    n+=5;
    cout<<n<<endl;
}

int main(){
    int n = 6;
    hellon(n);
    cout<<n;
    return 0;
}


// Pass by Reference
void hello(int &n){
    cout<<n<<endl;
    n+=5;
    cout<<n<<endl;
}

int main(){
    int n = 6;
    hello(n);
    cout<<n;
    return 0;
}