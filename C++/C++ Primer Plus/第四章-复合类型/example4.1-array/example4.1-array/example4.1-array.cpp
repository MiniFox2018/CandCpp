//复合类型-数组：数组（array）是一种数据格式，能够存储多个同类型的值
#include <iostream>
int main()
{
    using namespace std;
    int yams[3];    // 数组声明：typeName arrayName[arraySize];
    yams[0] = 7;    // 数组赋值：0、1、2为数组元素下标，0代表第一个元素
    yams[1] = 8;
    yams[2] = 6;

    int yamcosts[3] = { 20, 30, 5 }; // 可在声明语句中直接初始化数组元素，如何括号内元素少，后面则全为0，所以初始化数组全为0只需在括号写一个0即可。

    cout << "Total yams = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << "The package with " << yams[1] << " yams costs ";
    cout << yamcosts[1] << " cents per yam.\n";
    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    total = total + yams[2] * yamcosts[2];
    cout << "The total yam expense is " << total << " cents.\n";

    cout << "\nSize of yams array = " << sizeof yams;
    cout << " bytes.\n";
    cout << "Size of one element = " << sizeof yams[0];
    cout << " bytes.\n";
    // cin.get();
    return 0;
}
/*
如果将sizeof运算符用于数组名，得到的将是整个数组中的字节数。
但如果将sizeof用于数组元素，则得到的将是元素的长度（单位为字节）
*/
/*
数组初始化规则：
1. 只有在定义数组时才能使用初始化，此后就不能使用了，后面使用下标赋值
   也不能将一个数组赋给另一个数组。
2.如果初始化数组时方括号内（[ ]）为空，C++编译器将计算元素个数。
2.1这样并不好，如果主要关心的问题是程序，而不是自己是否知道数组的大小：
   short things[]={1，5，3，8};
   int num_elements=sizeof things/sizeof(short); 
3.C++11数组初始化方法
3.1首先，初始化数组时，可省略等号（=）
3.2其次，可不在大括号内包含任何东西，这将把所有元素都设置为零
3.3第三，列表初始化禁止缩窄转换
   不能在一个整型数组里写入浮点数，这属于缩窄
   不能在一个变量类型里写入超出变量类型范围的值
   如果在一个类型数组里，其中写入了另一个类型值但范围在类型数组是可以的，比如在char数组里写入的int值在char范围里是可以的。（但不是整数类型和浮点数类型组合）

*/