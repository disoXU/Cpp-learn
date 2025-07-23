#include <iostream>
using namespace std;

//@file    : 05 一维数组-冒泡排序
//@author  : xds
//@date    : 2025/7/23 19:14:19
//@brief   : 

int main()
{
	// 利用冒泡排序实现升序排序
	int arr[] = { 4, 2, 8, 0, 5, 7, 9, 3, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	
	cout << "排序前：" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	// 开始冒泡排序
	// n代表每轮进行比较的元素个数
	while (n > 1)
	{
		// n个元素需要比较n-1次，只需要遍历到倒数第二个元素即可
		for (int i = 0; i < n - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				// 如果前一个元素大于后一个元素，交换它们
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
		n--; // 依次减少最后一个数不参与下一次排序
	}

	cout << "排序后：" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}