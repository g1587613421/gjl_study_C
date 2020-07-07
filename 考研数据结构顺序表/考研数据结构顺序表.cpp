
#include <iostream>
#define  MAXSIZE  20

using namespace std;
//定义顺序表

typedef struct Slist {
    int data[MAXSIZE];
    int len;
}mylist;

//初始化
bool initList(mylist *L) {
    L->len = 0;
    return true;
}
//返回第i个结点的值
int getvalue(mylist *L , int i) {
    if (i<1||i>L->len)
    {
        cout << "越界!"<<"\0";
        throw - 1;
        return -1;
    }
    return L->data[i-1];
}
//在第i个结点之前增加一个结点value/在i增加一个值;
bool insert(mylist *L,int i,int value) {
    if (i<1 || i>L->len+1) {
        cout << "越界!" << "\0";
        return false;
    }
    if (L->len>=MAXSIZE)
    {
        cout << "溢出!" << ends << endl;
        return false;
    }
    for (int n = L->len; n > i; n--)
    {
        L->data[n] = L->data[n-1];
    }
    L->data[i-1] = value;
    L->len++;
    return true;
}
bool insertLast(mylist* L, int value) {
    return insert(L,L->len+1,value);
}
bool insertFast(mylist* L, int value) {
    return insert(L, 1, value);
}

//删除第i个元素,且将该元素返回
bool delect(mylist* L, int i,int &value) {
    value = -1;//如果失败返回-1;
    if (i<1 || i>L->len) {
        cout << "越界" << ends << endl;
        return false;
    }
    value = L->data[i-1];
    for (int n = i-1; n < L->len; n++)
    {
        L->data[n] = L->data[n + 1];
    }
    L->len--;
    return true;
}
//按值查找--返回第一个值为value的位号,未找到返回-1;
int find(mylist &list,int value) {
    int count = 0;
    for(int num:list.data)
    {
        count++;
        if (value==num)
        {
            return count;
        }
   
    }
    return -1;
}
void printList(mylist* L) {
    for (int n = 0; n < L->len; n++)
    {
        cout << L->data[n] << "   ";
    }
    cout << ends << endl;
}

//int main()
//{
//    mylist list;
//   cout<<"init"<<initList(&list)<<ends<<endl;
//    //cout<<"getValue(2)"<< getvalue(&list, 2)<<ends<<endl;
//   for (int i=1;i<=10;i++)
//   {
//       insertLast(&list, i);
//   }
//   printList(&list);
//   cout << "查找5" << "  " << find(list, 5)<<ends<<endl;
//   int res=0;
//   cout << "删除5" << "  " << delect(&list, 5, res);
//   cout<< "删除的数据是" << res << ends << endl;
//   printList(&list);
//   cout << "删除5" << "  " << delect(&list, 5, res) << "删除的数据是";
//   cout << res << ends << endl;
//   cout << "查找5" << "  " << find(list, 5) << ends << endl;
//   
//}
