#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of courses: ";
    cin >> n;

    float grade, credit;
    float totalCredits = 0, totalPoints = 0;

    for(int i = 0; i < n; i++) {
        cout << "\nCourse " << i+1 << endl;
        cout << "Enter grade: ";
        cin >> grade;
        cout << "Enter credit hours: ";
        cin >> credit;

        totalCredits += credit;
        totalPoints += grade * credit;
    }

    float cgpa = totalPoints / totalCredits;

    cout << "\nTotal Credits: " << totalCredits << endl;
    cout << "CGPA: " << cgpa << endl;

    return 0;
}