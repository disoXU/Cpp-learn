#include <iostream>
using namespace std;

//@file    : 01 算术运算符-加减乘除
//@author  : xds
//@date    : 2025/7/18 20:29:52
//@brief   : 

int main()
{
	// 加减乘除
	int a = 10;
	int b = 3;

	cout << "a+b=" << a + b << endl;
	cout << "a-b=" << a - b << endl;
	cout << "a*b=" << a * b << endl;
	cout << "a/b=" << a / b << endl; // 两个整数相除，结果仍是整数，求商

	int c = 0;
	cout << "a/b=" << a / 2 << endl; // 除数为0，错误，但编译器未报错直接崩了

	// 两个小数可以进行相除，运算结果是浮点型
	double d = 0.5;
	double e = 0.25;
	cout << "d/e=" << d / e << "类型" << typeid(d / e).name() << endl;


	system("pause");
	return 0;
}