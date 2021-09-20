//结构：结构是一种比数组更灵活的数据格式，因为同一个结构可以存储多种类型的数据，数组只能同一种
#include <iostream>
struct inflatable   // 结构声明：属于外部声明都能用，内部声明在函数内只能函数内用，一般都外部声明
{
    char name[20];
    float volume;
    double price;
};
//inflatable数据格式的名称，因此新类型的名称为inflatable,可以可以像创建char或int类型的变量那样创建inflatable类型的变量
// struct inflatable  goose; C格式要有struct
//        inflatable  vincent; C++省略 
int main()
{
    using namespace std;
    inflatable guest =
    {
        "Glorious Gloria",  // name value
        1.88,               // volume value
        29.99               // price value
    };  
    inflatable pal =
    {
        "Audacious Arthur",
        3.12,
        32.99
    }; 
    // 初始化方式
    /* C++11结构初始化：
     1.与数组一样，C++11也支持将列表初始化用于结构，且等号（=）是可选的：
     2.如果大括号内未包含任何东西，各个成员都将被设置为零
     3.不允许缩窄转换*/
    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";
    // pal.name is the name member of the pal variable
    cout << "You can have both for $";
    cout << guest.price + pal.price << "!\n";
    // cin.get();
    return 0;
}
 /*可以使用赋值运算符（=）将结构赋给另一个同类型的结构,这种赋值被称为成员赋值
    inflatable bouquet =
    {
        "sunflowers",
        0.20,
        12.49
    };
    inflatable choice;
    choice = bouquet;  // assign one structure to another
   */
/*可以同时完成定义结构和创建结构变量的工作:
struct perks
 {
    int key_number;
    char car[12];
 }mr_smith，ms_jones;
 *可以初始化以这种方式创建的变量：
  struct perks
 {
    int key_number;
    char car[12];
 }mr_glitz=
 {
    7,
    "Packrd"
 };
 *还可以声明没有名称的结构类型，方法是省略名称，同时定义一种结构类型和一个这种类型的变量
 struct
 {
  int x;
  int y;
  }position;
这种类型没有名称，因此以后无法创建这种类型的变量,只有position
*/