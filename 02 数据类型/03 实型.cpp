#include <iostream>
using namespace std;

//@file    : 03 实型
//@author  : xds
//@date    : 2025/7/17 20:55:17
//@brief   : 

int main()
{
	//1.单精度 float
	//2.双精度 double
	//默认情况输出小数会显示6位有效数字

	float f1 = 3.1415926f; //单精度浮点型，不加f编译器会将变量转换成double类型，但是内存空间仍然是float类型
	cout << "f1=" << f1 << endl; //输出：f1=3.14
	cout << "float占用的内存空间为：" << sizeof(f1) << "字节" << endl; //输出：sizeof(f1)=4字节

	double d1 = 3.1415926; //双精度浮点型
	cout << "d1=" << d1 << endl; //输出：d1=3.14
	cout << "double占用的内存空间为：" << sizeof(d1) << "字节" << endl; //输出：sizeof(d1)=8字节

	// 科学记数法
	float f2 = 3e2; // 3*10^2
	cout << "f2=" << f2 << endl; //输出：f2=300

	float f3 = 3e-2; //3*10^-2
	cout << "f3=" << f3 << endl; //输出：f3=0.03
	system("pause");
	return 0;
}