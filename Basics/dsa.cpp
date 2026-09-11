#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int age;
//     cout<<"Enter your age: ";
//     cin>>age;
//     if(age>=18){
//         cout<<"Adult";
//     }
//     else{
//         cout<<"Not Adult";
//     }
//     return 0;
// }

// int main(){
//     int marks;
//     cout<<"Enter your marks: ";
//     cin>>marks;
//     if(marks < 25){
//         cout<<"F";
//     }
//     else if(marks <= 44){
//         cout<<"E";
//     }
//     else if(marks <= 49){
//         cout<<"D";
//     }
//     else if(marks <= 59){
//         cout<<"C";
//     }
//     else if(marks <= 79){
//         cout<<"B";
//     }
//     else if(marks <= 100){
//         cout<<"A";
//     }
//     return 0;
// }

int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age < 18){
        cout<<"not eligible for job";
    }
    else if(age <= 57){
        cout<<"eligible for job";
        if(age <= 55){
            cout<<", but retirement soon.";
        }
    }
    else{
        cout<<"retirement time";
    }
    return 0;
}