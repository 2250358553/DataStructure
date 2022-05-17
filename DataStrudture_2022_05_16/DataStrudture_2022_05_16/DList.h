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

//������ӡ��������ֵ
void DListPrint(DSL* phead);

//��ʼ��
DSL* DListInit();

//β��
void DListPushBack(DSL* phead, LTDataType x);

//βɾ
void DListPopBack(DSL* phead);

//ͷ��
void DListPushFront(DSL* phead, LTDataType x);

//ͷɾ
void DListPopFront(DSL* phead);






















