#include <iostream>
using namespace std;

//@file    : 043 跳转语句-goto
//@author  : xds
//@date    : 2025/7/22 21:18:50
//@brief   : 

int main()
{
	// goto：无条件跳转
	
	// goto 标记;
	// ...
	// 标记:

	cout << "1、xxxx" << endl;

	cout << "2、xxxx" << endl;
	goto FLAG;

	cout << "3、xxxx" << endl;

	cout << "4、xxxx" << endl;

	FLAG:
	cout << "5、xxxx" << endl;

	system("pause");
	return 0;
}