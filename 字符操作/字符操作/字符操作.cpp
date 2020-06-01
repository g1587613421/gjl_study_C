// 字符操作.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char c;
	cin >> c;
	if (isalnum(c))
	{
		cout << c << "是字母或者数字" << "isalnum" << "\n";
	}
	if (isalpha(c))
	{
		cout << c << "是字母" << "isalpha" << "\n";
		if (islower(c))
		{
			cout << c << "是小写字母" << "islower" << "\n";

		}
		if (isupper(c))
		{
			cout << c << "是大写字母" << "isupper" << "\n";
		}
	}
	if (isdigit(c))
	{
		cout << c << "是数字" << "isdigit" << "\n";
		cout << "ascil是" << toascii(c) << "\n";
	}

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
