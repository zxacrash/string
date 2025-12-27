#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

double calculateGradePoint(int att1, int att2, int final) {
    int total = att1 + att2 + final;
    
    if ((att1 + att2) < 30 || final < 20) {
        return 0.0;
    }
    
    if (total < 50) {
        return 0.0;
    }
    
    int pointsAbove50 = total - 50;
    int increments = pointsAbove50 / 5;
    double gradePoint = 1.0 + (increments * (1.0 / 3.0));
    
    if (gradePoint > 4.0) {
        return 4.0;
    }
    
    return gradePoint;
}

int main() {
    int n;
    cin >> n;
    
    double totalGradePoints = 0.0;
    int totalCredits = 0;
    
    for (int i = 0; i < n; i++) {
        int att1, att2, final, credits;
        cin >> att1 >> att2 >> final >> credits;
        
        double gradePoint = calculateGradePoint(att1, att2, final);
        totalGradePoints += gradePoint * credits;
        totalCredits += credits;
    }
    
    double gpa = (totalCredits > 0) ? totalGradePoints / totalCredits : 0.0;
    cout << fixed << setprecision(6) << gpa << endl;
    
    return 0;
}