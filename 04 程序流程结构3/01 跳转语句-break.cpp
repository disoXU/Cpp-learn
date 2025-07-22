#include <iostream>
using namespace std;

//@file    : 01 跳转语句-break
//@author  : xds
//@date    : 2025/7/22 20:49:07
//@brief   : 

int main()
{
	// break的使用时机
	// 1.出现在switch语句中
	cout << "请选择副本难度序号：" << endl;
	cout << "1.困难" << endl;
	cout << "2.一般" << endl;
	cout << "3.简单" << endl;

	int select = 0; // 创建变量存放用户选择
	cin >> select;
	
	switch (select)
	{
	case 1:
		cout << "你选择的是困难程度。" << endl;
		break;
	case 2:
		cout << "你选择的是一般程度。" << endl;
		break;
	case 3:
		cout << "你选择的是简单程度。" << endl;
		break;
	default :
		break;
	}

	// 2.出现在循环语句中
	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
		if (i == 5) break; // 如果i==5，退出循环
	}

	// 3.出现在嵌套循环语句中
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5) break;
			cout << "* ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}