#include <iostream>
using namespace std;

//@file    : 03 选择结构-多条件if语句
//@author  : xds
//@date    : 2025/7/21 19:52:12
//@brief   : 

int main()
{
	// 选择结构 多条件if语句
	// 输入考试分数
	// 如果大于600分视为进入一本线，在屏幕输出
	// 如果大于500分视为进入二本线，在屏幕输出
	// 如果大于400分视为进入三本线，在屏幕输出
	// 否则视为未进入本科线，在屏幕输出

	int score = 0;
	cout << "请输入分数：" << endl;

	// 1.输入分数
	cin >> score;

	// 2.提示输入
	cout << "您输入的分数为：" << score << endl;

	// 3.判断
	if (score > 600) // 依次判断，先满足先执行，然后结束判断。只允许一个代码块
	{
		cout << "恭喜您！您已进入一本线！" << endl;
	}
	else if (score > 500)
	{
		cout << "恭喜您！您已进入二本线！" << endl;
	}
	else if (score > 400)
	{
		cout << "恭喜您！您已进入三本线！" << endl;
	}
	else
	{
		cout << "很遗憾！你未进入本科线！" << endl;
	}

	system("pause");
	return 0;
}