#include <string.h>
#include "string"
using namespace std;
//������
class myFirstClass
{
	string tag;
public: myFirstClass() {
	tag = "name";
	}
	myFirstClass(string &name) {
		tag=name;
		printf("����ִ�й��캯��,tagΪ%s\n",name);
	}

	~myFirstClass()
	{
		printf("%s����ִ����������", tag);
	}
	//���¹��������ڽӿ�--ʵ�ֿ����������Ҳ�����������ط�
public:
	int fo(int num);
	int fo1(int num,int num1);
	int fo1(int num,int num1,int num2);
	int fo3() {
		return 0;
		//return "���������myFirstClass�ڲ������";
	}
private:
	int fo2(int num, int num1);
};



