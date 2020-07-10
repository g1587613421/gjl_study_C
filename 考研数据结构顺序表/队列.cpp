
#include <iostream>

using namespace std;

//˳��洢�пռ��˷��Ҿ��м����

//ѭ������---�ж϶������Ƕӿ�
//1.����һ�����е�Ԫ,����ָ����ȶӿ�,(��β+1)%maxsize==���׾��Ƕ���
//2.��¼����,ͨ��size���ж������ǿ�..
//3.tag���,��һ��ִ�е�ʱ����ɾ�����ǿ�,ִ�е�����Ӿ�����..



//��������ʽ�洢

typedef struct Node {
	int data=0;
	struct Node *next;
}Node;

typedef struct {
	Node *font, *rear;
}Queue;

Queue* init() {//��ʼ��һ������
	Node* node = (Node*)malloc(sizeof(Node));
	Queue* queue = (Queue*)malloc(sizeof(Queue));
	node->next = NULL;
	queue->font = node;
	queue->rear = NULL;
	return queue;
}

void add(Queue *queue, int value) {
	Node* node = (Node*)malloc(sizeof(node));
	node->data = value;
	if (queue->font->next == NULL) {
		queue->font->next = node;
		queue->rear = node;
	}
	else
	{
		queue->rear->next = node;
		queue->rear = node;
	}
	queue->font->data++;
}

bool IsEmpty(Queue *queue) {
	//return queue.font->data == 0;//one way
	return queue->font->next == NULL;
}
bool pop(Queue *queue,  int& res) {
	res = -1;
	if (IsEmpty(queue))
		return false;
	Node *node = queue->font->next;
	res = node->data;
	if (queue->font->next == queue->rear) {
		queue->font->next = NULL;
		queue->rear = NULL;
	}
	else
	{
		queue->font->next = node->next;
	}
	queue->font->data--;
	/*free(node);*/
	return true;
}
int main() {
	Queue *queue = init();
	cout << IsEmpty(queue) << endl;
	add(queue, 5);
	add(queue, 2);
	//add(queue, 3);
	int res = 0;
	cout<<pop(queue,res);
	cout <<"     "<< res << endl;
	cout << pop(queue, res);
	cout << "     " << res << endl;
	cout << IsEmpty(queue) << endl;
	cout << pop(queue, res);
	cout << "     " << res << endl;
	cout << pop(queue, res);
	return 0;
}
