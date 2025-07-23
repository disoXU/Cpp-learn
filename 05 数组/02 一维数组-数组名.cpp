#include <iostream>
using namespace std;

//@file    : 02 一维数组-数组名
//@author  : xds
//@date    : 2025/7/23 17:03:26
//@brief   : 

int main()
{
	// 数组名用途
	// 1.可以通过数组名统计整个数组占用内存大小
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	cout << "arr数组占用内存空间为：" << sizeof(arr) << "字节" << endl;
	cout << "arr中每个元素占用内存空间为：" << sizeof(arr[0]) << "字节" << endl;
	cout << "arr数组元素个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;

	// 2.可以通过数组名查看数组首地址
	cout << "数组首地址为：" << (int)arr << endl;
	cout << "数组中第一个元素的地址为：" << (int) & arr[0] << endl; // 元素取地址要加取地址符
	cout << "数组中第二个元素的地址为：" << (int) & arr[1] << endl;
	
	// 数组名是常量，不能被赋值


	system("pause");
	return 0;
}