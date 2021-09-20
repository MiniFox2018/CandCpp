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
//1.1��ͬC++����ʹ�ò�ͬ���ڴ������洢������ʹ�õ��ڴ���Խ�󣬿��Ա�ʾ������ֵ��ΧҲԽ��
//1.1���⣬�е����ͣ��������ͣ��ɱ�ʾ��ֵ�͸�ֵ�����е����ͣ��޷������ͣ����ܱ�ʾ��ֵ
//1.1�����ȣ�width�����������洢����ʱʹ�õ��ڴ�����ʹ�õ��ڴ�Խ�࣬��Խ��
//1.1C++�Ļ������ͣ�����ȵ�����˳�����У��ֱ���char��short��int��long��C++11������long long������ÿ�����Ͷ��з��Ű汾���޷��Ű汾������ܹ���10�����Ϳɹ�ѡ��
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
//3.1�򵥵ı�����������
//��������ֻ��ʹ����ĸ�ַ������ֺ��»��ߣ�_����
//���Ƶĵ�һ���ַ����������֡�
//���ִ�д�ַ���Сд�ַ���
//���ܽ�C++�ؼ����������ơ�
//�������»��߻��»��ߺʹ�д��ĸ��ͷ�����Ʊ�������ʵ�֣�����������ʹ�õ���Դ��ʹ�á�
//��һ���»��߿�ͷ�����Ʊ�������ʵ�֣�����ȫ�ֱ�ʶ����
//C++�������Ƶĳ���û�����ƣ����������е��ַ��������壬����Щƽ̨�г������ơ�(C ǰ63�ַ������壩

//tips1:ʹ����_time_stop��_Donut���������Ʋ��ᵼ�±��������󣬶��ᵼ����Ϊ�Ĳ�ȷ���ԡ����仰˵����֪���������ʲô�������ֱ����������ԭ���ǣ����������Ʋ��ǷǷ��ģ���Ҫ����ʵ��ʹ�á�ȫ������ָ�������Ʊ�������λ��
//tips2:����������������ĵ������һ�����ƣ�ͨ�������������»����ַ������ʷֿ�����my_onions�����ߴӵڶ������ʿ�ʼ��ÿ�����ʵĵ�һ����ĸ��д

//������ڴ�Ļ�����Ԫ��λ��bit�������Խ�λ�������ӿ��أ����Կ���Ҳ���Թء��ر�ʾֵ0������ʾֵ1
//  short����16λ��
//  int������shortһ������
//  long����32λ����������intһ������
//  long long����64λ����������longһ������
//�ֽڣ�byte��ͨ��ָ����8λ���ڴ浥Ԫ
//�������������ַ���ͨ����ASCII��EBCDIC�ַ��������Ƕ�������8λ�����ɣ�������ʹ���������ַ�����ϵͳ�У�C++�ֽ�ͨ������8λ��Ȼ�������ʱ�̿�����Ҫʹ�ø�����ַ�������Unicode�������Щʵ�ֿ���ʹ��16λ����32λ���ֽ�

//1.���ڳ�ʼ��������
//1.1��ȥ������ʼ����C++������һ��C����û�еĳ�ʼ���﷨��int wrens��432����
//1.2������һ�ֳ�ʼ����ʽ�����ַ�ʽ��������ͽṹ������C++98�У�Ҳ�����ڵ�ֵ������int hambugers={24}��
//1.2�������ų�ʼ�������ڵ�ֵ���������λ����࣬��C++11��׼ʹ���������θ����ˡ����ȣ��������ַ�ʽʱ������ʹ�õȺţ�=����Ҳ���Բ�ʹ��
//1.2��Σ��������ڿ��Բ������κζ���������������£�����������ʼ��Ϊ��
//1.2�������������ڸ��õط�������ת������