#include <iostream>
using namespace std;

//@file    : 02 选择结构-多行if语句
//@author  : xds
//@date    : 2025/7/21 19:44:18
//@brief   : 

int main()
{
	// if语句：if (条件) {条件满足执行的语句} else {条件不满足执行的语句}
	// 用户输入分数，如果分数大于600，播报进入一本线
	int score = 0;
	cout << "请输入分数：" << endl;

	// 用户输入分数
	cin >> score;
	cout << "您输入的分数为：" << score << endl;

	// 进行判断
	if (score > 600) // 大于600，条件满足，执行下面的代码块，否则执行else下面的代码块
	{
		cout << "恭喜您！您已进入一本线！" << endl;
	}
	else
	{
		cout << "很遗憾，您未进入一本线！" << endl;
	}

	system("pause");
	return 0;
}