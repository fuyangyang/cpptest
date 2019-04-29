// c++创建对象的两种方式
// Created by fuyangyang on 2018/7/10.
//

#include <stdio.h>
#include <iostream>

using namespace std;

class Student {
public:
    int name;
    int age;
    string sex;
    Student() {

    }

    Student(int name_, int age_) {
        name = name_;
        age = age_;
    }
};


int main() {
    Student *stu = new Student();
    cout << "dsaf" << endl;
    cout << stu->age << endl;
    delete stu;

    Student stu2;
    cout << stu2.name << endl;
    cout << stu2.age << endl;
    cout << stu2.sex << endl;

    Student stu3(2, 4);
    cout << stu3.name << endl;
    cout << stu3.age << endl;
    cout << stu3.sex << endl;
}