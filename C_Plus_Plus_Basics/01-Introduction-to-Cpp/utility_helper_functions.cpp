#include <iostream>
#include <algorithm> 

using namespace std;

int main() {
    // Optimization: Fast I/O for competitive programming standards
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num1, num2;
    cout << "Enter two numbers: ";
    
    if (!(cin >> num1 >> num2)) {
        cout << "Invalid input! Please enter integers." << endl;
        return 1;
    }

    // Using STL functions - Clean and Efficient
    cout << "Minimum: " << min(num1, num2) << "\n";
    cout << "Maximum: " << max(num1, num2) << "\n";

    // Swapping
    swap(num1, num2);
    cout << "After swapping: " << num1 << " " << num2 << "\n";

    return 0;
}