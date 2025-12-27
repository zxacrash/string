#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Student {
    int weeklyGrades[15];
    int finalExam;
    int total;
    string letterGrade;
};

string getLetterGrade(int score) {
    if (score >= 95) return "A";
    if (score >= 90) return "A-";
    if (score >= 85) return "B+";
    if (score >= 80) return "B";
    if (score >= 75) return "B-";
    if (score >= 70) return "C+";
    if (score >= 65) return "C";
    if (score >= 60) return "C-";
    if (score >= 55) return "D+";
    if (score >= 50) return "D";
    return "F";
}

int main() {
    int n;
    cin >> n;
    
    vector<Student> students(n);
    
    for (int i = 0; i < n; i++) {
        int weeklySum = 0;
        for (int j = 0; j < 15; j++) {
            cin >> students[i].weeklyGrades[j];
            weeklySum += students[i].weeklyGrades[j];
        }
        cin >> students[i].finalExam;
        
        students[i].total = weeklySum + students[i].finalExam;
        students[i].letterGrade = getLetterGrade(students[i].total);
    }
    
    for (int i = 0; i < n; i++) {
        cout << "Student grade: " << students[i].letterGrade << endl;
    }
    
    return 0;
}