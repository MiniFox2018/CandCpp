//��������-���飺���飨array����һ�����ݸ�ʽ���ܹ��洢���ͬ���͵�ֵ
#include <iostream>
int main()
{
    using namespace std;
    int yams[3];    // ����������typeName arrayName[arraySize];
    yams[0] = 7;    // ���鸳ֵ��0��1��2Ϊ����Ԫ���±꣬0�����һ��Ԫ��
    yams[1] = 8;
    yams[2] = 6;

    int yamcosts[3] = { 20, 30, 5 }; // �������������ֱ�ӳ�ʼ������Ԫ�أ����������Ԫ���٣�������ȫΪ0�����Գ�ʼ������ȫΪ0ֻ��������дһ��0���ɡ�

    cout << "Total yams = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << "The package with " << yams[1] << " yams costs ";
    cout << yamcosts[1] << " cents per yam.\n";
    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    total = total + yams[2] * yamcosts[2];
    cout << "The total yam expense is " << total << " cents.\n";

    cout << "\nSize of yams array = " << sizeof yams;
    cout << " bytes.\n";
    cout << "Size of one element = " << sizeof yams[0];
    cout << " bytes.\n";
    // cin.get();
    return 0;
}
/*
�����sizeof������������������õ��Ľ������������е��ֽ�����
�������sizeof��������Ԫ�أ���õ��Ľ���Ԫ�صĳ��ȣ���λΪ�ֽڣ�
*/
/*
�����ʼ������
1. ֻ���ڶ�������ʱ����ʹ�ó�ʼ�����˺�Ͳ���ʹ���ˣ�����ʹ���±긳ֵ
   Ҳ���ܽ�һ�����鸳����һ�����顣
2.�����ʼ������ʱ�������ڣ�[ ]��Ϊ�գ�C++������������Ԫ�ظ�����
2.1���������ã������Ҫ���ĵ������ǳ��򣬶������Լ��Ƿ�֪������Ĵ�С��
   short things[]={1��5��3��8};
   int num_elements=sizeof things/sizeof(short); 
3.C++11�����ʼ������
3.1���ȣ���ʼ������ʱ����ʡ�ԵȺţ�=��
3.2��Σ��ɲ��ڴ������ڰ����κζ������⽫������Ԫ�ض�����Ϊ��
3.3�������б��ʼ����ֹ��խת��
   ������һ������������д�븡��������������խ
   ������һ������������д�볬���������ͷ�Χ��ֵ
   �����һ���������������д������һ������ֵ����Χ�����������ǿ��Եģ�������char������д���intֵ��char��Χ���ǿ��Եġ����������������ͺ͸�����������ϣ�

*/