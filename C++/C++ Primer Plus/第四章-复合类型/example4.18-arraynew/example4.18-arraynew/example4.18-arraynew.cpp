/*
�ڱ���ʱ����������ڴ汻��Ϊ��̬���࣬��ζ���������ڱ���ʱ���뵽�����еġ�
��ʹ��newʱ����������н׶���Ҫ���飬�򴴽������������Ҫ���򲻴������������ڳ�������ʱѡ������ĳ��ȡ��ⱻ��Ϊ��̬���࣬��ζ���������ڳ�������ʱ�����ġ��������������̬���飨dynamic array��*/
#include <iostream>
int main()
{
    using namespace std;
    double* p3 = new double[3]; // ��ʹ��new������̬���顣��ʽ��typeName *pointname = new typeName [num_elements];
    p3[0] = 0.2;                //��ʹ�ö�̬����.ֻҪ��ָ�뵱��������ʹ�ü��ɡ�Ҳ����˵�����ڵ�1��Ԫ�أ�����ʹ��pointname[0]��������*pointname��
    p3[1] = 0.5;                //���ڵ�2��Ԫ�أ�����ʹ��pointname[1]
    p3[2] = 0.8;                //�������ơ�������ʹ��ָ�������ʶ�̬����ͷǳ�����
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 + 1;                  // increment the pointer
    cout << "Now p3[0] is " << p3[0] << " and ";
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 - 1;                  // point back to beginning
    delete[] p3;                 // ����ǵ�ɾ�����ָ�ʽ��delete [] pointname;��������
    // cin.get();
    return 0;
}
