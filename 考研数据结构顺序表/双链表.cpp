#include <istream>

using namespace std;


typedef struct Node
{
	Node *next;
	Node* pre;
	int value;
}Node,*LinkedList;


Node *head,*last;

int len = 0;

//将数据value插入到第i个卫i
bool insert(int i, int value) {
	if (i>len+1)
	{
		return false;
	}
	Node* middle = (LinkedList)malloc(sizeof(Node));
	middle->value = value;
	if (i==1&&head==NULL)
	{
		head = last = middle;
		len++;
		return true;
	}
	Node node = *head->next;
	while (i-->1)
	{
		node = *node.next;
	}

	middle->next = node.next;
	node.next = middle;
	middle->pre =&node;
	if (middle->next != NULL) {
		middle->next->pre = middle;
	}
	len++;
	return true;
}


int main() {


}