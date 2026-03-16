#include <iostream>
using namespace std;

int main() {
int score;
int total_students = 0;
int sum = 0;
int max_score = -1;

cout << "Input students' marks (in Linux, press CTRL+D after input): \n";

// EOF logic: The loop will continue as long as valid input is received.
// Whenever you press CTRL+D (EOF), 'cin >> score' will return false.
while (cin >> score) {
sum += score;
total_students++;

// Track highest marks
if (score > max_score) {
max_score = score;
}
}

// Result after data processing
if (total_students > 0) {
double average = (double)sum / total_students;
cout << "\n--- Data Processing Complete ---" << endl;
cout << "Total Students: " << total_students << endl;
cout << "Average Score: " << average << endl;
cout << "Highest Score: " << max_score << endl;
} else {
cout << "\nNo data given bro! No cheating." << endl;
}

return 0;
}