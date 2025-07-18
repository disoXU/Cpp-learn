#include <iostream>
using namespace std;

//@file    : 04 字符型
//@author  : xds
//@date    : 2025/7/17 21:07:53
//@brief   : 

int main()
{
	//1.字符型变量创建方式
	char ch = 'a';
	cout << "ch=" << ch << endl;

	//2.字符型变量所占内存
	cout << "char型变量所占内存为：" << sizeof(ch) << "字节" << endl;

	//3.字符型变量常见错误
	//char ch2 = "b";创建字符型变量使用单引号
	//char ch3 = 'abcde';创建字符型变量时，引号内最多四个字符，但是只能显示最后一个字符
	char ch4 = 'abcd';
	cout << ch4 << endl;

	//4.字符型变量对应的ASCII码
	cout << (int)ch << endl; //a->97, A->65
	ch = 98; //对字符型变量赋值可以直接用对应的ASCII码
	cout << ch << endl;

	system("pause");
	return 0;
}