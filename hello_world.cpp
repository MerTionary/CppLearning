#include<iostream>
using namespace std;
// #include <stdio.h>
//通过class关键字类定义类
class Student{
public:
    //类包含的变量
    int age;
    float score;
    std::string name;
    //类包含的函数
    void say(){
        printf("%s的年龄是 %d, 成绩是 %f\n", name.c_str(), age, score);
    }
};

// main函数是C++程序的入口，每个C++程序必须要有一个main函数。
// main函数必须返回int值。如果没有明确写出，默认返回0。
// (1)没有参数 int main(){}
// (2)只有一个参数 int main(int argc){}
// (3)有两个参数，第二个参数以字符串指针数组形式表示 int main(int argc, char* argv[]){}
// (4)有两个参数，第二个参数以指向字符串指针的形式表示 int main(int argc, char** argv){}

int main(){
    int size = sizeof(1);
    printf("1 = %d", size);
    // printf(size); 直接输出是不行的，必须在字符串中作占位符

    //通过类来定义变量，即创建对象
    class Student stu1;  //也可以省略关键字class
    //为类的成员变量赋值
    stu1.name = "小明";
    stu1.age = 15;
    stu1.score = 92.5111f;
    //调用类的成员函数
    stu1.say();
    size = sizeof(stu1.name);
    std::cout<< "size=" << size << std::endl;
    
    // static int val1;
    // const int val2 = 0; // const必须在声明时初始化
    // int val3;
    // scanf("与运算符%d", &a);
    // cin >> a;
    // cout << "static int val = " << val1 << endl;
    // cout << "const int val = " << val2 << endl;
    // cout << "int val3 = " << val3 << endl;
    int val = -5;
    int *ptr = &val;
    int **pptr = &ptr;
    int &ref1 = val;
    int &ref2 = *ptr;

    cout << "val= " << val << endl;
    cout << "&ref1 = " << ref1 << endl;
    cout << "&ref2 = " << ref2 << endl;
    cout << "&val = " << &val << endl;
    cout << "ptr = " << ptr << endl;
    cout << "*ptr = " << *ptr << endl;
    cout << "*&val = " << *&val << endl;
    cout << "&ptr = " << &ptr << endl;
    printf("\n");
    cout << "pptr = " << pptr << endl;
    cout << "*pptr = " << *pptr << endl;
    printf("\n\n\n");
    **pptr = -1;
    cout << "ptr = " << ptr << "A" << endl;
    cout << "*ptr = " << *ptr << "B" << endl;
    cout << "&ptr = " << &ptr << "C" << endl;
    printf("\n");
    cout << "pptr = " << pptr << "C" << endl;
    cout << "*pptr = " << *pptr << "A" << endl;
    cout << "**pptr = " << **pptr << "B" << endl;
    cout << "&pptr = " << &pptr << "D" << endl;
    cout << "*&pptr = " << *&pptr << "C" << endl;
    printf("\n");
    cout << "val = " << val << "B" << endl;
    cout << "&val = " << &val << "A" << endl;
    cout << "*&val = " << *&val << "B" << endl;
    printf("\n");
    // int &ref3 = ptr;
    // cout << "*&val = " << *&val << "B" << endl;
    return 0;
}