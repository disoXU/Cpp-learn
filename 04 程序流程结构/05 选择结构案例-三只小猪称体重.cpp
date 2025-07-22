#include <iostream>
using namespace std;

//@file    : 05 选择结构案例-三只小猪称体重
//@author  : xds
//@date    : 2025/7/21 20:18:08
//@brief   : 

int main()
{
	// 三只小猪称体重
	// 定义三个变量承载体重
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	cout << "请依次输入三只小猪的体重：" << endl;
	cin >> num1;
	cin >> num2;
	cin >> num3;

	cout << "小猪1的体重为：" << num1 << endl;
	cout << "小猪2的体重为：" << num2 << endl;
	cout << "小猪3的体重为：" << num3 << endl;

	if (num1 > num2) // 小猪1比小猪2重
	{
		if (num1 > num3) // 小猪1比小猪3重
		{
			cout << "小猪1最重" << endl;
		}
		else // 小猪3比小猪1重
		{
			cout << "小猪3最重" << endl;
		}
	}
	else // 小猪2比小猪1重
	{
		if (num2 > num3) // 小猪2比小猪3重
		{
			cout << "小猪2最重" << endl;
		}
		else // 小猪3比小猪2重
		{
			cout << "小猪3最重" << endl;
		}
	}

	system("pause");
	return 0;
}