#include<iostream>
#include<string.h>
#include "FoTest.h"
using namespace std;

#define gjl "高金磊"//宏定义
#define ower mydata("高金磊")//属于宏指令的替代指令不属于宏方法 
#define time cout<<"2020-5-15\n"
#define gjldata(name,time) (printf("%s\n%s",name,time))
void mydata(string name) {
	printf("所有者:%s\n", name);
};
const string PI="3.14";//相当于java的终态

void myprint(string str) {
	printf("%s\n", str);
}


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
	char chars1[] = { '1','2','3','4','5','\0' };//要是没有这个\0....后果不敢设想
	cout << chars1 << "     " << sizeof chars1 << "\n";
	char str1[] = "12345";
	cout <<str1<<"\t"<< sizeof str1;
}

void String_study() {
	string str1 = "1", str2 = "2";
	str1.append("12");//+
	str2.assign(str1+"3");//=
	cout << str1.compare(str2)<<"\n";//<,==,>;
	str2.insert(0, "0");//插入到下表为0的位置
	str2.erase(3,5);//从下标为3的地方开始擦除到5(省略就是全部)
	cout << str2.size()<<"\n";//当前大小
	cout << str2.max_size() << "\n";//最大容量
	cout << str2.capacity() << "\n";//最大容量"--这个没有实质上的用途
	myprint(str2);
	cout << str2.find("1") << "\n";
	str1.swap(str2);//对调str1,str2的值
	myprint(str2);
	str2.substr(1);//获取子串
	cout << str2.empty() << "\n";
	cout << str2.at(2);

}

void varAddress() {
	int a = 0,b=0;
	cout << "a和b的地址分别是" << &a << "\t" << &b<<"\n";
	//带指针的变量声明
	//int* A = 1;//不合法
	int* A = &a;
	cout <<"初始值/t"<< A++ <<"\t当前值"<<A<< "\n";

	int** Ad = &A;//双重指针
	cout << Ad << "\t" << *Ad<<"等于" << A<<"\n"<<**Ad<<"等于"<<a;
	
	//数组访问
	int nums[] = { 1,2,3,4,5,6,7,8,9 };
	cout << "变量名表示的是nums[0]" << *nums<<"\n";
	cout << "方式一nums[1]\t" << nums[1] << "\n";
	cout << "方式二(*nums+1)\t" << nums[1] << "\n";
	cout << "方式三(*(&nums[1])\t" << nums[1] << "\n";
	

	//动态内存分配
	int *i = new int(1);
	cout << i << "\n";
	delete &i;
	//cout << i << "\n";//有异常
}
void reftype() {
	//引用数据类型
	int a = 100;
	int &b = a;
	cout << b<<"\n";
	a = 50;
	cout << b << "\n";
	b = 25;
	cout << a << "\n";


}


void fo1(int num) {
	num++;
}
void fo2(int *num) {
	num++;//num是地址这里只是移动了指针指向的内存空间,也就是修改的指针的位置
}
void fo3(int &num) {
	num++;
}
void method() {
	//方法调用的三种参数传递
	int num = 0;
	fo1(num);
	cout << num << "\n";
	fo2(&num);
	cout << num << "\n";
	fo3(num);
	cout << num << "\n";


}
int main()
{
	//ower;
	//time;
	//ff();
	//str();
	//String_study();
	//varAddress();
	//reftype();
	//method();
	//gjldata("高金磊","2020-5-15");

	return 0;
}