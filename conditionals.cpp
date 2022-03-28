// To check whether number is positive or not!
// #include <iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter a Number";
//     cin>>num;
    
//     if (num>0){
//         cout<<"Number is positive";
//     }
//     else if (num<0){
//         cout<<"Number is negative";
//     }
//     else{
//         cout<<"Number is Zero";
//     }
// }

// To Print maximum of two numbers!
#include <iostream>
using namespace std;
int main(){
    int first;
    cout<<"Enter first number";
    cin>>first;
    int second;
    cout<<"Enter second number";
    cin>>second;

    if (first>second){
        cout<<first<<"is greater";
    }
    else if(second>first){
        cout<<second<<"is greater";
    }
    else{
        cout<<"Both are equal";
    }
}

