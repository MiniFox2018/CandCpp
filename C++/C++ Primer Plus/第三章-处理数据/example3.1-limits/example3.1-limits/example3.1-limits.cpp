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
//1.1不同C++整型使用不同的内存量来存储整数。使用的内存量越大，可以表示的整数值范围也越大。
//1.1另外，有的类型（符号类型）可表示正值和负值，而有的类型（无符号类型）不能表示负值
//1.1术语宽度（width）用于描述存储整数时使用的内存量。使用的内存越多，则越宽。
//1.1C++的基本整型（按宽度递增的顺序排列）分别是char、short、int、long和C++11新增的long long，其中每种类型都有符号版本和无符号版本，因此总共有10种类型可供选择
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
//3.1简单的变量命名规则
//在名称中只能使用字母字符、数字和下划线（_）。
//名称的第一个字符不能是数字。
//区分大写字符与小写字符。
//不能将C++关键字用作名称。
//以两个下划线或下划线和大写字母打头的名称被保留给实现（编译器及其使用的资源）使用。
//以一个下划线开头的名称被保留给实现，用作全局标识符。
//C++对于名称的长度没有限制，名称中所有的字符都有意义，但有些平台有长度限制。(C 前63字符有意义）

//tips1:使用像_time_stop或_Donut这样的名称不会导致编译器错误，而会导致行为的不确定性。换句话说，不知道结果将是什么。不出现编译器错误的原因是，这样的名称不是非法的，但要留给实现使用。全局名称指的是名称被声明的位置
//tips2:如果想用两个或更多的单词组成一个名称，通常的做法是用下划线字符将单词分开，如my_onions；或者从第二个单词开始将每个单词的第一个字母大写

//计算机内存的基本单元是位（bit）。可以将位看作电子开关，可以开，也可以关。关表示值0，开表示值1
//  short至少16位；
//  int至少与short一样长；
//  long至少32位，且至少与int一样长；
//  long long至少64位，且至少与long一样长。
//字节（byte）通常指的是8位的内存单元
//在美国，基本字符集通常是ASCII和EBCDIC字符集，它们都可以用8位来容纳，所以在使用这两种字符集的系统中，C++字节通常包含8位。然而，国际编程可能需要使用更大的字符集，如Unicode，因此有些实现可能使用16位甚至32位的字节

//1.关于初始化的问题
//1.1除去常见初始化，C++还有另一种C语言没有的初始化语法：int wrens（432）；
//1.2还有另一种初始化方式，这种方式用于数组和结构，但在C++98中，也可用于单值变量：int hambugers={24}；
//1.2将大括号初始化器用于单值变量的情形还不多，但C++11标准使得这种情形更多了。首先，采用这种方式时，可以使用等号（=），也可以不使用
//1.2其次，大括号内可以不包含任何东西。在这种情况下，变量将被初始化为零
//1.2第三，这有助于更好地防范类型转换错误