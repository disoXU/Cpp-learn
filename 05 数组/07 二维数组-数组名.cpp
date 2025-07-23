#include <iostream>
using namespace std;

//@file    : 07 二维数组-数组名
//@author  : xds
//@date    : 2025/7/23 20:33:32
//@brief   : 

int main()
{
	// 二维数组名用途

	// 1.查看二维数组所占内存空间
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "二维数组arr占用内存空间：" << sizeof(arr) << "字节" << endl;
	cout << "二维数组arr第一行占用内存空间：" << sizeof(arr[0]) << "字节" << endl;
	cout << "二维数组arr的元素占用内存空间：" << sizeof(arr[0][0]) << "字节" << endl;

	cout << "二维数组arr的行数为：" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "二维数组arr的列数为：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	// 2.获取二维数组首地址
	cout << "二维数组arr的首地址：" << (int)arr << endl;
	cout << "二维数组arr第一行的首地址：" << (int)arr[0] << endl;
	cout << "二维数组arr第二行的首地址：" << (int)arr[1] << endl;
	cout << "二维数组arr第一个元素的首地址：" << (int)&arr[0][0] << endl;

	system("pause");
	return 0;
}