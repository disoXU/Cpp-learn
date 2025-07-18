#include <iostream>
using namespace std;

//@file    : 05 转义字符
//@author  : xds
//@date    : 2025/7/18 19:11:19
//@brief   : 

int main()
{
	// 转义字符

	// 1.换行符 \n
	cout << "Hello World\n";

	// 2.反斜杠 \\

	cout << "\\" << endl;

	// 3.水平制表符 \t ：对齐制表符后的输出数据，占8个字符
	cout << "aaaa\tHelloWorld" << endl;
	cout << "aa\tHelloWorld" << endl;
	cout << "aaaaaa\tHelloWorld" << endl;
	
	system("pause");
	return 0;
}