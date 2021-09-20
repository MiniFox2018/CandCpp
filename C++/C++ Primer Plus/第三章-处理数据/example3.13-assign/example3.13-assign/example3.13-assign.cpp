// 类型转换
#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tree = 3;     // int converted to float
    int guess = 3.9832; // float converted to int
    int debt = 7.2E12;  // result not defined in C++
    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;
    // cin.get();
    return 0;
}
/*
类型转换的一些规则
1.初始化和赋值进行的转换
    1.1C++允许将一种类型的值赋给另一种类型的变量。这样做时，值将被转换为接收变量的类型
    1.2然而，将一个很大的long值（如2111222333）赋给float变量将降低精度。因为float只有6位有效数字，因此这个值将被四舍五入为2.11122E9。因此，有些转换是安全的，有些则会带来麻烦
    1.3将浮点型转换为整型时，C++采取截取（丢弃小数部分）而不是四舍五入（查找最接近的整数）。最后，int变量debt无法存储3.0E12，这导致C++没有对结果进行定义的情况发生。在这种系统中，debt的结果为1634811904，或大约1.6E09
2.以{ }方式初始化时进行的转换（C++11）
    2.1C++11将使用大括号的初始化称为列表初始化（list-initialization），因为这种初始化常用于给复杂的数据类型提供值列表。它对类型转换的要求更严格。具体地说，列表初始化不允许缩窄（narrowing），即变量的类型可能无法表示赋给它的值。
3.表达式中的转换
    3.1首先，一些类型在出现时便会自动转换；其次，有些类型在与其他类型同时出现在表达式中时将被转换
    3.1.1在计算表达式时，C++将bool、char、unsigned char、signed char和short值转换为int。如果short比int短，则unsigned short类型将被转换为int；如果两种类型的长度相同，则unsigned short类型将被转换为unsigned int。这种规则确保了在对unsigned short进行提升时不会损失数据。
    3.1.2将不同类型进行算术运算时，也会进行一些转换，例如将int和float相加时。当运算涉及两种类型时，较小的类型将被转换为较大的类型
4.传递参数时的转换
    4.1传递参数时的类型转换通常由C++函数原型控制。
    4.2也可以取消原型对参数传递的控制，尽管这样做并不明智。在这种情况下，C++将对char和short类型（signed和unsigned）应用整型提升。另外，为保持与传统C语言中大量代码的兼容性，在将参数传递给取消原型对参数传递控制的函数时，C++将float参数提升为double。
5.强制类型转换
    5.1C++还允许通过强制类型转换机制显式地进行类型转换。（C++认识到，必须有类型规则，而有时又需要推翻这些规则。）强制类型转换的格式有两种
    5.1.1 (typename) value   :C
    5.1.2 typename   (value) :C++
    5.1.3 C++还引入了4个强制类型转换运算符，对它们的使用要求更为严格，这在记录
    */
//C++11中的auto声明:让编译器能够根据初始值的类型推断变量的类型--不是很容易