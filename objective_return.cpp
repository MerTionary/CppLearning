#include <iostream>
using namespace std;
struct Data{
    Data() {cout<<"Constructor"<<endl;} //构造函数
    Data(const Data &){cout<<"copy Constructor"<<endl;} //拷贝构造函数
    ~Data() {cout<<"destroy"<<endl;} //析构函数
};
Data fun(){
    Data t1; //函数内生成一个临时的局部对象
    cout<<"&t1 is "<<&t1<<endl;
    return t1; //返回临时对象
}
int main(){
    fun(); //注意，函数外并没有变量，并没有接受这个函数的返回值
    cout<<"This is a test!"<<endl;
    return 0;
}


// Constructor
// &t1 is 0x7ffeaf3d693f
// copy Constructor
// destroy
// destroy
// This is a test!

// Constructor
// &t1 is 0x7ff7bde062e8
// destroy
// This is a test!

// int main(){
//     Data t2 = fun(); //注意，函数外并没有变量，并没有接受这个函数的返回值
//     cout<<"&t2 "<< &t2 <<endl;
//     cout<<"This is a test!"<<endl;
//     return 0;
// }