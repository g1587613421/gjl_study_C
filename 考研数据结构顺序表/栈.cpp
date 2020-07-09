#include <iostream>

using namespace std;

//ջ��ʵ��
//˳��ջ��ʵ��---��--̫�򵥶��Ҳ�����--�����α��Ĵ��������

//��ʽջ--��������

typedef struct Stack {
	int value=0;
	struct Stack *next=NULL;
}Stack;

Stack init() {
	Stack stack = *(Stack*)malloc(sizeof(Stack));
	stack.next = NULL;
	return stack;
}

bool stackIsEmpty(Stack *stack) {
	return stack->next == NULL;//������ͷ�ڵ����
}

Stack push(Stack *stack,int value) {
	Stack* s = (Stack*)malloc(sizeof(Stack));
	s->next = stack->next;
	s->value = value;
	stack->next = s;
	return *stack;//������ģʽ
}
int peek(Stack *stack) {
	if (stackIsEmpty(stack))
	{
		cout << "�������" << endl;
		throw - 1;
	}
	return stack->next->value;
}

int pop(Stack *stack) {
	//���ݺϷ��Լ��齻��peek
	int value = peek(stack);
	Stack *next = stack->next;
	stack->next = next->next;
	free(next);
	return value;
}


 void destory(Stack *stack) {//�ݹ��ͷ������ڴ�--�ͷ�ջ��ָ���ʱ�򱨴�..
	 while (!stackIsEmpty(stack))
	 {
		 pop(stack);
	 }
}
int main() {
	Stack *stack = &init();
	cout << "��ǰ����Ϊ��?" << stackIsEmpty(stack)<<endl;
	push(stack, 1);
	push(stack, 2);
	cout <<"ɾ��ջ��Ԫ��"<< pop(stack) << endl;
	cout <<"��ǰջ����"<< peek(stack) << endl;
	cout << "��ǰ����Ϊ��?"<<stackIsEmpty(stack)<<endl;
	push(stack, 3);
	push(stack, 4);
	destory(stack);
	cout << "��ǰ����Ϊ��?" << stackIsEmpty(stack) << endl;
	
}