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

typedef struct SListNode1
{
	SLDataType data;
	struct SListNode* next;
}SL1;

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

//�ҵ�ĳһ���ڵ�
SL* SListFind(SL* pnext, SLDataType x);

//��ָ���ڵ�ǰ����һ������
void SListInsertBefore(SL** ppnext, SL* pos, SLDataType x);

//ɾ��ָ��λ�õĽڵ�
void SListErase(SL** ppnext, SL* pos);

//���ٵ�����
void SListDestory(SL** ppnext);

























