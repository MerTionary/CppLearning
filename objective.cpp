#include<iostream>
using namespace std;
class Data {
    public:
        int property;
        string str;
        void setProperty(int p);
        void setStr(string q);
        void printData(){
            cout << " Data.property = " << property << ", string = " << str << "\n" << endl;
        }
};
void Data::setProperty(int p) {
    property = p;
};
void  Data::setStr(string q) {
    str = q;
};


Data calcFunc0(Data data, int num, string str) {
    // 传入对象，传入的是对象的副本
    cout << " 0 data, &data = " << &data << endl;
    data.setProperty(num);
    data.setStr(str);
    return data;
};

void calcFunc1(Data* data, int num, string str) {
    cout << " 1 *data, data = " << data << endl;
    data -> setProperty(num);
    data -> setStr(str);
};

void calcFunc2(Data& data, int num, string str) {
    cout << " 2 &data, &data = " << &data << endl;
    data.setProperty(num);
    data.setStr(str);
};

void calcFunc3(Data* data, int num, string str) {
    cout << " 3 *data, data = " << data << endl;
    (*data).setProperty(num);
    (*data).setStr(str);
};


Data* calcFunc4(Data* data) {
    data -> property = -1;
    data -> setStr("字符串-1.0");
    return data;// 入参是指针，返回也是该指针，同一个
};


//（1）如果方法或函数要返回局部对象，则应返回对象，而不是指向对象的引用，这种情况下将使用复制构造函数来生成返回的对象。
    //如果被返回的对象是被调用函数中的局部变量，则不应按引用方式返回它，因为在被调用函数执行完毕时，局部变量将调用析构函数进行资源释放；
    //因此当控制权回到调用函数时，引用指向的对象将不再存在。这种情况下应返回对象而不是引用。
//（2）如果方法或函数要返回一个没有公有复制构造函数的类的对象，它必须返回一个指向这种对象的引用。
//（3）既可以返回对象，又可以返回引用的函数，首选返回指向对象的引用，因为其效率更高。
Data calcFunc5() {
    Data new_obj_5;
    new_obj_5.property = -2;
    new_obj_5.setStr("字符串-2.0");
    new_obj_5.printData();
    cout << " 5 &new_obj_5 =" <<  &new_obj_5 << endl;
    return new_obj_5;
};

Data* calcFunc6() {
    Data new_obj_6;
    new_obj_6.property = -3;
    new_obj_6.setStr("字符串-3.0");
    new_obj_6.printData();
    cout << " 6 &new_obj_6 =" <<  &new_obj_6 << endl;
    return &new_obj_6; // 虽然返回了局部对象的地址，但是仅仅是地址，函数返回后已经没了
};

// 形参是指针变量(Data* obj)时，调用指针要不obj -> xxx，要不 (*obj).xx，进展直接obj.xx
// void calcFunc3(Data* data, int num, string str) {
//     cout << " *data, data = " << data << endl;
//     data.setProperty(num);
//     data.setStr(str);
// };


int main() {
    Data obj;
    cout << " obj's address=" << &obj << endl;
    obj.property = 21;
    obj.setStr("字符串1.0");

    cout << " obj.property=" <<  obj.property << endl;
    obj.printData();

    calcFunc0(obj, 20, "字符串0.0");
    obj.printData();


    calcFunc1(&obj, 22, "字符串2.0");
    obj.printData();

    calcFunc2(obj, 23, "字符串3.0");
    obj.printData();

    calcFunc3(&obj, 24, "字符串4.0");
    obj.printData();


    Data* ptr = &obj;
    cout << "\n ptr =" << ptr << endl;
    // cout << "*ptr =" << *ptr << endl;
    cout << " &ptr =" << &ptr << endl;
    calcFunc1(ptr, 25, "字符串5.0");
    obj.printData();

    calcFunc2(*ptr, 26, "字符串6.0");
    obj.printData();

    calcFunc3(ptr, 27, "字符串7.0");
    obj.printData();

    Data* obj_4 = calcFunc4(ptr);
    obj_4 -> printData();
    cout << " obj_4 =" << obj_4 << endl;

    Data obj_5 = calcFunc5();
    obj_5.printData();
    cout << " &obj_5 =" << &obj_5 << endl;


    cout << "--1--" << endl;
    Data* obj_6;
    cout << " obj_6 =" << obj_6 << endl;
    cout << "--2--" << endl;

    obj_6 = calcFunc6();
    cout << " obj_6 =" << obj_6 << endl;
    cout << "--3--" << endl;

    obj_6 -> printData();
    cout << "--4--" << endl;
    
}