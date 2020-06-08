// 二分搜索.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

static int find(int nums[], int key,int size) {
	int start = 0;
	int last = size;
	int middle;
	while (last>=start)
	{
		middle = (start + last) / 2;
		if (nums[middle]==key)
		{
			return middle;
		}
		if (nums[middle]>key)
		{
			last = middle-1;
		}
		else
		{
			start = middle+1;
		}
		
	}

	return -1;
}
int main()
{
	int data[] ={1,3,5,8,10,111 };
	cout<<find(data,111, sizeof(data) / sizeof(*data));
}
