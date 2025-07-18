#include <iostream>
using namespace std;

//@file    : 08 数据输入
//@author  : xds
//@date    : 2025/7/18 19:46:17
//@brief   : 

int main()
{
	// 数据输入
	// 1.整型
	int a = 0;
	cout << "请给整型变量a赋值：" << endl;
	cin >> a;
	cout << "整型变量a=" << a << endl; 

	// 2.浮点型
	float f = 0;
	cout << "请给浮点型变量f赋值：" << endl;
	cin >> f;
	cout << "浮点型变量f=" << f << endl;

	// 3.字符型
	char c = '0';
	cout << "请给字符型变量c赋值：" << endl;
	cin >> c;
	cout << "字符型变量c=" << c << endl;

	// 4.字符串型
	string str = "";
	cout << "请给字符串型变量str赋值：" << endl;
	cin >> str;
	cout << "字符串型变量str=" << str << endl;

	// 5.布尔型
	bool flag = 0;
	cout << "请给布尔型变量flag赋值：" << endl;
	cin >> flag;
	cout << "布尔型变量falg=" << flag << endl;

	system("pause");
	return 0;
}