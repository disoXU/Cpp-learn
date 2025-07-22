#include <iostream>
using namespace std;

//@file    : 05 循环结构-for循环
//@author  : xds
//@date    : 2025/7/22 19:54:03
//@brief   : 

int main()
{
	// for循环：for(起始表达式1;条件表达式2;末尾循环体3) {循环语句4}
	// 执行顺序：1243243243...
	// 起始表达式1：进行初始化，只执行一次
	// 条件表达式2：循环条件，决定是否允许4
	// 末尾循环体3：每次执行完循环体执行，用于修改循环变量，终止循环

	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}

	system("pause");
	return 0;
}