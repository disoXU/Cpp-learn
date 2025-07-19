#include <iostream>
using namespace std;

//@file    : 05 关系运算符
//@author  : xds
//@date    : 2025/7/19 19:12:02
//@brief   : 

int main()
{
	// 比较运算符
	int a = 20;
	int b = 10;
	cout << "a=" << a << "  b=" << b << endl;
	// ==
	cout << "a==b\t" << (a == b) << endl;

	// !=
	cout << "a!=b\t" << (a != b) << endl;

	// <
	cout << "a<b\t" << (a < b) << endl;

	// >
	cout << "a>b\t" << (a > b) << endl;

	// <=
	cout << "a<=b\t" << (a <= b) << endl;

	// >=
	cout << "a>=b\t" << (a >= b) << endl;

	system("pause");
	return 0;
}