#include<iostream>
using namespace std;

// 预处理器 #define identifier value
# define WIDTH 1080;

// 全局静态变量
static int var1 = 0;

int value;

int main() {
    cout << "value=" << value << endl;
    // 局部静态变量
    // 因此，使用 static 修饰局部变量可以在函数调用之间保持局部变量的值。
    static int var2 = 1;

    var1--;
    var2++;
    cout << "全局静态变量=" << var1 << endl;
    cout << "局部静态变量=" << var2 << endl;

    // const常量 const type varibale = type;
    const int HEIGHT = 1090;

    // 字符常量
    char ch1 = L'x'; //宽字符常量，必须存储在wchar_t类型的变量中
    char ch2 = 'X';
    char ch3 = '\r';
    // char ch4 = '\u02C0';

    // 字符串常量
    string str = "这是一个string";

    cout << "WIDTH";
    cout << WIDTH;
    cout << "\a" << endl;
    cout << "HEIGHT" << HEIGHT << endl;
    printf("\t%s\n", str.c_str());
    cout << "\r" << str << endl;

    // 整数常量
    int a = 85;         // 十进制
    int b = 0213;       // 八进制 
    int c = 0x4b;       // 十六进制 
    int d = 30;         // 整数 
    int e = 30u;        // 无符号整数 
    int f = 30l;        // 长整数 
    int g = 30ul;       // 无符号长整数

    // 整数常量
    float h = 3.14159;       // 合法的 
    float i = 314159E-5L;    // 合法的 
    //float j = 510E;          // 非法的：不完整的指数
    //float k = 210f;          // 非法的：没有小数或指数
    //float l = .e55;          // 非法的：缺少整数或分数


    return 0;
}