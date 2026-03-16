#include<iostream>
using namespace std;
int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    switch (a % 2) { // a % 2 will give 0 for even and 1 for odd
        case 0:
            cout << "Even" << endl;
            break; // break is necessary to prevent fall-through
        case 1:
            cout << "Odd" << endl;
            break;
        default:
            cout << "Invalid input!" << endl; // This case will never be hit for integers, but it's good practice to have a default case.
   
}
char b;
cout << "Enter a character: ";
cin >> b;
switch (b) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout << "Vowel" << endl;
        break;
    default:
        cout << "Consonant" << endl;
}
char c;
cout << "Enter a character: ";
cin >> c;
switch(c){
    case 'A':
    cout<<"Excellent"<<endl;
                break;
    case 'B':
    cout<<"Good"<<endl;
        break;
    case 'C':
        cout<<"Average"<<endl;
        break;
        default:
        cout<<"Invalid grade!"<<endl;
}
return 0;
} 
