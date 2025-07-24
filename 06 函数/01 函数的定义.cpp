#include <iostream>
using namespace std;

//@file    : 01 函数的定义
//@author  : xds
//@date    : 2025/7/24 15:09:03
//@brief   : 

//函数的定义一般主要有5个步骤：
	//	1、返回值类型：int、double、 ... 、void
	//	2、函数名
	//	3、参数列表：  (数据类型 变量名, 数据类型 变量名, ...)
	//	4、函数体语句  {代码块; return 表达式;}
	//	5、return 表达式

//定义一个加法函数，实现两个数相加
int add(int num1, int num2) // num1，num2称为形式参数，简称形参，定义函数形式参数必须带数据类型
{
	int sum = num1 + num2;
	return sum;
}

// 函数必须定义在main函数前，或在main函数前进行声明

int main()
{
	

	system("pause");
	return 0;
}