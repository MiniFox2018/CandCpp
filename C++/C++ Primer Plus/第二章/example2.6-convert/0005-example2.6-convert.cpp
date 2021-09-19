#include <iostream>//用户定义的有返回值的函数
int stonetolb(int);     // 先函数声明
int main()
{
    using namespace std;
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;
    // cin.get();
    // cin.get();
    return 0;
}

int stonetolb(int sts)
{
    return 14 * sts;
}
/*关于using namespace std;的补充：让程序能够访问名称空间std的方法有多种，下面是其中的4种。
    将using namespace std；放在函数定义之前，让文件中所有的函数都能够使用名称空间std中所有的元素。
    将using namespace std；放在特定的函数定义中，让该函数能够使用名称空间std中的所有元素。
    在特定的函数中使用类似using std::cout; 这样的编译指令，而不是using namespace std; ，让该函数能够使用指定的元素，如cout。
    完全不使用编译指令using，而在需要使用名称空间std中的元素时，使用前缀std::，如下所示：*/