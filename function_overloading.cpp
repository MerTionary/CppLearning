#include<iostream>
using namespace std;

extern int value = 17;

//交换 int 变量的值的函数
 void Swap(int* a, int*b) {
    // 函数定义，函数的传参是两个指针类型变量，也就是传入了两个地址
    int tmp = *a; //取出地址存的val，*&m=99
    // cout << "tmp=" << tmp << endl;
    *a = *b;
    *b = tmp;
 }

//交换 float 变量的值
void Swap(float *a, float *b){
    float tmp = *a;
    *a = *b;
    *b = tmp;
}


 int main() {
    int m = 99;
    int n = -100;
    cout << "&m=" << &m << endl;
    cout << "&n=" << &n << endl;
    // 传入两个引用变量，即传入两个地址
    Swap(&m, &n);
    cout << "m=" << m << endl;
    cout << "n=" << n << endl;
    cout << "&m=" << &m << endl;
    cout << "&n=" << &n << endl;

    // while(count--)
    // {
    //    func();
    // }
    // return 0;
 }

// // 函数声明 
// void func(void);

// // 函数定义
// void func( void )
// {
//     static int i = 5; // 局部静态变量
//     i++;
//     std::cout << "变量 i 为 " << i ;
//     std::cout << " , 变量 count 为 " << count << std::endl;
// }
