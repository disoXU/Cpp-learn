#include <iostream>
using namespace std;

//@file    : 04 赋值运算符
//@author  : xds
//@date    : 2025/7/19 19:01:22
//@brief   : 

int main()
{
	// 赋值运算符

	// =
	int a = 10;
	cout << "a=" << a << endl;

	// +=
	a = 10;
	a += 2; // a = a + 2
	cout << "a+=2\ta=" << a << endl;

	// -=
	a = 10;
	a -= 2; // a = a - 2
	cout << "a-=2\ta=" << a << endl;

	// *=
	a = 10;
	a *= 2; // a = a * 2
	cout << "a*=2\ta=" << a << endl;

	// /=
	a = 10;
	a /= 2; // a = a / 2
	cout << "a/=2\ta=" << a << endl;

	// %=
	a = 10;
	a %= 2; // a = a % 2
	cout << "a%=2\ta=" << a << endl;

	system("pause");
	return 0;
}