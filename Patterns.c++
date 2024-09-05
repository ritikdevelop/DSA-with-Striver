// 1 *****
//   *****
//   *****
//   *****
//   *****

// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cout<<"Enter number to print pattern: ";
//     cin>>num;

//     for(int i = 0; i < num; i++){
//         for(int j=0; j<5; j++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// *
// **
// ***
// ****
// *****

// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cout<<"Enter number to print pattern: ";
//     cin>>num;

//     for(int i = 1; i <= num; i++){
//         for(int j = 1; j <= i; j++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

//   3  1
//     12
//     123
//     1234
//     12345

//   #include<iostream>
//     using namespace std;

//     int main(){
//         int num;
//         cout<<"Enter number to print pattern: ";
//         cin>>num;

//         for(int i = 1; i <= num; i++){
//             for(int j = 1; j <= i; j++){
//                 cout<<j;
//             }
//             cout<<"\n";
//         }
//         return 0;
//     }

// 4 1
//   22
//   333
//   4444
//   5555

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cout << "Enter number to print pattern: ";
//     cin >> num;

//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << i;
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// *****
// ****
// ***
// **
// *

// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cout<<"Enter the number to print: ";
//     cin>>num;

//     for(int i=0;i<5;i++){
//         for(int j=5;j>i;j--){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// 12345
// 1234
// 123
// 12
// 1

// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cout<<"Enter the number to print: ";
//     cin>>num;

//     for(int i=0;i<5;i++){
//         for(int j=5;j>i;j--){
//             cout<<5-j+1;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

//     *
//    * *
//   * * *
//  * * * *
// * * * * *

// #include<iostream>
// using namespace std;

// void Pattern7(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//     }
//     for(int j=0;j<2*i+1;j++){
//         cout<<"*";
//     }
//     for(int j=0;j<5-1-i;j++){
//         cout<<" ";
//     }
//     cout<<"\n";
//   }
// }
// int main(){
//     int num;
//     cout<<"Enter number: ";
//     cin>>num;
//     Pattern7(num);

//     return 0;
// }

//         *
//    * *
//   * * *
//  * * * *
// * * * * *
//   Reverse pattern

// #include<iostream>
// using namespace std;

// void Pattern8(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<"_";
//         }
//         for(int j=0;j<2*n-(2*i+1);j++){
//             cout<<"*";
//         }
//         for(int j=0;j<i;j++){
//             cout<<"_";
//         }
//         cout<<"\n";
//     }
// }

// int main(){
//     int num;
//     cout<<"Enter num to print pattern: ";
//     cin>>num;

//     Pattern8(num);
//     return 0;
// }

//      *
//     ***
//    *****
//   *******
//  *********
// ***********
// ***********
//  *********
//   *******
//    *****
//     ***
//      *

// #include<iostream>
// using namespace std;

// void Pattern9(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//     }
//     for(int j=0;j<2*i+1;j++){
//         cout<<"*";
//     }
//     for(int j=0;j<5-1-i;j++){
//         cout<<" ";
//     }
//     cout<<"\n";
//   }
// }
// void reverse(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<2*n-(2*i+1);j++){
//             cout<<"*";
//         }
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         cout<<"\n";
//     }
// }

// int main(){
//     int num;
//     cout<<"Enter number to print pattern: ";
//     cin>>num;

//     Pattern9(num);
//     reverse(num);
// }

// 1
// 01
// 101
// 0101
// 10101

// #include<iostream>
// using namespace std;

// void Pattern11(int n){
//     int start = 1;
//     for(int i=0;i<n;i++){
//         if(i%2==0)
//         start = 1;
//         else
//         start = 0;
//         for(int j=0;j<=i;j++){
//             cout<<start;
//             start = 1 - start;
//         }
//         cout<<"\n";
//     }
// }

// int main(){
//     int num;
//     cout<<"Enter number to print pattern: ";
//     cin>>num;

//     Pattern11(num);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void Pattern12(int n){
//     int space = 2*(n-1);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         for(int j=1;j<=space;j++){
//             cout<<"_";
//         }
//         for(int j=i;j>=1;j--){
//             cout<<j;
//         }
//         cout<<endl;
//         space -=2;
//     }
// }

// int main(){
//     int num;
//     cout<<"Enter number to print pattern: ";
//     cin>>num;

//     Pattern12(num);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void Pattern13(int n){
//     int num=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<num<<" ";
//             num +=1;
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int num;
//     cout<<"Enter your number to print pattern: ";
//     cin>>num;

//     Pattern13(num);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void Pattern14(int n){
//     for(int i=0;i<n;i++){
//         for(char ch='A'; ch<='A'+i; ch++){
//             cout<<ch<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int num;
//     cout<<"Enter number to print pattern: ";
//     cin>>num;

//     Pattern14(num);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void Pattern15(int n){
//     for (int i=0;i<n;i++){
//         for(char ch='A';ch<='A'+(n-i-1);ch++){
//             cout<<ch<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int num;
//     cout<<"Enter your number to print pattern: ";
//     cin>>num;

//     Pattern15(num);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void Pattern16(int n){
//     for(int i=0;i<=n;i++){
//         char ch ='A'+i;
//         for(int j=0;j<=i;j++){
//             cout<<ch;
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int num;
//     cout<<"Enter number to print pattern: ";
//     cin>>num;

//     Pattern16(num);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void Pattern17(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i + 1; j++)
//         {
//             cout << "_";
//         }
//         char ch = 'A' + i;
//         int breakpoint = (2 * i + 1) / 2;
//         for (int j = 1; j <= 2 * i + 1; j++)
//         {
//             cout << ch;
//             if (j <= breakpoint)
//             {
//                 ch++;
//             }
//             else
//             {
//                 ch--;
//             }
//         }
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << "_";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int num;
//     cout << "Enter number to print pattern: ";
//     cin >> num;

//     Pattern17(num);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void Pattern18(int num){
//     for(int i=0;i<num;i++){
//         for(char ch =('A'+num-1)-i;ch<=('A'+num-1);ch++){
//             cout<<ch<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int num;
//     cout<<"Enter the number to print pattern: ";
//     cin>>num;

//     Pattern18(num);
//     return 0;
// }

#include <iostream>
using namespace std;

void Pattern19(int N)
{
    int iniS = 0;
    for (int i = 0; i < N; i++)
    {

        // for printing the stars in the row.
        for (int j = 1; j <= N - i; j++)
        {
            cout << "*";
        }

        // for printing the spaces in the row.
        for (int j = 0; j < iniS; j++)
        {
            cout << " ";
        }

        // for printing the stars in the row.
        for (int j = 1; j <= N - i; j++)
        {
            cout << "*";
        }

        // The spaces increase by 2 every time we hit a new row.
        iniS += 2;

        // As soon as the stars for each iteration are printed, we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line.
        cout << endl;
    }

    // for lower half of the pattern

    // initial spaces.
    iniS = 2 * N - 2;
    for (int i = 1; i <= N; i++)
    {

        // for printing the stars in the row.
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // for printing the spaces in the row.
        for (int j = 0; j < iniS; j++)
        {
            cout << " ";
        }

        // for printing the stars in the row.
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // The spaces decrease by 2 every time we hit a new row.
        iniS -= 2;

        // As soon as the stars for each iteration are printed, we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line.
        cout << endl;
    }
}

int main()
{
    int num;
    cout << "Enter the number to print: ";
    cin >> num;

    Pattern19(num);
    return 0;
}