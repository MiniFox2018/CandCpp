//���� char������רΪ�洢�ַ�������ĸ�����֣�����Ƶ�
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

����ʱ��cin�����������Mת��Ϊ77�����ʱ��cout��ֵ77ת��Ϊ����ʾ���ַ�M��cin��cout����Ϊ�����ɱ������������ġ������77�洢��int�����У���cout��������ʾΪ77��Ҳ����˵��cout��ʾ�����ַ�7��
*/
#include <iostream>
int main()
{
    using namespace std;
    char ch = 'M';       // char: ��ȡM������ASCII�루77������ch�������ʱ�ڸ���ASCII������ַ�M
    int i = ch;          // int : ��ASCII����� i�����Ҳ����ASCII
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Add one to the character code:" << endl;
    ch = ch + 1;          // 77+1=78�����ASCII��Ϊ78���ַ�N
    i = ch;               // ���78
    cout << "The ASCII code for " << ch << " is " << i << endl;

    // ��һ�ִ���<<��ʾ�ַ��İ취 ��
    cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch);

    // using cout.put() to display a char constant
    cout.put('!');
    /*char ch = '!';
    �����cout<<ch�����ǣ���������cout<<'!'���������ASCII�롣
    ������cout.put('!')���ǻ��ӡ��
    */
    cout << endl << "Done" << endl;
    // cin.get();
    return 0;

}
/*tips: ��Щ�ַ�����ֱ��ͨ���������뵽������,������Щ�ַ���C++�ṩ��һ������ı�ʾ������ת������
        ע�⣬Ӧ���������ַ�����Q����������ת�����У���\n����Ҳ����˵����������Ϊ�ַ�����ʱ��Ӧ�õ��������𣻽����Ƿ����ַ�����ʱ����Ҫʹ�õ����š�*/

/*bool����
�ڼ����У�����������ֵ������true��false����ȥ��C++��Cһ����Ҳû�в������͡��ڵ�5�º͵�6���н��ῴ����C++������ֵ����Ϊtrue���������Ϊfalse��Ȼ�������ڿ���ʹ��bool��������ʾ��ͼ��ˣ�bool is_ready = true;
����ֵtrue��false������ͨ������ת��Ϊint���ͣ�true��ת��Ϊ1����false��ת��Ϊ0
���⣬�κ�����ֵ��ָ��ֵ�����Ա���ʽת������������ʽǿ��ת����Ϊboolֵ���κη���ֵ����ת��Ϊtrue�����㱻ת��Ϊfalse��
*/

/*#define �� const
  const type name =value��
  #define name value
  const��#defien�á�
    ���ȣ����ܹ���ȷָ�����͡�
    ��Σ�����ʹ��C++����������򽫶����������ض��ĺ������ļ��С�
    ���������Խ�const���ڸ����ӵ����� 
*/