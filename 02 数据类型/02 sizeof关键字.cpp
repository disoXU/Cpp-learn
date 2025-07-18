#include <iostream>
using namespace std;

//@file    : sizeof关键字
//@author  : xds
//@date    : 2025/7/17 20:31:57
//@brief   : 

int main()
{
	//sizeof关键字：求出数据类型占用内存大小
	//语法：sizeof(数据类型/变量名)
	short num1 = 10; //短整型
	int num2 = 10; //整型
	long num3 = 10; //长整型
	long long num4 = 10; //长长整型

	cout << "short类型占用内存大小：" << sizeof(num1) << "字节" << endl; //2字节
	cout << "int类型占用内存大小：" << sizeof(num2) << "字节" << endl; //4字节
	cout << "long类型占用内存大小：" << sizeof(num3) << "字节" << endl; //4字节
	cout << "long long类型占用内存大小：" << sizeof(num4) << "字节" << endl; //8字节

	system("pause");
	return 0;
}