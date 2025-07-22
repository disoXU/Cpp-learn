#include <iostream>
#include <ctime>
using namespace std;

//@file    : 02 循环结构-while循环案例
//@author  : xds
//@date    : 2025/7/22 18:49:34
//@brief   : 

int main()
{
	// 系统随机生成一个1到100之间的数字，玩家进行猜测
	// 如果猜错，提示玩家数字过大或过小，如果猜对恭喜玩家胜利，并且退出游戏。

	// 0.添加随机数种子：利用当前系统时间生成随机数，防止每次随机数一样
	srand(unsigned int(time));

	// 1.系统生成随机数
	int num = rand()%100 + 1; // rand生成0-32767范围内的数，对100取余则生成0-99范围的数，加1为[1 100]
	//cout << num << endl;
	
	// 2.玩家首次猜测
	int a = 0;
	cout << "请输入你猜的数字：" << endl;
	cin >> a;

	// 3.判断玩家的猜测
	// 猜对   退出游戏
	// 猜错   提示猜的结果偏大还是偏小  重新返回第2步
	while (a != num)
	{
		if (a > num)
		{
			cout << "猜大啦！" << endl;
		}
		else
		{
			cout << "猜小啦" << endl;
		}
		cout << "请重新猜一个数字：" << endl;
		cin >> a;
	}
	cout << "恭喜你猜对了，这个数是" << num << "！\n游戏结束" << endl;
	
	system("pause");
	return 0;
}