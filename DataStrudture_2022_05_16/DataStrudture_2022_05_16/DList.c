#pragma once
#include "DList.h"

//��ʼ��
DSL* DListInit()
{
	//�����ڱ�ͷ�ڵ�
	DSL* Init = (DSL*)malloc(sizeof(DSL));
	Init->next = Init;
	Init->prev = Init;

	//����ͷ�ڵ�
	return Init;
}

//β��
void DListPushBack(DSL* phead, LTDataType x)
{
	assert(phead);

	//�����½ڵ�
	DSL* newnode = (DSL*)malloc(sizeof(DSL));
	newnode->val = x;

	//�������γ�ѭ��
	DSL* tail = phead->prev;

	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = phead;
	phead->prev = newnode;

}

//������ӡ���
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

//βɾ
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

//ͷ��
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

//ͷɾ
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












