#include "myFirstClass.h"
#include <iostream>
#include <string.h>
using namespace std;
int myFirstClass::fo2(int num, int num1) {
	return num + num1;
}
int myFirstClass::fo(int num) {
	return fo2(num, 0);
}
int myFirstClass::fo1(int num, int num1) {
	return fo2(num,num1);
}
int myFirstClass::fo1(int num, int num1, int num2) {
	return fo2(fo2(num, num1), num2);
}

//由于fo3已经有定义所以这里不能再定义
//int myFirstClass::fo3() {
//	return 3;
//	//return "这个方法已经被主函数修改";
//}
int main() {
	//myFirstClass *my = new myFirstClass();
	//cout<< my->fo1(1, 2);
	////cout << my->fo2(1, 2);//不可达
	//cout << my->fo(1);
	
//构造函数和析构函数
	string name = "gjl";
	myFirstClass *mtclass = new myFirstClass(name);
	delete(mtclass);


}