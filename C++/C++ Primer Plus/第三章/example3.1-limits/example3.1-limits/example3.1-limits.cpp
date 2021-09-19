#include <iostream>
#include <climits>              // 可以使用limits.h于老系统里面
int main()
{
    using namespace std;
    int n_int = INT_MAX;        // initialize n_int to max int value
    short n_short = SHRT_MAX;   // symbols defined in climits file
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    // sizeof运算符返回类型或变量的长度，单位为字节
    cout << "int is " << sizeof(int) << " bytes." << endl;
    cout << "short is " << sizeof n_short << " bytes." << endl;
    cout << "long is " << sizeof n_long << " bytes." << endl;
    cout << "long long is " << sizeof n_llong << " bytes." << endl;
    cout << endl;
    //对类型名（如int）使用sizeof运算符时，应将名称放在括号中；但对变量名（如n_short）使用该运算符，括号是可选的：

    cout << "Maximum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl << endl;

    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;
    // cin.get();
    return 0;
}
//1.1头文件climits中包含了关于整型限制的信息。
//1.1具体地说，它定义了表示各种限制的符号名称。
//1.1例如，INT_MAX为int的最大取值，CHAR_BIT为字节的位数。
//2.1climits中的符号常量:
//CHAR_BIT:     char的位数
//CHAR_MAX:     char的最大值
//CHAR_MIN:     char的最小值
//SCHAR_MAX:    signed char的最大值
//SCHAR_MIN:    signed char的最小值
//UCHAR_MAX:    unsigned char的最大值
//SHRT_MAX:     short的最大值
//SHRT_MIN:     short的最小值
//USHRT_MAX:    unsigned short的最大值
//INT_MAX:      int的最大值
//INT_MIN:      int的最小值
//UNIT_MAX:     unsigned int的最大值
//LONG_MAX:     long的最大值
//LONG_MIN:     long的最小值
// ULONG_MAX:   unsigned long的最大值
//LLONG_MAX:    long long的最大值
//LLONG_MIN:    long long的最小值
//ULLONG_MAX:   unsigned long long的最大值