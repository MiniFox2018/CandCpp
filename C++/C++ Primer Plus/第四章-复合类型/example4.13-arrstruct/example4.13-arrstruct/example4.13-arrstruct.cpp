// �ṹ����
#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    using namespace std;
    inflatable guests[2] =          // initializing an array of structs
    {
        {"Bambi", 0.5, 21.99},      // first structure in array
        {"Godzilla", 2000, 565.99}  // next structure in array
    };
    //����Ԫ��Ϊ�ṹ�����飬�����ʹ�����������������ȫ��ͬ
    cout << "The guests " << guests[0].name << " and " << guests[1].name
        << "\nhave a combined volume of "
        << guests[0].volume + guests[1].volume << " cubic feet.\n";
    // cin.get();
    return 0;
}
/*
��չ��������union
�����壨union����һ�����ݸ�ʽ�����ܹ��洢��ͬ���������ͣ���ֻ��ͬʱ�洢���е�һ������
����
union one4all
{
   int int_val;
   long long_val;
   double double_val
}�����������ͽṹ��ͦ��԰�
one4all pail������һ������
pail.int_val =15;��ʱ�ʹ���intֵ
pail.double_val=1.38;������飬��ʱintֵ�ͻᱻ��������Ϊֻ��ͬʱ�洢���е�һ������
���ԣ�������ĳ���Ϊ������Ա�ĳ��ȡ�
���������;֮һ�ǣ���������ʹ�����ֻ�����ָ�ʽ��������ͬʱʹ�ã�ʱ���ɽ�ʡ�ռ�
*/