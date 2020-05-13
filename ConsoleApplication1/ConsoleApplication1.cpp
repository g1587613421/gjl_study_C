#include<iostream>
#include "ConsoleApplication1.h"
using namespace std;


#define gjl "高金磊"
const string PI="3.14";//相当于java的终态




void ff() {
	cout << "aaa" << gjl << "\n";
	cout << sizeof(int) << "\n";
	cout << sizeof(gjl) << "\n";

	printf("啦啦啦%s", "这是C语言的输出方式");

	//bool数据类型
	bool b = 111;
	cout << !b << "\n";//用0  1表示值


	//自动类型转换
	int one = 1 + 2.0f + 3.0;
	//转型运算符
	cout << static_cast<int>(8.0f);

	//switch
	cout << "输入一个数字";
	int number;
	cin >> number;
	if (number > 0)
	{
		printf("%d是大于0的", number);
	}
	else
	{
		printf("%d是小于0的", number);
	}
	int n = 0;
A:
	cout << "goto指令\n" << n;
	for (int m = 0; m < 5; m++, n++);
	if (n < 40)
		goto A;
}
void str() {
	string ss = "12345";
	cout <<ss.data()<<"     "<< sizeof ss<<"\t"<<ss.length()<<"\n";
	char chars[] ={'1','2','3','4','5'};//不能识别结束符
	cout << chars << "     " << sizeof chars<<"\n";
	char chars1[] = { '1','2','3','4','5','\0' };
	cout << chars1 << "     " << sizeof chars1 << "\n";

}

int main()
{
	//ff();
	str();
	return 0;
}