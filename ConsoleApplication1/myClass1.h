#include <string.h>
#include "string"
#include <ostream>
using namespace std;

class myClass1
{
	static int count;//��̬����--�������ɴ���
private:
	string name = "gjl";
	//��Ԫ����
	friend string look();
	friend class innerclass;


	//ʹ����Ԫ�����޸�˽�г�Ա����
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