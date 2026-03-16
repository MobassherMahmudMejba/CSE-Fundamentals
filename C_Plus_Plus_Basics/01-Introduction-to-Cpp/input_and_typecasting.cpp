#include <iostream>
#include <string> // string ব্যবহারের জন্য এটি দেওয়া ভালো

using namespace std;

int main() {
    // ১. Integer Input
    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << "You entered: " << a << endl;

    // ২. Character Input
    char b;
    cout << "Enter a character: ";
    cin >> b; 
    cout << "You entered: " << b << endl;

    // বাফার পরিষ্কার করা যাতে পরের স্ট্রিং ইনপুটে সমস্যা না হয়
    cin.ignore(); 

    // ৩. String Input (With Spaces)
    cout << "Enter a string: ";
    string c;
    getline(cin, c); // এখন Mejba Ahmed লিখলেও পুরোটা নিবে
    cout << "You entered: " << c << endl;

    // ৪. Character to ASCII
    cout << "Enter a character to see ASCII: ";
    char d;
    cin >> d;
    cout << "You entered: " << d << " Which ASCII value is: " << (int)d << endl;

    // ৫. Number to Character
    int k;
    cout << "Enter a number (ASCII code): ";
    cin >> k;
    cout << "You entered: " << k << " Which is equivalent to character: " << (char)k << endl;

    cout << "Program ended successfully." << endl;
    return 0;
}