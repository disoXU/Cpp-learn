#include <iostream>
using namespace std;

//@file    : 02 跳转语句-continue
//@author  : xds
//@date    : 2025/7/22 21:05:47
//@brief   : 

int main()
{
	// continue：在循环语句中，遇见continue则跳过本次循环中余下尚未执行的语句，转而执行下一次循环
	// break：结束所有循环

	for (int i = 0; i < 100; i++)
	{
		// 如果是奇数则输出，偶数不输出
		if (i % 2 == 0) continue;
		cout << i << endl;
	}

	system("pause");
	return 0;
}