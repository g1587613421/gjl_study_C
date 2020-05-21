#pragma once
#include "FatherClass1.h"
#include "FatherClass2.h"
#include <iostream>
class childClass :
	public FatherClass1
	,private FatherClass2
{
	protected:
	void vistFatherprotected() {
		printf("尝试通过子类的公开方法访问父类的%s方法\n", "fatherclass2foprotect");
		FatherClass2::fatherclass2foprotect();//子类无法访问父类中的私有成员变量和函数
	}
};

