#define _CRT_SECURE_NO_WARNINGS 1
#include "DList.h"

void DListTest1()
{
	//调用初始化链表函数，接收返回的头节点
	DSL* s1 = DListInit();

	//调用尾插函数
	DListPushBack(s1, 1);
	DListPushBack(s1, 2);
	DListPushBack(s1, 3);
	DListPushBack(s1, 4);
	DListPrint(s1);

	//尾删
	DListPopBack(s1);
	DListPrint(s1);

	//头插
	DListPushFront(s1,5);
	DListPrint(s1);

	//头删
	DListPopFront(s1);
	DListPrint(s1);
}

int main()
{
	DListTest1();


	return 0;
}