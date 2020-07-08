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
	Node node = *head->next;
	while (i-->1)
	{
		node = *node.next;
	}
	Node *middle = (LinkedList)malloc(sizeof(Node));
	middle->value = value;
	middle->next = node.next;
	node.next = middle;
	middle->pre =&node;
	if (middle->next != NULL) {
		middle->next->pre = middle;
	}
	len++;
	return true;
}


void printFirst() {

}


int main() {


}