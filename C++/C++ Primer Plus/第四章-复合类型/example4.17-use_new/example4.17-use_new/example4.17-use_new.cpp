//指针真正的用武之地在于，在运行阶段分配未命名的内存以存储值
#include <iostream>
int main()
{
    using namespace std;
    int nights = 1001;
    int* pt = new int;         
    //在C语言中，可以用库函数malloc( )来分配内存；在C++中仍然可以这样做，但C++还有更好的方法—new运算符。
    //格式：typeName *pointer_name = new typeName;
    *pt = 1001;                 
    cout << "nights value = ";
    cout << nights << ": location " << &nights << endl;
    cout << "int ";
    cout << "value = " << *pt << ": location = " << pt << endl;

    double* pd = new double;   // allocate space for a double
    *pd = 10000001.0;           // store a double there

    cout << "double ";
    cout << "value = " << *pd << ": location = " << pd << endl;
    cout << "location of pointer pd: " << &pd << endl;
    cout << "size of pt = " << sizeof(pt);
    cout << ": size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof pd;
    cout << ": size of *pd = " << sizeof(*pd) << endl;
    // cin.get();
    return 0;
}
/*
补充说明：new在分配内存，而delete可以在用完内存后释放内存。
    int *ps = new int；//分配内存
        使-用-中
    delete ps；//用玩了，释放内存
关于delete：
一定要配对地使用new和delete；否则将发生内存泄漏（memory leak）
不要释放已释放的内存块。
不能使用delete来释放声明变量所获得的内存，类似int *pi=&jugs；别用delete来释放（你也没看到new对吧）
*/