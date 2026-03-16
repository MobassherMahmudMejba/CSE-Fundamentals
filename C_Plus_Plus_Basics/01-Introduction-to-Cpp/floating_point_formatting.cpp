#include<iostream>
#include<iomanip> // for setprecision
using namespace std;
int main() {
    double pi = 3.14159265358979323846;

    cout << "Default precision: " << pi << endl;

    // Set precision to 2 decimal places
    cout << fixed << setprecision(2)<< "Pi with 2 decimal places: " << pi << endl;;
    

    // Set precision to 4 decimal places
    cout << setprecision(4);
    cout << "Pi with 4 decimal places: " << pi << endl;

    // Set precision to 6 decimal places
    cout << setprecision(6);
    cout << "Pi with 6 decimal places: " << pi << endl;

    return 0;
}
