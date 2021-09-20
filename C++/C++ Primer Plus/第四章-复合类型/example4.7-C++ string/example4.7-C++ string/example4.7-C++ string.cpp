//string类定义隐藏了字符串的数组性质，让您能够像处理普通变量那样处理字符串
#include <iostream>
#include <string> // 要使用string类，必须在程序中包含头文件string
int main()
{
    using namespace std;
    char charr1[20];            
    char charr2[20] = "jaguar"; 
    //C风格：数组
    string str1;                
    string str2 = "panther";
    //C++风格：变量
    //类设计让程序能够自动处理string的大小。例如，str1的声明创建一个长度为0的string对象，但程序将输入读取到str1中时，将自动调整str1的长度。使用字符数组时，总是存在目标数组过小，无法存储指定信息的危险
    cout << "Enter a kind of feline: ";
    cin >> charr1;
    cout << "Enter another kind of feline: ";
    cin >> str1;                // use cin for input
    cout << "Here are some felines:\n";
    cout << charr1 << " " << charr2 << " "
        << str1 << " " << str2 // use cout for output
        << endl;
    cout << "The third letter in " << charr2 << " is "
        << charr2[2] << endl;
    cout << "The third letter in " << str2 << " is "
        << str2[2] << endl;    // use array notation
   // cin.get();
   // cin.get();

    return 0;
}
/*
conclusion：
1.不能将一个数组赋给另一个数组，但可以将一个string对象赋给另一个string对象
2.string类简化了字符串合并操作。可以使用运算符+将两个string对象合并起来，还可以使用运算符+=将字符串附加到string对象的末尾
    string s1 = "penguin";
    string s2, s3;
    s2 = s1;
    s2 = "buzzard";
    s3 = s1 + s2;
    s1 += s2;
    s2 += " for a day";
3.在C++新增string类之前，程序员也需要完成诸如给字符串赋值等工作。
  对于C-风格字符串，程序员使用C语言库中的函数来完成这些任务。头文件cstring（以前为string.h）提供了这些函数。
  可以使用函数strcpy( )将字符串复制到字符数组中，使用函数strcat( )将字符串附加到字符数组末尾： 
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";    //c++与c风格的区别
    str1 = str2;                // copy str2 to str1
    strcpy(charr1, charr2);     // copy charr2 to charr1
    str1 += " paste";           // add paste to end of str1
    strcat(charr1, " juice");   // add juice to end of charr1
    int len1 = str1.size();     // obtain length of str1
    int len2 = strlen(charr1);  // obtain length of charr1
 4.使用cin和运算符<<来将输入存储到string对象中，使用cout和运算符<<来显示string对象，其句法与处理C-风格字符串相同。
   但每次读取一行而不是一个单词时，使用的句法不同 
#include <iostream>
#include <string>               // make string class available
#include <cstring>              // C-style string library
int main()
{
    using namespace std;
    char charr[20];
    string str;

    cout << "Length of string in charr before input: "
         << strlen(charr) << endl;
    //未初始化的数组的内容是未定义的,函数strlen( )从数组的第一个元素开始计算字节数，直到遇到空字符
    //未被初始化的数据，第一个空字符的出现位置是随机的,在运行该程序时，每个人得到的数组长度很可能与此不同
    cout << "Length of string in str before input: "
         << str.size() << endl;
    //另外，用户输入之前，str中的字符串长度为0。这是因为未被初始化的string对象的长度被自动设置为0。
    cout << "Enter a line of text:\n";
    cin.getline(charr, 20);     
    //第一个参数是目标数组；第二个参数数组长度，getline( )使用它来避免超越数组的边界。
    cout << "You entered: " << charr << endl;
    cout << "Enter another line of text:\n";
    getline(cin, str);          
    // 这里没有使用句点表示法，这表明这个getline( )不是类方法。
    //它将cin作为参数，指出到哪里去查找输入。
    //另外，也没有指出字符串长度的参数，因为string对象将根据字符串的长度自动调整自己的大小。
    cout << "You entered: " << str << endl;
    cout << "Length of string in charr after input: "
         << strlen(charr) << endl;
    cout << "Length of string in str after input: "
         << str.size() << endl;
    // cin.get();

    return 0;
}
5.其他形式的字符串字面值
    5.1除char类型外，C++还有类型wchar_t；
    而C++11新增了类型char16_t和char32_t。
    可创建这些类型的数组和这些类型的字符串字面值。
    对于这些类型的字符串字面值，C++分别使用前缀L、u和U表示:在后面字符串前面加L/u/U"******"

    5.2C++11还支持Unicode字符编码方案UTF-8。在这种方案中，根据编码的数字值，字符可能存储为1～4个八位组。
    C++使用前缀u8来表示这种类型的字符串字面值。
    5.3C++11新增的另一种类型是原始（raw）字符串
    在原始字符串中，字符表示的就是自己，例如，序列\n不表示换行符，而表示两个常规字符—斜杠和n，因此在屏幕上显示时，将显示这两个字符
    可在字符串中使用"，而无需使用繁琐的\"。当然，既然可在字符串字面量包含"，就不能再使用它来表示字符串的开头和末尾。因此，原始字符串将"(和)"用作定界符，并使用前缀R来标识原始字符串：R"()"


*/
