#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int LTDataType;

typedef struct ListNode
{
	LTDataType val;
	struct ListNode* next;
	struct ListNode* prev;

}SL;

//��ʼ��
void DListInit(SL* phead);

//β��
void DListPushBack(SL* phead, LTDataType x);

































