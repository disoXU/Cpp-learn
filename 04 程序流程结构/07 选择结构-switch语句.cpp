#include <iostream>
using namespace std;

//@file    : 07 选择结构-switch语句
//@author  : xds
//@date    : 2025/7/22 16:29:02
//@brief   : 

int main()
{
	// switch语句
	// 给电影打分，9-10经典，7-8非常好，5-6一般，0-5烂片

	// 1.提示用户给电影打分
	cout << "请给电影评分：" << endl;

	// 2.输入分数
	int score = 0;
	cin >> score;
	cout << "您打的分数为" << score << endl;

	// 3.根据用户输入的分数显示对应结果
	// 与if语句只执行最先满足的条件的代码块，switch语句只要遇见满足的条件后...
	//     后面所有的语句都会被执行（无论条件是否满足），所以switch代码块后常跟break跳出选择结构
	switch (score)
	{
	case 10: 
		cout << "您认为是经典电影" << endl;
		break;
	case 9:
		cout << "您认为是经典电影" << endl;
		break;
	case 8:
		cout << "您认为是非常好的电影" << endl;
		break;
	case 7:
		cout << "您认为是非常好的电影" << endl;
		break;
	case 6:
		cout << "您认为是一般的电影" << endl;
		break;
	case 5:
		cout << "您认为是一般的电影" << endl;
		break;
	default:
		cout << "您认为是烂片" << endl;
		break;
	}

	// if与switch区别
	// switch缺点，判断表达式只能是整型或字符，不能是区间
	// switch优点，结构清晰，执行效率高

	system("pause");
	return 0;
}