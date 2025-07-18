#include <iostream> 
using namespace std;

// 标识符命名规则
// 1.标识符不能是关键字
// 2. 标识符由字母、数字和下划线组成
// 3.标识符第一个字符只能是字母或下划线
// 4.标识符区分大小写
int main()
{
	//int int = 10;

	int abc = 10;
	int _abc = 20;
	int _123abc = 30;

	// int 123abc = 40; // 错误：标识符不能以数字开头

	int aaa = 100;
	cout << aaa << endl;
	// cout << AAA << endl; AAA与aaa是不同的标识符

	// 建议：给变量起名时，最好做到见名知意
	int num1 = 1;
	int num2 = 2;
	int sum = num1 + num2;
	cout << "num1 + num2 = " << sum << endl;
	system("pause");

	return 0;
}