//�ṹ���ṹ��һ�ֱ�������������ݸ�ʽ����Ϊͬһ���ṹ���Դ洢�������͵����ݣ�����ֻ��ͬһ��
#include <iostream>
struct inflatable   // �ṹ�����������ⲿ���������ã��ڲ������ں�����ֻ�ܺ������ã�һ�㶼�ⲿ����
{
    char name[20];
    float volume;
    double price;
};
//inflatable���ݸ�ʽ�����ƣ���������͵�����Ϊinflatable,���Կ����񴴽�char��int���͵ı�����������inflatable���͵ı���
// struct inflatable  goose; C��ʽҪ��struct
//        inflatable  vincent; C++ʡ�� 
int main()
{
    using namespace std;
    inflatable guest =
    {
        "Glorious Gloria",  // name value
        1.88,               // volume value
        29.99               // price value
    };  
    inflatable pal =
    {
        "Audacious Arthur",
        3.12,
        32.99
    }; 
    // ��ʼ����ʽ
    /* C++11�ṹ��ʼ����
     1.������һ����C++11Ҳ֧�ֽ��б��ʼ�����ڽṹ���ҵȺţ�=���ǿ�ѡ�ģ�
     2.�����������δ�����κζ�����������Ա����������Ϊ��
     3.��������խת��*/
    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";
    // pal.name is the name member of the pal variable
    cout << "You can have both for $";
    cout << guest.price + pal.price << "!\n";
    // cin.get();
    return 0;
}
 /*����ʹ�ø�ֵ�������=�����ṹ������һ��ͬ���͵Ľṹ,���ָ�ֵ����Ϊ��Ա��ֵ
    inflatable bouquet =
    {
        "sunflowers",
        0.20,
        12.49
    };
    inflatable choice;
    choice = bouquet;  // assign one structure to another
   */
/*����ͬʱ��ɶ���ṹ�ʹ����ṹ�����Ĺ���:
struct perks
 {
    int key_number;
    char car[12];
 }mr_smith��ms_jones;
 *���Գ�ʼ�������ַ�ʽ�����ı�����
  struct perks
 {
    int key_number;
    char car[12];
 }mr_glitz=
 {
    7,
    "Packrd"
 };
 *����������û�����ƵĽṹ���ͣ�������ʡ�����ƣ�ͬʱ����һ�ֽṹ���ͺ�һ���������͵ı���
 struct
 {
  int x;
  int y;
  }position;
��������û�����ƣ�����Ժ��޷������������͵ı���,ֻ��position
*/