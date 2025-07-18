#include <iostream>
using namespace std;

//@file    : 06 字符串型
//@author  : xds
//@date    : 2025/7/18 19:26:11
//@brief   : 

int main()
{
	// 字符串型

	// 1.C风格字符串
	// 注意事项1 char 字符串名[]
	// 注意事项2 等号后面用双引号包括字符串
	char s[] = "Hello World";
	cout << s << endl;

	// 2.C++风格字符串，VS2022不再需要加入string头文件
	string str = "Hello World";
	cout << str << endl;
	system("pause");
	return 0;
}