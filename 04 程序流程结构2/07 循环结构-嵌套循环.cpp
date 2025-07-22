#include <iostream>
using namespace std;

//@file    : 07 循环结构-嵌套循环
//@author  : xds
//@date    : 2025/7/22 20:13:33
//@brief   : 

int main()
{
	// 利用嵌套循环实现星图

	// 打印一行星图
	/*for (int i = 0; i < 10; i++)
	{
		cout << "* ";
	}
	cout << endl;*/

	// 外层执行一次，内层执行一周
	// 外层循环
	for (int i = 0; i < 10; i++)
	{
		// 内层循环
		for (int j = 0; j < 10; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}