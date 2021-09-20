// 结构数组
#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    using namespace std;
    inflatable guests[2] =          // initializing an array of structs
    {
        {"Bambi", 0.5, 21.99},      // first structure in array
        {"Godzilla", 2000, 565.99}  // next structure in array
    };
    //创建元素为结构的数组，方法和创建基本类型数组完全相同
    cout << "The guests " << guests[0].name << " and " << guests[1].name
        << "\nhave a combined volume of "
        << guests[0].volume + guests[1].volume << " cubic feet.\n";
    // cin.get();
    return 0;
}
/*
扩展：共用体union
共用体（union）是一种数据格式，它能够存储不同的数据类型，但只能同时存储其中的一种类型
例如
union one4all
{
   int int_val;
   long long_val;
   double double_val
}这是声明，和结构还挺像对吧
one4all pail；定义一个变量
pail.int_val =15;此时就储存int值
pail.double_val=1.38;就在这块，此时int值就会被舍弃，因为只能同时存储其中的一种类型
所以，共用体的长度为其最大成员的长度。
共用体的用途之一是，当数据项使用两种或更多种格式（但不会同时使用）时，可节省空间
*/