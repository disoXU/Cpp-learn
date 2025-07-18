#include <iostream> 
using namespace std;

// 常量的定义方式
// 1.#define 定义宏常量
#define day 7

int main()
{
	cout << "一周总共" << day << "天" << endl;

	// 2.const 关键字定义常量
	const int month = 12;
	system("pause");

	return 0;
}