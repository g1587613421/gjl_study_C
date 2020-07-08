
#include <iostream>
#include <stdlib.h>
using namespace std;

//单链表的定义
typedef struct LNode {
	int num;//value
	struct LNode *next;
}LNode,*LinkList;

LNode head;
//初始化
LNode initList() {
	head.num = 0;
	head.next = NULL;
	return head;
}
//头插法增加元素
bool addFirst(int value) {
	LNode *node=(LinkList)(malloc(sizeof(LNode)));
	node->num = value;
	node->next = head.next;
	head.next = node;
	head.num++;
	return true;
}

//尾插法增加元素


bool addLast(int value) {
	LNode *middle = (LinkList)malloc(sizeof(LNode));
	middle->next = &head;
	while(middle->next->next != NULL) {//可以参考下文改进,没必要使用next的next用指针挺好
		middle->next = middle->next->next;
	}
	LNode* node = (LNode*)malloc(sizeof(LNode));
	node->num = value;
	node->next = NULL;
	middle->next->next = node;
	head.num++;
	return true;//bool便于以后扩展
}

//查找第i的结点的值--递归算法
LNode* findNoded(LNode* start, int i) {
	if (i <= 0)
	{
		return start;
	}
	else
	{
		return findNoded(start->next, i - 1);
	}

}

LNode* findNode(int i) {
	if (i > head.num)
		return NULL;
	return findNoded(&head, i);
}

//按值查找结点
LNode* findByValue(int value) {
	LNode* p = head.next;
	while (p!=NULL)
	{
		if (p->num==value)
		{
			return p;
		}
		p = p->next;
	}
	return NULL;
}

//打印当前链表
void printList() {
	LNode *node = head.next;
	cout << "打印链表";
	while (node!=NULL)
	{
		cout << node->num << ends;
		node = node->next;
	}
	cout <<endl;
}
//插入结点,插入到第i个位置
bool insert_index(int i,int value) {
	if (i > head.num) {
		cout << "插入目标索引越界"<<endl;
		return false;
	}
	//if (i == 1) {
	//	addFirst(value);
	//	return true;
	//}
	LNode* p = head.next;
	while (i > 1) {
		p = p->next;
	}
	LinkList node = (LinkList)malloc(sizeof(LNode));
	node = p->next;
	p->next = node;
	head.num++;
	return true;
}

//删除第i个结点并将值返回
int deletenode(int i) {
	if (head.num < i) {
		cout << "越界" << endl;
		throw - 1;
		return -1;
	}
	LNode node = head;
	while (i-- > 1)
	{
		node = *node.next;
	}
	i = node.next->num;
	node.next = node.next->next;
	head.num--;
	return i;
}

//返回链表的大小
int size() {
	return head.num;
}




int main() {
	LNode hh = initList();
	for (int i = 1; i <= 5; i++)
	{
		addFirst(i);
		addLast(5 + i);
	}
	printList();
	cout << "获取当前链表的大小" << endl << "从head结点读取" << head.num<<endl << ends;

	cout << "递归查找第5个值是" << findNode(5)->num << endl << ends;
	cout << "查找值为5的结点" << findByValue(5) << endl << ends;

	cout << "插入100到5的位置" << endl;
	cout << "递归查找第5个值是" << findNode(5)->num << endl << ends;

	printList();

	cout << "删除第5个元素   " << deletenode(5)<<endl;
}