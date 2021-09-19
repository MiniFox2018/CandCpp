//算术运算符
#include <iostream>
int main()
{
    using namespace std;
    float hats, heads;//浮点型

    cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point
    //setf( )。这种调用迫使输出使用定点表示法，以便更好地了解精度，它防止程序把较大的值切换为E表示法，并使程序显示到小数点后6位
    //为E表示法，并使程序显示到小数点后6位。参数ios_base::fixed和ios_base::floatfield是通过包含iostream来提供的常量。
    cout << "Enter a number: ";
    cin >> hats;
    cout << "Enter another number: ";
    cin >> heads;

    cout << "hats = " << hats << "; heads = " << heads << endl;
    cout << "hats + heads = " << hats + heads << endl;
    cout << "hats - heads = " << hats - heads << endl;
    cout << "hats * heads = " << hats * heads << endl;
    cout << "hats / heads = " << hats / heads << endl;
    // /为取整，%为取余只能用在整数之间，所以没写。
    //由于float类型表示有效位数的能力有限。记住，对于float，C++只保证6位有效位。只能得到保证精度下的正确值。如果需要更高的精度，请使用double或long double。
    // cin.get();
    // cin.get();
    return 0;
}
