#include "student.h" 
#include <iomanip> 
#include <stdio.h>
using namespace std;

double getmax_average(Student* stu, int n);
double getaverage(Student* stu, int n);


int main() {
    Student stu[5] = {Student(1001,"Kim",99,95,97),Student(1002,"Sam",89,78,85),Student(1003,"Tim",90,95,97),Student(1004,"Kathy",60,53,70),Student(1005,"Jane",70,89,63)};
    for (int i = 0; i < 5; i++) {
        stu[i].max();
        stu[i].avg();
    }
    printf("%.1f\n %.1f\n", getmax_average(stu, 5), getaverage(stu, 5));
    return 0;
}

double getmax_average(Student* stu, int n) {
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += stu[i].getMaxScore();
    return (sum / n);
}

double getaverage(Student* stu, int n) {
    double total = 0;
    for (int i = 0; i < n; i++)
        total += stu[i].getAverageScore();
    return (total / n);
}