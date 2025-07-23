#include <iostream>
using namespace std;

//@file    : 08 二维数组-成绩统计案例
//@author  : xds
//@date    : 2025/7/23 20:49:37
//@brief   : 

int main()
{
	// 1.创建二维数组，3行3列
	int scores[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};

	string names[] = {"张三", "李四", "王五"};

	// 2.统计考试成绩，让每行的3列相加，统计出总和
	for (int i = 0; i < 3; i++)
	{
		int sum = 0; // 统计每行分数总和
		for (int j = 0; j < 3; j++) 
		{
			sum += scores[i][j];
			//cout << scores[i][j] << " ";
		}
		//cout << "第" << i + 1 << "个人总分为：" << sum << endl;
		cout << names[i] << "的总分为：" << sum << endl;
	}

	system("pause");
	return 0;
}