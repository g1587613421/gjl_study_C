#include "myOperator.h"

int operator+(myOperator& obj1, myOperator& obj2)
{
	return obj1.num - obj2.num;
}

bool operator!(myOperator&)
{
	return false;
}
