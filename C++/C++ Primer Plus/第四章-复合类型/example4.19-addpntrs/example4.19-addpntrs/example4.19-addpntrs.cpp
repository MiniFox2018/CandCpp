//指针和数组基本等价的原因在于指针算术（pointer arithmetic）和C++内部处理数组的方式
#include <iostream>
int main()
{
    using namespace std;
    double wages[3] = { 10000.0, 20000.0, 30000.0 };
    short stacks[3] = { 3, 2, 1 };
    double* pw = wages;//C++将数组名解释为地址:在多数情况下，C++将数组名解释为数组第1个元素的地址
    //wages=&wages[0]
    //ps:数组名被解释为其第一个元素的地址，而对数组名应用地址运算符&wages时，得到的是整个数组的地址：
    short* ps = &stacks[0]; 
    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    pw = pw + 1;
    //整数变量加1后，其值将增加1；
    //但将指针变量加1后，增加的量等于它指向的类型的字节数。
    //将指向double的指针加1后，如果系统对double使用8个字节存储，则数值将增加8；
    cout << "add 1 to the pw pointer:\n";
    cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";

    cout << "ps = " << ps << ", *ps = " << *ps << endl;
    ps = ps + 1;
    //将指向short的指针加1后，如果系统对short使用2个字节存储，则指针值将增加2
    cout << "add 1 to the ps pointer:\n";
    cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";

    cout << "access two elements with array notation\n";
    cout << "stacks[0] = " << stacks[0]
        << ", stacks[1] = " << stacks[1] << endl;
    cout << "access two elements with pointer notation\n";
    cout << "*stacks = " << *stacks
        << ", *(stacks + 1) =  " << *(stacks + 1) << endl;
    //通常，使用数组表示法时，C++都执行下面的转换
    // *(arrayname+i)=arrayname[i]
    //如果使用的是指针，而不是数组名，则C++也将执行同样的转换
    //pointername[i]=*(pointername+i)

    cout << sizeof(wages) << " = size of wages array\n";
    cout << sizeof(pw) << " = size of pw pointer\n";
    //另一个区别是，对数组应用sizeof运算符得到的是数组的长度，而对指针应用sizeof得到的是指针的长度，即使指针指向的是一个数组
    // cin.get();
    return 0;
}
