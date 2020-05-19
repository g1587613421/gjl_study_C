#include <string.h>
#include "string"
#include <ostream>
using namespace std;

class myClass1
{
	static int count;//静态变量--计算生成次数
private:
	string name = "gjl";
	//友元函数
	friend string look();
	friend class innerclass;


	//使用友元函数修改私有成员变量
public:
	string look(myClass1 myc) {
		return myc.name;
	}
	myClass1() {
		count++;
	}
public:	int getCount() {
		return count;
	}


};
int myClass1::count = 0;
class innerclass
{
public:
	innerclass();
	~innerclass();
	string	lookout() {
		myClass1 *my = new myClass1();
		cout << my->name;
		return my->name;
	}

private:

};

innerclass::innerclass()
{
}

innerclass::~innerclass()
{
}