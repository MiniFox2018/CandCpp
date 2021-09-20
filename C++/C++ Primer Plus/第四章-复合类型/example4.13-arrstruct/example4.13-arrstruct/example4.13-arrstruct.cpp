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

/*
枚举
1.enum工具提供了另一种创建符号常量的方式，这种方式可以代替const。它还允许定义新类型，但必须按严格的限制进行
enum newType（枚举）{     枚举量          }；
                     0 1 2 3 4 5 6 7 ..
2.可以用枚举名来声明这种类型的变量：newType variable；
   2.1在不进行强制类型转换的情况下，只能将定义枚举时使用的枚举量赋给这种枚举的变量
   2.2对于枚举，只定义了赋值运算符。具体地说，没有为枚举定义算术运算
   2.3枚举量是整型，可被提升为int类型，但int类型不能自动转换为枚举类型
   2.4如果int值是有效的，则可以通过强制类型转换，将它赋给枚举变量
3.设置枚举量的值
   3.1可以使用赋值运算符来显式地设置枚举量的值
   3.2指定的值必须是整数。也可以只显式地定义其中一些枚举量的值这里，第一个枚举量在默认情况下为0。后面没有被初始化的枚举量的值将比其前面的枚举量大1
   3.3最后，可以创建多个值相同的枚举量
4.枚举的取值范围:可以将取值范围中的任何整数值赋给枚举变量，即使这个值不是枚举值
   4.1找出上限，需要知道枚举量的最大值。找到大于这个最大值的、最小的2的幂，将它减去1. max：101<2七次方=128，所以上限是127
   4.2计算下限，需要知道枚举量的最小值。如果它不小于0，则取值范围的下限为0；否则，采用与寻找上限方式相同的方式，但加上负号（比它小的、最大的2的幂是）。min：-2的三次放<-6 -8+1=-7

   */