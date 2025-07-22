#include <iostream>
using namespace std;

//@file    : 04 循环结构-水仙花数
//@author  : xds
//@date    : 2025/7/22 19:31:53
//@brief   : 

int main()
{
	// 1.遍历所有三位数字
	// 2.如果是水仙花数，打印出来
	int num = 100;

	do
	{
		int a = 0; // 个位
		int b = 0; // 十位
		int c = 0; // 百位

		a = num % 10;
		b = num / 10 % 10;
		c = num / 100;
		if (a * a * a + b * b * b + c * c * c == num)
		{
			cout << num << endl;
		}
		num++;
	} while (num < 1000);

	system("pause");
	return 0;
}