/*
在编译时给数组分配内存被称为静态联编，意味着数组是在编译时加入到程序中的。
但使用new时，如果在运行阶段需要数组，则创建它；如果不需要，则不创建。还可以在程序运行时选择数组的长度。这被称为动态联编，意味着数组是在程序运行时创建的。这种数组叫作动态数组（dynamic array）*/
#include <iostream>
int main()
{
    using namespace std;
    double* p3 = new double[3]; // ①使用new创建动态数组。格式：typeName *pointname = new typeName [num_elements];
    p3[0] = 0.2;                //②使用动态数组.只要把指针当作数组名使用即可。也就是说，对于第1个元素，可以使用pointname[0]，而不是*pointname；
    p3[1] = 0.5;                //对于第2个元素，可以使用pointname[1]
    p3[2] = 0.8;                //依此类推。这样，使用指针来访问动态数组就非常简单了
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 + 1;                  // increment the pointer
    cout << "Now p3[0] is " << p3[0] << " and ";
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 - 1;                  // point back to beginning
    delete[] p3;                 // 用完记得删，这种格式：delete [] pointname;多了括号
    // cin.get();
    return 0;
}
