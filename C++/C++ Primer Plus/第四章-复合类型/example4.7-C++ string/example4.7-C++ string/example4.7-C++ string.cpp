//string�ඨ���������ַ������������ʣ������ܹ�������ͨ�������������ַ���
#include <iostream>
#include <string> // Ҫʹ��string�࣬�����ڳ����а���ͷ�ļ�string
int main()
{
    using namespace std;
    char charr1[20];            
    char charr2[20] = "jaguar"; 
    //C�������
    string str1;                
    string str2 = "panther";
    //C++��񣺱���
    //������ó����ܹ��Զ�����string�Ĵ�С�����磬str1����������һ������Ϊ0��string���󣬵����������ȡ��str1��ʱ�����Զ�����str1�ĳ��ȡ�ʹ���ַ�����ʱ�����Ǵ���Ŀ�������С���޷��洢ָ����Ϣ��Σ��
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
conclusion��
1.���ܽ�һ�����鸳����һ�����飬�����Խ�һ��string���󸳸���һ��string����
2.string������ַ����ϲ�����������ʹ�������+������string����ϲ�������������ʹ�������+=���ַ������ӵ�string�����ĩβ
    string s1 = "penguin";
    string s2, s3;
    s2 = s1;
    s2 = "buzzard";
    s3 = s1 + s2;
    s1 += s2;
    s2 += " for a day";
3.��C++����string��֮ǰ������ԱҲ��Ҫ���������ַ�����ֵ�ȹ�����
  ����C-����ַ���������Աʹ��C���Կ��еĺ����������Щ����ͷ�ļ�cstring����ǰΪstring.h���ṩ����Щ������
  ����ʹ�ú���strcpy( )���ַ������Ƶ��ַ������У�ʹ�ú���strcat( )���ַ������ӵ��ַ�����ĩβ�� 
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";    //c++��c��������
    str1 = str2;                // copy str2 to str1
    strcpy(charr1, charr2);     // copy charr2 to charr1
    str1 += " paste";           // add paste to end of str1
    strcat(charr1, " juice");   // add juice to end of charr1
    int len1 = str1.size();     // obtain length of str1
    int len2 = strlen(charr1);  // obtain length of charr1
 4.ʹ��cin�������<<��������洢��string�����У�ʹ��cout�������<<����ʾstring������䷨�봦��C-����ַ�����ͬ��
   ��ÿ�ζ�ȡһ�ж�����һ������ʱ��ʹ�õľ䷨��ͬ 
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
    //δ��ʼ���������������δ�����,����strlen( )������ĵ�һ��Ԫ�ؿ�ʼ�����ֽ�����ֱ���������ַ�
    //δ����ʼ�������ݣ���һ�����ַ��ĳ���λ���������,�����иó���ʱ��ÿ���˵õ������鳤�Ⱥܿ�����˲�ͬ
    cout << "Length of string in str before input: "
         << str.size() << endl;
    //���⣬�û�����֮ǰ��str�е��ַ�������Ϊ0��������Ϊδ����ʼ����string����ĳ��ȱ��Զ�����Ϊ0��
    cout << "Enter a line of text:\n";
    cin.getline(charr, 20);     
    //��һ��������Ŀ�����飻�ڶ����������鳤�ȣ�getline( )ʹ���������ⳬԽ����ı߽硣
    cout << "You entered: " << charr << endl;
    cout << "Enter another line of text:\n";
    getline(cin, str);          
    // ����û��ʹ�þ���ʾ������������getline( )�����෽����
    //����cin��Ϊ������ָ��������ȥ�������롣
    //���⣬Ҳû��ָ���ַ������ȵĲ�������Ϊstring���󽫸����ַ����ĳ����Զ������Լ��Ĵ�С��
    cout << "You entered: " << str << endl;
    cout << "Length of string in charr after input: "
         << strlen(charr) << endl;
    cout << "Length of string in str after input: "
         << str.size() << endl;
    // cin.get();

    return 0;
}
5.������ʽ���ַ�������ֵ
    5.1��char�����⣬C++��������wchar_t��
    ��C++11����������char16_t��char32_t��
    �ɴ�����Щ���͵��������Щ���͵��ַ�������ֵ��
    ������Щ���͵��ַ�������ֵ��C++�ֱ�ʹ��ǰ׺L��u��U��ʾ:�ں����ַ���ǰ���L/u/U"******"

    5.2C++11��֧��Unicode�ַ����뷽��UTF-8�������ַ����У����ݱ��������ֵ���ַ����ܴ洢Ϊ1��4����λ�顣
    C++ʹ��ǰ׺u8����ʾ�������͵��ַ�������ֵ��
    5.3C++11��������һ��������ԭʼ��raw���ַ���
    ��ԭʼ�ַ����У��ַ���ʾ�ľ����Լ������磬����\n����ʾ���з�������ʾ���������ַ���б�ܺ�n���������Ļ����ʾʱ������ʾ�������ַ�
    �����ַ�����ʹ��"��������ʹ�÷�����\"����Ȼ����Ȼ�����ַ�������������"���Ͳ�����ʹ��������ʾ�ַ����Ŀ�ͷ��ĩβ����ˣ�ԭʼ�ַ�����"(��)"�������������ʹ��ǰ׺R����ʶԭʼ�ַ�����R"()"


*/
