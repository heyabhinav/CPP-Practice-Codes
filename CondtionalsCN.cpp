// #include <iostream>
// using namespace std;

// int main() {
// 	char CapAlpha[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
// 	char SmallAlpha[26] = {'a','b','c','d','e','f','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    
//     char ch;
//     cout<<"Enter any Character";
//     cin>>ch;

//     if (ch==CapAlpha){
//         cout<<1<<endl;
//     }
//     else if (ch==SmallAlpha){
//         cout<<0<<endl;
//     }
//     else{
//         cout<<-1<<endl;
//     }
// }


#include<iostream>
using namespace std;
int main()
{
    char ch;
    int ascii;
    cout<<"Enter a Character: ";
    cin>>ch;
    ascii = ch;
    cout<<endl;
    if(ascii>=65 && ascii<=90)
        cout<<1;
    else if(ascii>=97 && ascii<=122)
        cout<<0;
    else
        cout<<-1;
    return 0;
}