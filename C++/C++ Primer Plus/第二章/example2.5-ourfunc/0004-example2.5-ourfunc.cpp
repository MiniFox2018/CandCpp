#include<iostream>
void simon(int);//使用自定义函数要先声明：用户定义的无返回值的函数
int main(){
	using namespace std;
	simon(3);
	cout << "Pick an integer:";
	int count;
	cin >> count;
	simon(count);
	cout << "Done!" << endl;
	return 0;
	//对于有返回值的函数，应使用关键字return来提供返回值，并结束函数。这就是为什么要在main( )结尾使用return语句的原因
}
void simon(int n)
{
	using namespace std;
	cout << "Smion says touch your toes" << n << "times." << endl;
		 
}
//1.1main( )返回一个int值，而程序员要求它返回整数0。但可能会产生疑问，将这个值返回到哪里了呢？
//1.1可以将计算机操作系统（如UNIX或Windows）看作调用程序。因此，main( )的返回值并不是返回给程序的其他部分，而是返回给操作系统
//1.1通常的约定是，退出值为0则意味着程序运行成功，为非零则意味着存在问题。因此，如果C++程序无法打开文件，可以将它设计为返回一个非零值。然后，便可以设计一个外壳脚本或批处理文件来运行该程序，如果该程序发出指示失败的消息，则采取其他措施。

