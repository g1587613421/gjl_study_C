#include <iostream>
#include "child.h"
#include "father.h"
using namespace std;

child::child() {
	cout << "子类正在初始化\n";
}
child::~child() {
	cout << "子类正在执行析构函数\n";

}
father::father() {
	cout << "父类正在初始化\n";

}
father::~father() {
	cout << "父类正在执行析构函数\n";

}
int main()
{
	delete(new child());
}
