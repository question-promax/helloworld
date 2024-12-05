//位字段

#include<iostream>
#include<string>

using namespace std;

string Students [] = { };



struct Student {
    string name;
    unsigned int age : 7;// 使得age长度为7bits      •节省空间，age只可能取值1-120，7bits足够 •调整成员顺序可以让结构更紧凑 •每个位段都可以当作一个无符号整型数使用 •表达范围当然受限，而且当然不能取地址
    string sex;
    int id;
};

int main() 
{
    Student stu1;
    stu1.name = "Alice";
    stu1.age = 18;
    stu1.sex = "Female";
    stu1.id = 12345678;
    
    Student stu2;
    stu2.name = "Bob";
    stu2.age = 20;
    stu2.sex = "Male";
    stu2.id = 87654321;





    cout << "Name: " << stu1.name << endl;
    cout << "Age: " << stu1.age << endl;
    cout << "Sex: " << stu1.sex << endl;
    cout << "ID: " << stu1.id << endl;
    
    return 0;
}