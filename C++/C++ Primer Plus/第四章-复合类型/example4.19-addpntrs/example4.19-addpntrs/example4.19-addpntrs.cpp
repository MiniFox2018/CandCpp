//ָ�����������ȼ۵�ԭ������ָ��������pointer arithmetic����C++�ڲ���������ķ�ʽ
#include <iostream>
int main()
{
    using namespace std;
    double wages[3] = { 10000.0, 20000.0, 30000.0 };
    short stacks[3] = { 3, 2, 1 };
    double* pw = wages;//C++������������Ϊ��ַ:�ڶ�������£�C++������������Ϊ�����1��Ԫ�صĵ�ַ
    //wages=&wages[0]
    //ps:������������Ϊ���һ��Ԫ�صĵ�ַ������������Ӧ�õ�ַ�����&wagesʱ���õ�������������ĵ�ַ��
    short* ps = &stacks[0]; 
    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    pw = pw + 1;
    //����������1����ֵ������1��
    //����ָ�������1�����ӵ���������ָ������͵��ֽ�����
    //��ָ��double��ָ���1�����ϵͳ��doubleʹ��8���ֽڴ洢������ֵ������8��
    cout << "add 1 to the pw pointer:\n";
    cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";

    cout << "ps = " << ps << ", *ps = " << *ps << endl;
    ps = ps + 1;
    //��ָ��short��ָ���1�����ϵͳ��shortʹ��2���ֽڴ洢����ָ��ֵ������2
    cout << "add 1 to the ps pointer:\n";
    cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";

    cout << "access two elements with array notation\n";
    cout << "stacks[0] = " << stacks[0]
        << ", stacks[1] = " << stacks[1] << endl;
    cout << "access two elements with pointer notation\n";
    cout << "*stacks = " << *stacks
        << ", *(stacks + 1) =  " << *(stacks + 1) << endl;
    //ͨ����ʹ�������ʾ��ʱ��C++��ִ�������ת��
    // *(arrayname+i)=arrayname[i]
    //���ʹ�õ���ָ�룬����������������C++Ҳ��ִ��ͬ����ת��
    //pointername[i]=*(pointername+i)

    cout << sizeof(wages) << " = size of wages array\n";
    cout << sizeof(pw) << " = size of pw pointer\n";
    //��һ�������ǣ�������Ӧ��sizeof������õ���������ĳ��ȣ�����ָ��Ӧ��sizeof�õ�����ָ��ĳ��ȣ���ʹָ��ָ�����һ������
    // cin.get();
    return 0;
}
