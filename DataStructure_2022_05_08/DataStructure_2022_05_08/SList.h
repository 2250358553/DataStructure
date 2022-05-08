#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//�ض��� int Ϊ SLDataType
typedef int SLDataType;

//�ض���struct SListNode ΪSL
typedef struct SListNode
{
	SLDataType data;
	struct SListNode* next;
}SL;

//��������
void SListPrint(SL* pnext);

//β��
void SListPushBack(SL** ppnext, SLDataType x);

//βɾ
void SListPopBack(SL** ppnext);

//ͷ��
void SListPushFront(SL** ppnext, SLDataType x);

//ͷɾ
void SListPopFront(SL** ppnext);



























