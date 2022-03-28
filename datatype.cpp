#include <iostream>
using namespace std;
int main() {
    int a = 125;
    cout << a <<endl;

    char p = 'T';
    cout << p <<endl;

    float f = 1.25;
    cout << f <<endl;

    double d = 1.237;
    cout << d <<endl;

    int s = sizeof(a);
    cout << "Size of a is " << s <<endl;

    int k = 'a';
    cout << k << endl;

    char ch = 99;
    cout << ch << endl;

    // Putting the character value more than max value //
    // char ch1 = 123456;
    // cout << ch1 << endl;

    // Unsigned INT//
    unsigned int a1 = 158;
    cout << a1 << endl;

    unsigned int a2 = -158; // Huge number will appear, coz '1' of intial bits will not treated for -ve, the whole binary will be converted into an integr //
    cout << a2 << endl;
}