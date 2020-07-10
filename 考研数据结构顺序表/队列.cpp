
#include <iostream>

using namespace std;

//顺序存储有空间浪费且具有假溢出

//循环队列---判断队满还是队空
//1.牺牲一个队列单元,两个指针相等队空,(队尾+1)%maxsize==队首就是队满
//2.记录长度,通过size来判断满还是空..
//3.tag标记,上一次执行的时候是删除则是空,执行的是入队就是满..



//以下是链式存储

typedef struct Node {
	int data=0;
	struct Node *next;
}Node;

typedef struct {
	Node *font, *rear;
}Queue;

Queue* init() {//初始化一个队列
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
