// 
#include <iostream>
int main()
{
    using namespace std;
    int chest = 42;     // ʮ����   1-9
    int waist = 0x42;   // ʮ������ 0x/oX
    int inseam = 042;   // �˽���   0+1-7

    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest << " (42 in decimal)\n";
    cout << "waist = " << waist << " (0x42 in hex)\n";
    cout << "inseam = " << inseam << " (042 in octal)\n";
    // cin.get();
    return 0;
    //��Ĭ������£�cout��ʮ���Ƹ�ʽ��ʾ��������������Щ�����ڳ������������д��
}
/*���Ҫ��ʮ�����ƻ�˽��Ʒ�ʽ��ʾֵ�������ʹ��cout��һЩ��������
  ���Ʒ�dec��hex��oct���ֱ�����ָʾcout��ʮ���ơ�ʮ�����ƺͰ˽��Ƹ�ʽ��ʾ����
    cout << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex;      // ��waist��ʮ���������
    cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
    cout << oct;      //  ��inseam�԰˽������
    cout << "inseam = " << inseam << " (octal for 42)" << endl;
  */

/*c++���ȷ������������
1.���������ɴ洢Ϊ�������ͣ���ʹ��������ĺ�׺����ʾ�ض������ͣ�����ֵ̫�󣬲��ܴ洢Ϊint��������C++�����ͳ����洢Ϊint���͡�
2.�к�׺�ࣺ Ϊl(СдL������L ����long
            Ϊu����U ����unsigned int
            ul������˳�򣬴�Сд���ɣ�����unsigned long
            ll����LL ����long long
            ull��Ull uLL ULL����unsigned long long
3.�޺�׺��:ʮ���ƣ�ѡ�����ܴ��������С���ͣ� int long long long
          ʮ�����ƺͰ˽���:�ܴ����С���ͣ� int ��unsigned int long ��unsigned long��long long��unsigned long long
*/
