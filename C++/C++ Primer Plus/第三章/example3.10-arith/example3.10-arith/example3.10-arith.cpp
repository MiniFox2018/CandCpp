//���������
#include <iostream>
int main()
{
    using namespace std;
    float hats, heads;//������

    cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point
    //setf( )�����ֵ�����ʹ���ʹ�ö����ʾ�����Ա���õ��˽⾫�ȣ�����ֹ����ѽϴ��ֵ�л�ΪE��ʾ������ʹ������ʾ��С�����6λ
    //ΪE��ʾ������ʹ������ʾ��С�����6λ������ios_base::fixed��ios_base::floatfield��ͨ������iostream���ṩ�ĳ�����
    cout << "Enter a number: ";
    cin >> hats;
    cout << "Enter another number: ";
    cin >> heads;

    cout << "hats = " << hats << "; heads = " << heads << endl;
    cout << "hats + heads = " << hats + heads << endl;
    cout << "hats - heads = " << hats - heads << endl;
    cout << "hats * heads = " << hats * heads << endl;
    cout << "hats / heads = " << hats / heads << endl;
    // /Ϊȡ����%Ϊȡ��ֻ����������֮�䣬����ûд��
    //����float���ͱ�ʾ��Чλ�����������ޡ���ס������float��C++ֻ��֤6λ��Чλ��ֻ�ܵõ���֤�����µ���ȷֵ�������Ҫ���ߵľ��ȣ���ʹ��double��long double��
    // cin.get();
    // cin.get();
    return 0;
}
