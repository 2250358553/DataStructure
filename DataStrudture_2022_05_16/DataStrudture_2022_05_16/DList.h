#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int LTDataType;

typedef struct DListNode
{
	LTDataType val;	
	struct DListNode* prev;
	struct DListNode* next;
}DSL;

//遍历打印输出链表的值
void DListPrint(DSL* phead);

//初始化
DSL* DListInit();

//尾插
void DListPushBack(DSL* phead, LTDataType x);

//尾删
void DListPopBack(DSL* phead);

//头插
void DListPushFront(DSL* phead, LTDataType x);

//头删
void DListPopFront(DSL* phead);






















