#include "FatherClass1.h"
#include <iostream>

void FatherClass1::fatherclass1fopublic() {
	printf("这是%s函数\n", "fatherclass1fopublic");
}
void FatherClass1::fatherclass1foprivate() {
	printf("这是%s函数\n", "fatherclass1foprivate");
}
void FatherClass1::fatherclass1foprotect() {
	printf("这是%s函数\n", "fatherclass1foprotect");
}

