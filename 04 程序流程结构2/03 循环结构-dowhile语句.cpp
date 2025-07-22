#include <iostream>
using namespace std;

//@file    : 03 循环结构-dowhile语句
//@author  : xds
//@date    : 2025/7/22 19:22:14
//@brief   : 

int main()
{
	// do...while语句
	// 在屏幕显示0-9这10个数字

	int num = 0;
	do
	{
		cout << num << endl;
		num++;
	} while (num < 10);

	// 区别
	// do...while先执行一次代码块，再判断条件表达式决定是否再次执行代码块
	// while先判断条件表达式，满足再执行代码块

	system("pause");
	return 0;
}