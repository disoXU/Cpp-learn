#include <iostream>
using namespace std;

//@file    : 03 值传递
//@author  : xds
//@date    : 2025/7/24 15:29:16
//@brief   : 

// 值传递：函数调用时实参将数值传入给形参
// 定义函数，实现两个数字的交换

// 如果函数不需要返回值，定义时返回值类型写void
void swap(int num1, int num2)
{
	cout << "交换前：" << endl;
	cout << "num1=" << num1 << "\tnum2=" << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "交换后：" << endl;
	cout << "num1=" << num1 << "\tnum2=" << num2 << endl;

	// return;不需要返回值，函数不写return表达式
}

int main()
{
	int a = 50;
	int b = 10;

	cout << "a=" << a << "\tb=" << b << endl;
	// 值传递时，如果形参发生改变，并不会影响实参
	swap(a, b);
	cout << "a=" << a << "\tb=" << b << endl;

	system("pause");
	return 0;
}