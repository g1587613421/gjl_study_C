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
		printf("����ͨ������Ĺ����������ʸ����%s����\n", "fatherclass2foprotect");
		FatherClass2::fatherclass2foprotect();//�����޷����ʸ����е�˽�г�Ա�����ͺ���
	}
};

