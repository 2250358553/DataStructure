#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//重定义 int 为 SLDataType
typedef int SLDataType;

//重定义struct SListNode 为SL
typedef struct SListNode
{
	SLDataType data;
	struct SListNode* next;
}SL;

//遍历链表
void SListPrint(SL* pnext);

//尾插
void SListPushBack(SL** ppnext, SLDataType x);

//尾删
void SListPopBack(SL** ppnext);

//头插
void SListPushFront(SL** ppnext, SLDataType x);

//头删
void SListPopFront(SL** ppnext);



























