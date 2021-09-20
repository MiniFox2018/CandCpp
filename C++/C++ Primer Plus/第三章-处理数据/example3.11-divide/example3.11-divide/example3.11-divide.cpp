//除法运算
#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Integer division: 9/5 = " << 9 / 5 << endl;
    cout << "Floating-point division: 9.0/5.0 = ";
    cout << 9.0 / 5.0 << endl;
    cout << "Mixed division: 9.0/5 = " << 9.0 / 5 << endl;
    cout << "double constants: 1e7/9.0 = ";
    cout << 1.e7 / 9.0 << endl;
    cout << "float constants: 1e7f/9.0f = ";
    cout << 1.e7f / 9.0f << endl;
    // cin.get();
    return 0;
}
/*
1.除法运算符（/）的行为取决于操作数的类型。
如果两个操作数都是整数，则C++将执行整数除法。这意味着结果的小数部分将被丢弃，使得最后的结果是一个整数。
如果其中有一个（或两个）操作数是浮点值，则小数部分将保留，结果为浮点数
2.  对不同类型进行运算时，C++将把它们全部转换为同一类型。
    如果两个操作数都是double类型，则结果为double类型；
    如果两个操作数都是float类型，则结果为float类型。
    浮点常量在默认情况下为double类型。

*/
