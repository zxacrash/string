#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
    #include <iomanip>
using namespace std;

struct student{
    string name;
    int id;
    double grade;
};
bool compartor (student a, student b){
         if (a.grade > b.grade) return a.grade < b.grade;
         else if (a.grade < b.grade) return a.grade < b.grade;
}   
int main() {
    int a;
    vector <student> pl;
    cin>>a;
    for (int i =0 ;i<a; i++){
        int id;
        string name;
        double avg = 0;
        cin>>id>>name;
        for (int j =0; j<3; j++) {
            double bal;
            cin>>bal;
            avg+=bal;
        }
        avg = avg/3;
        student a;
        a.id = id;
        a.name = name;
        a.grade = avg;
        pl.push_back(a);
    }
    double max;
    for (const auto& e : pl){
        if (e.grade>max){
            max = e.grade;
        }
        cout<<e.id<<" "<<e.name<<": "<<"Average="<<setprecision(6)<<e.grade<<endl;
    }
    for (const auto& e : pl){
        if (e.grade == max){
                cout<<"The best student: "<<e.name<<" with the average grade of "<<setprecision(4)<<e.grade;
                break;

        }
    }
    return 0;
}