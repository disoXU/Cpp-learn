#include <iostream>
using namespace std;

//@file    : 07 布尔类型
//@author  : xds
//@date    : 2025/7/18 19:35:33
//@brief   : 

int main()
{
	// 1.创建bool类型数据
	bool flag = true; // true代表真
	cout << flag << endl;

	flag = false; // false代表假
	cout << flag << endl;

	// 本质上 非0代表真 0代表假

	// 2.查看bool类型所占空间大小
	cout << "bool类型所占内存空间：" << sizeof(bool) << endl;

	system("pause");
	return 0;
}