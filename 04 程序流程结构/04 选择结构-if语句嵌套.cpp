#include <iostream>
using namespace std;

//@file    : 04 选择结构-if语句嵌套
//@author  : xds
//@date    : 2025/7/21 20:03:59
//@brief   : 

int main()
{
	// 选择结构 if语句嵌套
	// 输入考试分数
	// 如果大于600分视为进入一本线，在屏幕输出
	//     如果大于700进入北大，如果大于650进入清华，否则视为人大
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
	if (score > 600) // 依次判断，先满足先执行，然后结束判断。最多执行 一个代码块
	{
		cout << "恭喜您！您已进入一本线！" << endl;
		if (score > 700) cout << "恭喜你被北大录取！" << endl;
		else if (score > 650) cout << "恭喜你被清华录取！" << endl;
		else cout << "恭喜你被人大录取！" << endl;
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