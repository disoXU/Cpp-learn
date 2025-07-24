#include <iostream>
using namespace std;

//@file    : 02 函数的调用
//@author  : xds
//@date    : 2025/7/24 15:19:55
//@brief   : 

//定义一个加法函数，实现两个数相加
int add(int num1, int num2)  // 定义时num1，num2没有实际值，称为形式参数，简称形参，定义函数形式参数必须带数据类型
{
	int sum = num1 + num2;
	return sum;
}

int main()
{
	// main函数中调用add函数
	int a = 10;
	int b = 20;

	// 函数调用语法：函数名称(参数)
	// a，b称为实际参数，简称实参
	// 调用时实参的值传递给形参，a传递给num1，b传递给num2。这种传递参数的方法叫值传递
	int c = add(a, b);  
	cout << "c=" << c << endl;

	system("pause");
	return 0;
}