#include <iostream>
using namespace std;
 
#include <iomanip>
using std::setw;
 
// int main ()
// {
//    int n[ 10 ]; // n 是一个包含 10 个整数的数组
 
//    // 初始化数组元素          
//    for ( int i = 0; i < 10; i++ )
//    {
//       n[ i ] = i + 100; // 设置元素 i 为 i + 100
//    }
//    cout << "Element" << setw( 13 ) << "Value" << endl;
 
//    // 输出数组中每个元素的值                     
//    for ( int j = 0; j < 10; j++ )
//    {
//       cout << setw( 7 )<< j << setw( 13 ) << n[ j ] << endl;
//    }
 
//     int *ptr1;
//     int *ptr2;
//     int oneArray[10];
//     ptr1 = oneArray;
//     ptr2 = &oneArray[0];

//     cout << (ptr1 == ptr2) << endl;
//     cout << "oneArray:" << oneArray << endl;
//     cout << "&oneArray[0]:" << &oneArray[0] << endl;
//     cout << "&oneArray:" << &oneArray << endl;
//    return 0;
// }

// 函数定义
double getAverage(int * arr, int size) {
  int i, sum = 0;       
  double avg;          
 
  for (i = 0; i < size; ++i) {
    sum += arr[i];
   }
 
  avg = double(sum) / size;
 
  return avg;
}

// 函数声明
double getAverage(int arr[], int size);
 
int main () {
   // 带有 5 个元素的整型数组
   int balance[5] = {1000, 2, 3, 17, 50};
   double avg;
 
   // 传递一个指向数组的指针作为参数
   avg = getAverage(balance, 5);
   avg = getAverage(&balance[0], 5);
//    avg = getAverage(balance, 5);
 
   // 输出返回值
   cout << "平均值是：" << avg << endl; 
    
   return 0;
}



// #include <iostream>
// #include <cstdlib>
// #include <ctime>
 
// using namespace std;
 
// // 要生成和返回随机数的函数
// int * getRandom( )
// {
//   static int  r[10];
 
//   // 设置种子
//   srand( (unsigned)time( NULL ) );
//   for (int i = 0; i < 10; ++i)
//   {
//     r[i] = rand();
//     cout << r[i] << endl;
//   }
 
//   return r;
// }
 
// // 要调用上面定义函数的主函数
// int main ()
// {
//    // 一个指向整数的指针
//    int *p;
 
//    p = getRandom();
//    for ( int i = 0; i < 10; i++ )
//    {
//        cout << "*(p + " << i << ") : ";
//        cout << *(p + i) << "  " << p[i] << "  " << endl;
//    }
 
//    return 0;
// }