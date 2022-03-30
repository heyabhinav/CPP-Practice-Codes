// To Print maximum of two numbers!
#include <iostream>
using namespace std;
int main(){
    int first_number, second_number;
    cout << "Enter two numbers separated by space : " << endl;
    cin >> first_number >> second_number;
    
    if (first_number > second_number){
        cout << "First number is greater than second number.";
    }
    else if(second_number > first_number){
        cout << "Second number is greater than first number.";
    }
    else{
        cout << "Both numbers are equal.";
    }
    return 0;
}


