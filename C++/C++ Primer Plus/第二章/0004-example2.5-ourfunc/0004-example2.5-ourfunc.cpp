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
}
void simon(int n)
{
	using namespace std;
	cout << "Smion says touch your toes" << n << "times." << endl;
		 
}
//
