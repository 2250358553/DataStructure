#pragma once
#include "DList.h"

//初始化
DSL* DListInit()
{
	//创建哨兵头节点
	DSL* Init = (DSL*)malloc(sizeof(DSL));
	Init->next = Init;
	Init->prev = Init;

	//返回头节点
	return Init;
}

//尾插
void DListPushBack(DSL* phead, LTDataType x)
{
	assert(phead);

	//创建新节点
	DSL* newnode = (DSL*)malloc(sizeof(DSL));
	newnode->val = x;

	//链起来形成循环
	DSL* tail = phead->prev;

	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = phead;
	phead->prev = newnode;

}

//遍历打印输出
void DListPrint(DSL* phead)
{
	DSL* tail = phead->next;
	while (tail != phead)
	{
		printf("%d ", tail->val);
		tail = tail->next;
	}
	printf("\n");
}

//尾删
void DListPopBack(DSL* phead)
{
	assert(phead);
	assert(phead->next != phead);
	DSL* backups = phead->prev;

	phead->prev = phead->prev->prev;
	phead->prev->next = phead;

	free(backups);
	backups = NULL;
}

//头插
void DListPushFront(DSL* phead, LTDataType x)
{
	assert(phead);
	DSL* newnode = (DSL*)malloc(sizeof(DSL));
	newnode->val = x;

	newnode->next = phead->next;
	phead->next->prev = newnode;
	phead->next = newnode;
	newnode->prev = phead;
}

//头删
void DListPopFront(DSL* phead)
{
	assert(phead);
	assert(phead->next != phead);

	DSL* backups = phead->next;
	phead->next = phead->next->next;
	phead->next->prev = phead;
	
	free(backups);
	backups = NULL;

}












