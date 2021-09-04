#include<iostream>
int main() {
	using  namespace std;

	cout << "Come up and C++ me some time.";
	cout << endl;
	cout << "you won't regret it!" << endl;
	return 0;

}
//1.1 使用cin和cout进行输入和输出的程序必须包含文件iostream(io:输入输出）；
//1.2 C++能够使用printf( )、scanf( )和其他所有标准C输入和输出函数，只需要包含常规C语言的stdio.h文件;
//1.3 类似iostream的文件叫做包含文件或者头文件;
//1.4 C头文件需要扩展名.h;
//1.5 C++对老式C的头文件保留了扩展名h（C++程序仍可以使用这种文件）;
//1.6 C++头文件则没有扩展名;
//1.7 有些C头文件被转换为C++头文件，这些文件被重新命名，去掉了扩展名h（使之成为C++风格的名称），并在文件名称前面加上前缀c（表明来自C语言）;
//2.1 main() 原始C格式，c++淘汰了；
//2.2 int main(void) 在C++（不是C）中，让括号空着与在括号中使用void等效（在C中，让括号空着意味着对是否接受参数保持沉默）；
//2.3 void main() 避免使用；
//3.1 using  namespace std;用iostream，而不是iostream.h，应用名称空间编译指令来使iostream中的定义对程序可用;
//3.2 省略编译指令using,则在iostream中定义的用于输出的cout变量是std::cout，endl是std::endl;
//3.3 using  namespace std;是一种偷懒的做法，在大型项目会有潜在问题。一般会用using std::cout；等便可以接下来使用cin和cout，而不必加上std::前缀；
//4.1 如果熟悉C后才开始学习C++，则可能注意到了，插入运算符（<<）看上去就像按位左移运算符（<<），这是一个运算符重载的例子，通过重载，同一个运算符将有不同的含义。编译器通过上下文来确定运算符的含义;
//4.2 C++扩展了运算符重载的概念，允许为用户定义的类型（类）重新定义运算符的含义;
//5.1 endl是一个特殊的C++符号，表示一个重要的概念：重起一行;
//5.2 C++还提供了另一种在输出中指示换行的旧式方法：C语言符号\n： cout<<"what's next?\n";
//5.3endl确保程序继续运行前刷新输出（将其立即显示在屏幕上）；而使用“\n”不能提供这样的保证，这意味着在有些系统中，有时可能在您输入信息后才会出现提示;