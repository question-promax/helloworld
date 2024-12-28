#include "teacher.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name, acc, tel, post, title, sex;
    float wage;
    int age;
    cin >> name >> age >> sex >> title >> acc >> tel >> post >> wage;
    teacher_carde a(name, age, sex, acc, tel, title, post, wage);
    a.show();
    return 0;
}