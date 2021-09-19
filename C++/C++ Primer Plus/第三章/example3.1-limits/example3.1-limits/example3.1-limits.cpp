#include <iostream>
#include <climits>              // ����ʹ��limits.h����ϵͳ����
int main()
{
    using namespace std;
    int n_int = INT_MAX;        // initialize n_int to max int value
    short n_short = SHRT_MAX;   // symbols defined in climits file
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    // sizeof������������ͻ�����ĳ��ȣ���λΪ�ֽ�
    cout << "int is " << sizeof(int) << " bytes." << endl;
    cout << "short is " << sizeof n_short << " bytes." << endl;
    cout << "long is " << sizeof n_long << " bytes." << endl;
    cout << "long long is " << sizeof n_llong << " bytes." << endl;
    cout << endl;
    //������������int��ʹ��sizeof�����ʱ��Ӧ�����Ʒ��������У����Ա���������n_short��ʹ�ø�������������ǿ�ѡ�ģ�

    cout << "Maximum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl << endl;

    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;
    // cin.get();
    return 0;
}
//1.1ͷ�ļ�climits�а����˹����������Ƶ���Ϣ��
//1.1�����˵���������˱�ʾ�������Ƶķ������ơ�
//1.1���磬INT_MAXΪint�����ȡֵ��CHAR_BITΪ�ֽڵ�λ����
//2.1climits�еķ��ų���:
//CHAR_BIT:     char��λ��
//CHAR_MAX:     char�����ֵ
//CHAR_MIN:     char����Сֵ
//SCHAR_MAX:    signed char�����ֵ
//SCHAR_MIN:    signed char����Сֵ
//UCHAR_MAX:    unsigned char�����ֵ
//SHRT_MAX:     short�����ֵ
//SHRT_MIN:     short����Сֵ
//USHRT_MAX:    unsigned short�����ֵ
//INT_MAX:      int�����ֵ
//INT_MIN:      int����Сֵ
//UNIT_MAX:     unsigned int�����ֵ
//LONG_MAX:     long�����ֵ
//LONG_MIN:     long����Сֵ
// ULONG_MAX:   unsigned long�����ֵ
//LLONG_MAX:    long long�����ֵ
//LLONG_MIN:    long long����Сֵ
//ULLONG_MAX:   unsigned long long�����ֵ