#include <iostream>
using namespace std;

//@file    : 06 逻辑运算符
//@author  : xds
//@date    : 2025/7/19 19:19:37
//@brief   : 

int main()
{
	// 逻辑运算符
	int a = 10;
	
	// 非 !  C++中除了0都是真
	cout << "a=" << a << "\t!a=" << !a << "\t!!a=" << !!a << endl;
	
	// 与 && 同真为真，其余为假
	cout << "1&&1\t" << (1 && 1) << endl;
	cout << "0&&1\t" << (0 && 1) << endl;
	cout << "0&&0\t" << (0 && 0) << endl;

	// 或 || 同假为假，其余为真
	cout << "1||1\t" << (1 || 1) << endl;
	cout << "0||1\t" << (0 || 1) << endl;
	cout << "0||0\t" << (0 || 0) << endl;

	system("pause");
	return 0;
}