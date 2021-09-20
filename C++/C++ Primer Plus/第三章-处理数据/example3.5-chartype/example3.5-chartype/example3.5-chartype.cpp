//整型 char类型是专为存储字符（如字母和数字）而设计的
/*
#include <iostream>
int main()
{
    using namespace std;
    char ch;        

    cout << "Enter a character: " << endl;
    cin >> ch;
    cout << "Hola! ";
    cout << "Thank you for the " << ch << " character." << endl;
    // cin.get();
    // cin.get();
    return 0;
}

输入时，cin将键盘输入的M转换为77；输出时，cout将值77转换为所显示的字符M；cin和cout的行为都是由变量类型引导的。如果将77存储在int变量中，则cout将把它显示为77（也就是说，cout显示两个字符7）
*/
#include <iostream>
int main()
{
    using namespace std;
    char ch = 'M';       // char: 读取M，把其ASCII码（77）存入ch，在输出时在根据ASCII吗输出字符M
    int i = ch;          // int : 将ASCII码存入 i，输出也是其ASCII
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Add one to the character code:" << endl;
    ch = ch + 1;          // 77+1=78，输出ASCII码为78的字符N
    i = ch;               // 输出78
    cout << "The ASCII code for " << ch << " is " << i << endl;

    // 另一种代替<<显示字符的办法 ：
    cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch);

    // using cout.put() to display a char constant
    cout.put('!');
    /*char ch = '!';
    如果你cout<<ch，会是！，但是若cout<<'!'会输出！的ASCII码。
    但是用cout.put('!')还是会打印！
    */
    cout << endl << "Done" << endl;
    // cin.get();
    return 0;

}
/*tips: 有些字符不能直接通过键盘输入到程序中,对于这些字符，C++提供了一种特殊的表示方法—转义序列
        注意，应该像处理常规字符（如Q）那样处理转义序列（如\n）。也就是说，将它们作为字符常量时，应用单引号括起；将它们放在字符串中时，不要使用单引号。*/

/*bool类型
在计算中，布尔变量的值可以是true或false。过去，C++和C一样，也没有布尔类型。在第5章和第6章中将会看到，C++将非零值解释为true，将零解释为false。然而，现在可以使用bool类型来表示真和假了：bool is_ready = true;
字面值true和false都可以通过提升转换为int类型，true被转换为1，而false被转换为0
另外，任何数字值或指针值都可以被隐式转换（即不用显式强制转换）为bool值。任何非零值都被转换为true，而零被转换为false：
*/

/*#define 与 const
  const type name =value；
  #define name value
  const比#defien好。
    首先，它能够明确指定类型。
    其次，可以使用C++的作用域规则将定义限制在特定的函数或文件中。
    第三，可以将const用于更复杂的类型 
*/


/*
除了整型之外的第二种基本类型：浮点型
1.C++有两种书写浮点数的方式。第一种是使用常用的标准小数点表示法。第二种表示浮点值的方法叫做E表示法（eg：e4=10的4次方）

2.C和C++对于有效位数的要求是，float至少32位，double至少48位，且不少于float，long double至少和double一样多。这三种类型的有效位数可以一样多
2.通常，float为32位，double为64位，long double为80、96或128位。另外，这3种类型的指数范围至少是−37到37
3.在程序中书写浮点常量的时候，程序将把它存储为哪种浮点类型呢？在默认情况下，像8.24和2.4E8这样的浮点常量都属于double类型。如果希望常量为float类型，请使用f或F后缀。对于long double类型，可使用l或L后缀（由于l看起来像数字1，因此L是更好的选择）
*/

/*
整数型相除为整数，丢弃余数
浮点数相除为浮点数有小数
*/