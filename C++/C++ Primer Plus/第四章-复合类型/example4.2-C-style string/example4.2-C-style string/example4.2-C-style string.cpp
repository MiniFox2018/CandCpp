//C++处理字符串的方式有两种。
//第一种来自C语言，常被称为C-风格字符串（C-style string）。
//另一种基于string类库的方法。
/*C-风格字符串具有一种特殊的性质：
	以空字符（null character）结尾，空字符被写作\0，
	其ASCII码为0，用来标记字符串的结尾
tips:1.都是数组，但是只有以空字符结尾才叫做字符串
	 2.确定存储字符串所需的最短数组时，别忘了将结尾的空字符计算在内。
	 3.字符串常量（使用双引号）不能与字符常量（使用单引号）互换
	*/
#include <iostream>
#include <cstring>  // for the strlen() function
int main()
{
    using namespace std;
    const int Size = 15;
    char name1[Size];               // empty array
    char name2[Size] = "C++owboy";  // initialized array
  //将字符串存储到数组中，最常用的方法有两种
  //将键盘或文件输入读入到数组中:name1的方式
  //将数组初始化为字符串常量：name2方式
  
    cout << "Howdy! I'm " << name2;
    cout << "! What's your name?\n";
    cin >> name1;
    cout << "Well, " << name1 << ", your name has ";
    cout << strlen(name1) << " letters and is stored\n";
    //C语言库函数strlen( )来确定字符串的长度(c++后面说）。标准头文件cstring（老式实现为string.h）提供
    cout << "in an array of " << sizeof(name1) << " bytes.\n";
    //sizeof运算符指出整个数组的长度，但strlen( )函数返回的是存储在数组中的字符串的长度。
    //另外strlen( )只计算可见的字符，而不把空字符计算在内,所以存储字符串，数组的长度不能短于strlen（）+1
    cout << "Your initial is " << name1[0] << ".\n";
    name2[3] = '\0';  
    //可以使用\0截短字符串
    cout << "Here are the first 3 characters of my name: ";
    cout << name2 << endl;
    // cin.get();
    // cin.get();
    return 0;
}
/*
* 这个程序一些没有发现的问题：
1.Q:你输入的是一个单词，如果输入多个单词会怎么样？
  A:cin使用空白（空格、制表符和换行符）来确定字符串的结束位置，这意味着cin在获取字符数组输入时只读取一个单词。读取该单词后，cin将该字符串放到数组中，并自动在结尾添加空字符。
2.当getline( )或get( )读取空行将发生什么情况？
3.输入字符串可能比目标数组长（运行中没有揭示出来）怎么办？
4.混合输入字符串和数字
*解决办法：
1.getline( )和get( )。这两个函数都读取一行输入，直到到达换行符。
  随后getline( )将丢弃换行符，而get( )将换行符保留在输入序列中
    1.1面向行的输入：getline( ):使用cin.getline( ).
        1.1.1该函数有两个参数 第一个参数是用来存储输入行的数组的名称
                   第二个参数是要读取的字符数(有第三个参数的可能后面学习）
        eg：如果这个参数为20，则函数最多读取19个字符，余下的空间用于存储自动在结尾处添加的空字符。getline( )成员函数在读取指定数目的字符或遇到换行符时停止读取。
        1.1.2它通过换行符来确定行尾，但不保存换行符。相反，在存储字符串时，它用空字符来替换换行符
    1.2面向行的输入：get( )
        1.2.1get并不再读取并丢弃换行符，而是将其留在输入队列中。这就导致了第二次调用时第一个就是换行符而读取不到内容
         解决办法：1.下面使用不带任何参数的cin.get( )调用可读取下一个字符（即使是换行符），因此可以用它来处理换行符，为读取下一行输入做好准备  
                  2.另一种使用get( )的方式是将两个类成员函数拼接起来（合并）：cin.get(name,arSize).get();
    1.3比较
        老式实现没有getline( )。其次，get( )使输入更仔细：可以根据cin.get()判断是数组填满还是换行符（推荐get（））
2最初的做法是，下一条输入语句将在前一条getline( )或get( )结束读取的位置开始读取；
 但当前的做法是，当get( )（不是getline( )）读取空行后将设置失效位（failbit）。这意味着接下来的输入将被阻断，但可以用cin.clear()恢复输入
3.getline( )和get( )将把余下的字符留在输入队列中，
  而getline( )还会设置失效位，并关闭后面的输入。
4.在读取地址之前先读取并丢弃换行符
   包括：使用没有参数的get( )和使用接受一个char参数的get( )：cin.get()/cin.get(ch)
         也可以利用表达式cin>>year返回cin对象，将调用拼接起来(cin>>year).get()/(cin>>year).get(ch)
*/
