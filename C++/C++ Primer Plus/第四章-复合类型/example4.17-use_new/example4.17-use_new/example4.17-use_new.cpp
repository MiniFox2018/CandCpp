//ָ������������֮�����ڣ������н׶η���δ�������ڴ��Դ洢ֵ
#include <iostream>
int main()
{
    using namespace std;
    int nights = 1001;
    int* pt = new int;         
    //��C�����У������ÿ⺯��malloc( )�������ڴ棻��C++����Ȼ��������������C++���и��õķ�����new�������
    //��ʽ��typeName *pointer_name = new typeName;
    *pt = 1001;                 
    cout << "nights value = ";
    cout << nights << ": location " << &nights << endl;
    cout << "int ";
    cout << "value = " << *pt << ": location = " << pt << endl;

    double* pd = new double;   // allocate space for a double
    *pd = 10000001.0;           // store a double there

    cout << "double ";
    cout << "value = " << *pd << ": location = " << pd << endl;
    cout << "location of pointer pd: " << &pd << endl;
    cout << "size of pt = " << sizeof(pt);
    cout << ": size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof pd;
    cout << ": size of *pd = " << sizeof(*pd) << endl;
    // cin.get();
    return 0;
}
/*
����˵����new�ڷ����ڴ棬��delete�����������ڴ���ͷ��ڴ档
    int *ps = new int��//�����ڴ�
        ʹ-��-��
    delete ps��//�����ˣ��ͷ��ڴ�
����delete��
һ��Ҫ��Ե�ʹ��new��delete�����򽫷����ڴ�й©��memory leak��
��Ҫ�ͷ����ͷŵ��ڴ�顣
����ʹ��delete���ͷ�������������õ��ڴ棬����int *pi=&jugs������delete���ͷţ���Ҳû����new�԰ɣ�
*/