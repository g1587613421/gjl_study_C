// 算法学习.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <locale.h>
using namespace std;

struct Mylist
{
	Mylist *next;
	int data;
};
//封装成链表函数
Mylist get_new_ListNode(int num)
{
	Mylist *m = new Mylist();
	m->data = num;
	return *m;
}
int main()
{
	Mylist m1 = get_new_ListNode(1);
	Mylist m2 = get_new_ListNode(2);
	m1.next = &m2;

}

//矩阵乘法
struct mat {
	int n, m;
	double data[100][100];
};

int mul(mat& c, const mat& a, const mat& b) {
	int i, j, k;
	if (a.m != b.n)
		return 0;
	c.n = a.n;
	c.m = b.m;
	for (i = 0; i < c.n; i++)
		for (j = 0; j < c.m; j++)
			for (c.data[i][j] = k = 0; k < a.m; k++)
				c.data[i][j] += a.data[i][k] * b.data[k][j];
	return 1;
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
