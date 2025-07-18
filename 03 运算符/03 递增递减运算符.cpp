#include <iostream>
using namespace std;

//@file    : 03 递增递减运算符
//@author  : xds
//@date    : 2025/7/18 21:09:35
//@brief   : 

int main()
{
	// 又名自增自减运算符
	int a = 10;
	int b = 10;
	// 1.前置递增
	cout << ++a * 10 << "\t" << a << endl; // 先+1再取值运算

	// 2.后置递增
	cout << b++ * 10 << "\t" << b << endl; // 先取值运算后+1

	int c = 10;
	int d = 10;

	cout << --c * 10 << "\t" << c << endl; // 先-1再取值运算 
	cout << d-- * 10 << "\t" << d << endl; // 先取值运算后-1
	
	system("pause");
	return 0;
}