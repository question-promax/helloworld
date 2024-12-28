#pragma once
#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

class Student
{
    private:
    int ID;
    string Name;
    double CPluseScore;
    double AMathScore; 
    double CEngScore; 
    double maxScore;
    double avgScore;
    public:
    Student(int id, string name, double cpluse, double amath, double cenglish);
    void max();
    void avg();
    double getMaxScore() const;  
    double getAverageScore() const; 
};

#endif