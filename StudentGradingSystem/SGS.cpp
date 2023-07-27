#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Student {
    string name;
    int score;
};

int main() {
    vector<Student> students;
    int numStudents;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; i++) {
        Student student;
        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> student.name;
        cout << "Enter the score of student " << i + 1 << ": ";
        cin >> student.score;
        students.push_back(student);
    }

    // Calculate the average score
    int totalScore = 0;
    for (const auto& student : students) {
        totalScore += student.score;
    }
    double averageScore = static_cast<double>(totalScore) / students.size();

    // Display the student information and average score
    cout << "\nStudent Information:\n";
    for (const auto& student : students) {
        cout << "Name: " << student.name << ", Score: " << student.score << endl;
    }
    cout << "Average Score: " << averageScore << endl;

    return 0;
}
