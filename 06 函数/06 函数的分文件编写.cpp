#include <iostream>
using namespace std;
#include "swap.h"

//@file    : 06 函数的分文件编写
//@author  : xds
//@date    : 2025/7/24 16:56:53
//@brief   : 

// 函数的分文件编写
// 实现两个数字交换的函数

// 函数的声明
// void swap(int a, int b);

// 函数的定义
//void swap(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//}

// 1. 创建后缀名为“函数.cpp”的头文件
// 2. 创建后缀名为“函数.h”的源文件
// 3. 在头文件中写函数的声明
// 4. 在源文件中写函数的定义
// 5. 在“函数.cpp”文件中include“函数.h”文件，若定义函数时用到了特殊语法，还需要在h文件中include需要的头文件
// 6. 在主程序main函数cpp文件中include“函数.h”文件

int main()
{
	int a = 10;
	int b = 20;

	swap(a, b);

	system("pause");
	return 0;
}