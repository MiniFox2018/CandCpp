#include<iostream>
#include<cmath>
int main() {
	using namespace std;
	double area;
	cout << "Enter the floor area,in square feet,of your home:";
	cin >> area;
	double side;
	side = sqrt(area);
	//C++�������ڴ�������ʱ�������и�ֵ: double side = sqrt(area);
	cout << "That's the equivlent of  a square" << side
	     << "feet to the side " << endl;
	cout << "How fascinating!" << endl;
	return 0;


}	
//1.1��Щ������Ҫ������Ϣ����Щ����ʹ�ö���������������ö��ŷֿ������磬��ѧ����pow( )������������������ֵΪ�Ե�һ������Ϊ�ף��ڶ�������Ϊָ������
//1.1 double pow(double,double);
//1.2 һЩ�����������κβ��������磬��һ��C�⣨��cstdlib��stdlib.hͷ�ļ���صĿ⣩����һ��rand( )�������ú����������κβ�����������һ���������
//1.2 int rand(void);
//1.3 ����һЩ����û�з���ֵ�����磬�����д��һ��������������Ԫ�����ָ�ʽ��ʾ���֡����������ݲ���23.5ʱ����������Ļ����ʾ$23.50���������������ֵ���͸���Ļ�������ǵ��ó�����˲���Ҫ����ֵ��������ԭ����ʹ�ùؼ���void��ָ���������ͣ���ָ������û�з���ֵ��
//1.3 void bucks(double);
//1.4��׼C���ṩ��140���Ԥ����ĺ���.���ڿ⺯������ʹ��֮ǰ�����ṩ��ԭ�ͣ�ͨ����ԭ�ͷŵ�main( )����֮ǰ