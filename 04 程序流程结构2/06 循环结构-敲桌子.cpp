﻿#include <iostream>
using namespace std;

//@file    : 06 循环结构-敲桌子
//@author  : xds
//@date    : 2025/7/22 19:59:03
//@brief   : 

int main()
{
	// 敲桌子：
	// 从1开始数到数字100
	// 如果数字个位含有7 num%10 == 7
	// 或者数字十位含有7 num/10 == 7
	// 或者该数字是7的倍数 num%7 == 0
	// 我们打印敲桌子，其余数字直接打印输出。

	for (int i = 1; i <= 100; i++)
	{
		if ((i % 7 == 0) || (i % 10 == 7) || (i / 10) == 7)
		{
			cout << "敲桌子" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}

	system("pause");
	return 0;
}