
#include <iostream>
#include <stdlib.h>
using namespace std;

//������Ķ���
typedef struct LNode {
	int num;//value
	struct LNode *next;
}LNode,*LinkList;

LNode head;
//��ʼ��
LNode initList() {
	head.num = 0;
	head.next = NULL;
	return head;
}
//ͷ�巨����Ԫ��
bool addFirst(int value) {
	LNode *node=(LinkList)(malloc(sizeof(LNode)));
	node->num = value;
	node->next = head.next;
	head.next = node;
	head.num++;
	return true;
}

//β�巨����Ԫ��


bool addLast(int value) {
	LNode *middle = (LinkList)malloc(sizeof(LNode));
	middle->next = &head;
	while(middle->next->next != NULL) {//���Բο����ĸĽ�,û��Ҫʹ��next��next��ָ��ͦ��
		middle->next = middle->next->next;
	}
	LNode* node = (LNode*)malloc(sizeof(LNode));
	node->num = value;
	node->next = NULL;
	middle->next->next = node;
	head.num++;
	return true;//bool�����Ժ���չ
}

//���ҵ�i�Ľ���ֵ--�ݹ��㷨
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

//��ֵ���ҽ��
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

//��ӡ��ǰ����
void printList() {
	LNode *node = head.next;
	cout << "��ӡ����";
	while (node!=NULL)
	{
		cout << node->num << ends;
		node = node->next;
	}
	cout <<endl;
}
//������,���뵽��i��λ��
bool insert_index(int i,int value) {
	if (i > head.num) {
		cout << "����Ŀ������Խ��"<<endl;
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

//ɾ����i����㲢��ֵ����
int deletenode(int i) {
	if (head.num < i) {
		cout << "Խ��" << endl;
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

//��������Ĵ�С
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
	cout << "��ȡ��ǰ����Ĵ�С" << endl << "��head����ȡ" << head.num<<endl << ends;

	cout << "�ݹ���ҵ�5��ֵ��" << findNode(5)->num << endl << ends;
	cout << "����ֵΪ5�Ľ��" << findByValue(5) << endl << ends;

	cout << "����100��5��λ��" << endl;
	cout << "�ݹ���ҵ�5��ֵ��" << findNode(5)->num << endl << ends;

	printList();

	cout << "ɾ����5��Ԫ��   " << deletenode(5)<<endl;
}