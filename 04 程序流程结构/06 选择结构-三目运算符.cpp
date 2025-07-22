#include <iostream>
using namespace std;

//@file    : 06 选择结构-三目运算符
//@author  : xds
//@date    : 2025/7/21 20:33:57
//@brief   : 

int main()
{
	// 三目运算符：表达式a ? 表达式b : 表达式c
	// 表达式a成立，该式结果为表达式b，否则该式结果为表达式c

	// 将a与b比较，将较大的值赋给c
	int a = 10;
	int b = 20;
	int c = 0;

	c = a > b ? a : b;
	cout << "c=" << c << endl;

	// 在C++中，三目运算符返回的是表达式，若表达式为变量，返回值就是变量，可以继续进行赋值
	(a > b ? a : b) = 100; //100赋值给了b
	cout << "a=" << a << "\tb=" << b << endl;

	system("pause");
	return 0;
}