#include "childClass.h"

int main() {
	childClass *cc = new childClass();
	//�޷����ʵڶ���˽��������з���,��һ������ķ���Ҳֻ��protect�ܷ���
	cc->fatherclass1fopublic();
	//cc->fatherclass2fopublic();//���ɴ�
	//cc->vistFatherprotected();//���ɴ�

}