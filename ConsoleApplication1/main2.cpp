#include <iostream>
#include <string.h>
#include <string>
#include "myOperator.h"

using namespace std;


int main() {
	myOperator o1(10);
	myOperator o2(20);
	cout<<(o1 + o2)<<"\n";
	cout << !o1;
}