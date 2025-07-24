#include <iostream>
using namespace std;

//@file    : 04 函数的常见样式
//@author  : xds
//@date    : 2025/7/24 15:46:30
//@brief   : 

// 函数常见样式
// 1.无参无返
void test1()
{
	cout << "this is test1" << endl;
}

// 2.有参无返
void test2(int a)
{
	cout << "this is test2 a=" << a << endl;
}

// 3.无参有返
int test3()
{
	cout << "this is test3" << endl;
	return 1000;
}

// 4.有参有返
int test4(int a)
{
	cout << "this is test4 a=" << a << endl;
	return a+1;
}



int main()
{
	// 无参无返函数调用
	test1();

	// 有参无返函数调用
	test2(2);

	// 无参有返函数调用
	int num1 = test3();
	cout << "num1=" << num1 << endl;

	// 有参有返函数调用
	int num2 = test4(10000);
	cout << "num2=" << num2 << endl;

	system("pause");
	return 0;
}