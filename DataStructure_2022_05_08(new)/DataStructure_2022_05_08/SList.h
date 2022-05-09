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

typedef struct SListNode1
{
	SLDataType data;
	struct SListNode* next;
}SL1;

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

//找到某一个节点
SL* SListFind(SL* pnext, SLDataType x);

//在指定节点前插入一个数据
void SListInsertBefore(SL** ppnext, SL* pos, SLDataType x);

//删除指定位置的节点
void SListErase(SL** ppnext, SL* pos);

//销毁单链表
void SListDestory(SL** ppnext);

























