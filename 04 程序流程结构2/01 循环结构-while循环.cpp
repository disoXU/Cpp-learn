#include <iostream>
using namespace std;

//@file    : 01 循环结构-while循环
//@author  : xds
//@date    : 2025/7/22 17:07:01
//@brief   : 

int main()
{
	// while循环：while(条件) {循环执行的代码}
	// 先判断再执行
	// 在屏幕上打印0~9这10个数字

	int num = 0;
	while (num < 10)
	{
		cout << num << endl;
		num++;
	}

	system("pause");
	return 0;
}