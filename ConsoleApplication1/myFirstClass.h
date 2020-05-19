#include <string.h>
#include "string"
using namespace std;
//类声明
class myFirstClass
{
	string tag;
public: myFirstClass() {
	tag = "name";
	}
	myFirstClass(string &name) {
		tag=name;
		printf("正在执行构造函数,tag为%s\n",name);
	}

	~myFirstClass()
	{
		printf("%s正在执行析构函数", tag);
	}
	//以下功能类似于接口--实现可以在这个类也可以在其他地方
public:
	int fo(int num);
	int fo1(int num,int num1);
	int fo1(int num,int num1,int num2);
	int fo3() {
		return 0;
		//return "这个方法是myFirstClass内部定义的";
	}
private:
	int fo2(int num, int num1);
};



