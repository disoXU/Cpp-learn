#include <iostream>
using namespace std;

//@file    : 05 函数的声明
//@author  : xds
//@date    : 2025/7/24 16:44:11
//@brief   : 

// 函数的声明
// 比较函数，实现两个整型数字进行比较，返回较大的值

// 声明：提前告诉编译器函数的存在，函数定义不要 {} 部分
// 声明可以写多次，定义只能写一次
int max(int a, int b);

int main()
{
	int a = 10;
	int b = 20;

	cout << max(a, b) << endl;

	system("pause");
	return 0;
}

// 定义
int max(int a, int b)
{
	return a > b ? a : b;
}