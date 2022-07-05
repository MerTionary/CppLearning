#include<iostream>
using namespace std;

class Student {
    public:
        char *name;
        int age;
        float score;

        void say() {
            cout << name << "的年龄：" << age << endl;
        }
};

int main() {
    class Student stu1;
    Student stu2;
    stu1.name = "yanzhipeng";
    stu1.say();
}