#include "childClass.h"

int main() {
	childClass *cc = new childClass();
	//无法访问第二个私有类的所有方法,第一个父类的方法也只有protect能访问
	cc->fatherclass1fopublic();
	//cc->fatherclass2fopublic();//不可达
	//cc->vistFatherprotected();//不可达

}