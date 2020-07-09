#include <iostream>

using namespace std;

//栈的实现
//顺序栈的实现---略--太简单而且不常用--看看课本的代码就行了

//链式栈--与链表差不多

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
	return stack->next == NULL;//或者让头节点计数
}

Stack push(Stack *stack,int value) {
	Stack* s = (Stack*)malloc(sizeof(Stack));
	s->next = stack->next;
	s->value = value;
	stack->next = s;
	return *stack;//建造者模式
}
int peek(Stack *stack) {
	if (stackIsEmpty(stack))
	{
		cout << "数据溢出" << endl;
		throw - 1;
	}
	return stack->next->value;
}

int pop(Stack *stack) {
	//数据合法性检验交给peek
	int value = peek(stack);
	Stack *next = stack->next;
	stack->next = next->next;
	free(next);
	return value;
}


 void destory(Stack *stack) {//递归释放所有内存--释放栈顶指针的时候报错..
	 while (!stackIsEmpty(stack))
	 {
		 pop(stack);
	 }
}
int main() {
	Stack *stack = &init();
	cout << "当前数据为空?" << stackIsEmpty(stack)<<endl;
	push(stack, 1);
	push(stack, 2);
	cout <<"删除栈顶元素"<< pop(stack) << endl;
	cout <<"当前栈顶是"<< peek(stack) << endl;
	cout << "当前数据为空?"<<stackIsEmpty(stack)<<endl;
	push(stack, 3);
	push(stack, 4);
	destory(stack);
	cout << "当前数据为空?" << stackIsEmpty(stack) << endl;
	
}