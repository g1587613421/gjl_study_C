#include "string"
#include <iostream>
#include "myClass1.h"

using namespace std;


int main() {
	myClass1 *myc = new myClass1();
	//cout << myc->name;//�޷�����,name��˽�е�
	cout << myc->getCount();
	cout <<"\n"<<"��"<< myc->getCount()<<"���޸�\n";
	cout << (new innerclass)->lookout()<<"\n";
	//���ʾ�̬����
	cout << "\n" << "��" << myc->getCount() << "���޸�";


}