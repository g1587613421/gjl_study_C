#include "string"
#include <iostream>
#include "myClass1.h"

using namespace std;


int main() {
	myClass1 *myc = new myClass1();
	//cout << myc->name;//无法访问,name是私有的
	cout << myc->getCount();
	cout <<"\n"<<"第"<< myc->getCount()<<"次修改\n";
	cout << (new innerclass)->lookout()<<"\n";
	//访问静态变量
	cout << "\n" << "第" << myc->getCount() << "次修改";


}