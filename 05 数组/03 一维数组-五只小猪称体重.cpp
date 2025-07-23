#include <iostream>
using namespace std;

//@file    : 03 一维数组-五只小猪称体重
//@author  : xds
//@date    : 2025/7/23 17:17:21
//@brief   : 

int main()
{
	// 1.创建五只小猪体重的数组
	int arr[5] = { 300, 350, 500, 400, 250 };
	int max = 0; // 先认定一个最大值为max

	// 2.从数组中找出最大值
	for (int i = 0; i < 5; i++)
	{
		// 如果数组中元素大于max，将max更新为该元素
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	// 3.打印最大值
	cout << "最重的小猪体重为：" << max << endl;


	system("pause");
	return 0;
}