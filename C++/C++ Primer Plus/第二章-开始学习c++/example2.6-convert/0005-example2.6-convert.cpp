#include <iostream>//�û�������з���ֵ�ĺ���
int stonetolb(int);     // �Ⱥ�������
int main()
{
    using namespace std;
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;
    // cin.get();
    // cin.get();
    return 0;
}

int stonetolb(int sts)
{
    return 14 * sts;
}
/*����using namespace std;�Ĳ��䣺�ó����ܹ��������ƿռ�std�ķ����ж��֣����������е�4�֡�
    ��using namespace std�����ں�������֮ǰ�����ļ������еĺ������ܹ�ʹ�����ƿռ�std�����е�Ԫ�ء�
    ��using namespace std�������ض��ĺ��������У��øú����ܹ�ʹ�����ƿռ�std�е�����Ԫ�ء�
    ���ض��ĺ�����ʹ������using std::cout; �����ı���ָ�������using namespace std; ���øú����ܹ�ʹ��ָ����Ԫ�أ���cout��
    ��ȫ��ʹ�ñ���ָ��using��������Ҫʹ�����ƿռ�std�е�Ԫ��ʱ��ʹ��ǰ׺std::��������ʾ��*/