#ifndef TEACHER_H
#define TEACHER_H
#include <string>
using namespace std;
class teacher {
private:
    string name,sex,acc,tel,title;
    int age;
public:
    teacher(string name, int age, string sex, string acc, string tel, string title);
    void display();
};
class carde {
private:
    string name,sex,acc,tel;
    int age;
protected:
    string post;
public:
    carde(string name, int age, string sex, string acc, string tel, string post);
};
class teacher_carde : protected teacher, protected carde {
public:
    teacher_carde(string name, int age, string sex, string acc, string tel, string title, string post, float wage);
    void show();
private:
    float wage;
};
#endif
