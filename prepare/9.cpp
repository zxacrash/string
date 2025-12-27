#include <bits/stdc++.h>
using namespace std;

struct Student {
    string lastName;
    string firstName;
    double gpa;
};

// Function to convert grade to numeric value
double gradeToValue(const string& grade) {
    map<string, double> gradeMap = {
        {"A+", 4.00}, {"A", 3.75}, {"B+", 3.50}, {"B", 3.00},
        {"C+", 2.50}, {"C", 2.00}, {"D+", 1.50}, {"D", 1.00},
        {"F", 0.00}
    };
    return gradeMap[grade];
}

// Custom comparator for sorting
bool compareStudents(const Student& a, const Student& b) {
    // First by GPA (descending)
    if (abs(a.gpa - b.gpa) > 1e-9) {
        return a.gpa > b.gpa;
    }
    // If GPA equal, by lastname (ascending)
    if (a.lastName != b.lastName) {
        return a.lastName < b.lastName;
    }
    // If lastname equal, by firstname (ascending)
    return a.firstName < b.firstName;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<Student> students;
    
    for (int i = 0; i < n; i++) {
        string lastName, firstName;
        int m;
        cin >> lastName >> firstName >> m;
        
        double totalGradePoints = 0.0;
        int totalCredits = 0;
        
        for (int j = 0; j < m; j++) {
            string grade;
            int credits;
            cin >> grade >> credits;
            
            totalGradePoints += gradeToValue(grade) * credits;
            totalCredits += credits;
        }
        
        double gpa = totalCredits > 0 ? totalGradePoints / totalCredits : 0.0;
        students.push_back({lastName, firstName, gpa});
    }
    
    // Sort using custom comparator
    sort(students.begin(), students.end(), compareStudents);
    
    // Output
    cout << fixed << setprecision(3);
    for (const auto& student : students) {
        cout << student.lastName << " " << student.firstName << " " << student.gpa << "\n";
    }
    
    return 0;
}