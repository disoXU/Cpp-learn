#include <iostream>
using namespace std;

//@file    : 02 取模运算符
//@author  : xds
//@date    : 2025/7/18 20:48:11
//@brief   : 

int main()
{
	// 只有整型变量可以进行取模运算
	int a = 10;
	int b = 3;

	cout << "a%3=" << a % 3 << endl; // 1

	int c = 20;
	cout << "a%c=" << a % c << endl; // 10

	// 取模运算符基于除法，除数也不能为0
	// 两个小数是不可以做取模运算的
	/*
	double d = 0.5;
	double e = 0.2;
	cout << d % e << endl;
	*/

	system("pause");
	return 0;
}