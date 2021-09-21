//指针：指针是一个变量，其存储的是值的地址，而不是值本身
#include <iostream>
int main()
{
    using namespace std;
    int updates = 6;        
    int* p_updates;  

    //指针名表示的是地址，*指针名得到该地址处存储的值
    p_updates = &updates; 
    //如果将一个常规变量地址赋予了指针变量，那么此时*指针变量与常规变量完全等价
    //此时可以像常规变量那样去使用*指针变量，当你将值赋给*指针变量时，它所指向的常规变量值将会修改。
    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;
    cout << "Addresses: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;
    //找到常规变量（variable）的地址：&variable 
    //一般都会采用十六进制表示地址
    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;
    //此时它指向的常规变量updates也会修改，此时updates=7
    //此时可以像常规变量那样去使用*指针变量，当你将值赋给*指针变量时，它所指向的常规变量值将会修改。
 
    return 0;
}
/*
关于声明和初初始化指针
①int   *ptr //这强调*ptr是int类型（C习惯）
②int*  ptr//这强调int*是一种类型—指向int的指针（C++习惯）
    对于int p1 ，p2；这只创建了一个指针（p1）和一个int变量（p2）。对每个指针变量名，都需要使用一个*
③可以在声明语句中初始化指针。在这种情况下，被初始化的是指针，而不是它指向的值
   int higgens =5；
   int *pt =&higgens；//此时会将pt的值设置为&higgens；注意不是*pt。
④一定要在对指针应用*之前，将指针初始化为一个确定的、适当的地址。
    long *fellow；//此处你没有像上面那样给出地址
    *fellow=2333；//所以你的2333储存在哪里呢？
    
指针不是整型，虽然计算机通常把地址当作整数来处理，但不能简单地将整数赋给指针
    int *pt；
    pt = 0xB8000000；//这样是不行的
    BUT //要将数字值作为地址来使用，应通过强制类型转换将数字转换为适当的地址类型
    pt =(int*) 0xB8000000;//这样就ok了

  */