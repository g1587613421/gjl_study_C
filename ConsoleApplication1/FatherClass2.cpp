#include <iostream>
#include "FatherClass2.h"

void FatherClass2::fatherclass2fopublic() {
	printf("这是%s函数\n", "fatherclass2fopublic");
}
void FatherClass2::fatherclass2foprivate() {
	printf("这是%s函数\n", "fatherclass2foprivate");
}
void FatherClass2::fatherclass2foprotect() {
	printf("这是%s函数\n", "fatherclass2foprotect");
}