// 
#include <iostream>
int main()
{
    using namespace std;
    int chest = 42;     // 十进制   1-9
    int waist = 0x42;   // 十六进制 0x/oX
    int inseam = 042;   // 八进制   0+1-7

    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest << " (42 in decimal)\n";
    cout << "waist = " << waist << " (0x42 in hex)\n";
    cout << "inseam = " << inseam << " (042 in octal)\n";
    // cin.get();
    return 0;
    //在默认情况下，cout以十进制格式显示整数，而不管这些整数在程序中是如何书写的
}
/*如果要以十六进制或八进制方式显示值，则可以使用cout的一些特殊特性
  控制符dec、hex和oct，分别用于指示cout以十进制、十六进制和八进制格式显示整数
    cout << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex;      // 让waist以十六进制输出
    cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
    cout << oct;      //  让inseam以八进制输出
    cout << "inseam = " << inseam << " (octal for 42)" << endl;
  */

/*c++如何确定常量的类型
1.除非有理由存储为其他类型（如使用了特殊的后缀来表示特定的类型，或者值太大，不能存储为int），否则C++将整型常量存储为int类型。
2.有后缀类： 为l(小写L）或者L ——long
            为u或者U ——unsigned int
            ul（任意顺序，大小写均可）——unsigned long
            ll或者LL ——long long
            ull、Ull uLL ULL——unsigned long long
3.无后缀类:十进制：选以下能存该数的最小类型： int long long long
          十六进制和八进制:能存的最小类型： int 、unsigned int long 、unsigned long、long long、unsigned long long
*/
