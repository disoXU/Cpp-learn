#include <iostream>
using namespace std;

//@file    : 08 循环结构-乘法口诀表
//@author  : xds
//@date    : 2025/7/22 20:21:38
//@brief   : 

int main()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << "*" << i << "=" << j * i << "\t";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}