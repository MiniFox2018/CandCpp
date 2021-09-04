#include<iostream>
#include<cmath>
int main() {
	using namespace std;
	double area;
	cout << "Enter the floor area,in square feet,of your home:";
	cin >> area;
	double side;
	side = sqrt(area);
	//C++还允许在创建变量时对它进行赋值: double side = sqrt(area);
	cout << "That's the equivlent of  a square" << side
	     << "feet to the side " << endl;
	cout << "How fascinating!" << endl;
	return 0;


}	
//1.1有些函数需要多项信息。这些函数使用多个参数，参数间用逗号分开。例如，数学函数pow( )接受两个参数，返回值为以第一个参数为底，第二个参数为指数的幂
//1.1 double pow(double,double);
//1.2 一些函数不接受任何参数。例如，有一个C库（与cstdlib或stdlib.h头文件相关的库）包含一个rand( )函数，该函数不接受任何参数，并返回一个随机整数
//1.2 int rand(void);
//1.3 还有一些函数没有返回值。例如，假设编写了一个函数，它按美元、美分格式显示数字。当向它传递参数23.5时，它将在屏幕上显示$23.50。由于这个函数把值发送给屏幕，而不是调用程序，因此不需要返回值。可以在原型中使用关键字void来指定返回类型，以指出函数没有返回值：
//1.3 void bucks(double);
//1.4标准C库提供了140多个预定义的函数.对于库函数，在使用之前必须提供其原型，通常把原型放到main( )定义之前