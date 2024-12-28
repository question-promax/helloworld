#include "teacher.h"
#include <iostream>
using namespace std;
teacher::teacher(string name, int age, string sex, string acc, string tel, string title) :
    name(name), age(age), sex(sex), acc(acc), tel(tel), title(title) {}
void teacher::display()
{
    std::cout << name << " " << age << " " << sex << " " << title << " " << acc << " " << tel << " ";
}
carde::carde(string name, int age, string sex, string acc, string tel, string post) :
    name(name), age(age), sex(sex), acc(acc), tel(tel), post(post) {}
teacher_carde::teacher_carde(string name, int age, string sex, string acc, string tel, string title, string post, float wage) :
    teacher(name, age, sex, acc, tel, title), carde(name, age, sex, acc, tel, post), wage(wage) {}
void teacher_carde::show() {
    display();
    std::cout << post << " " << wage;
}