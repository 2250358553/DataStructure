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

//≥ı ºªØ
void DListInit(SL* phead);

//Œ≤≤Â
void DListPushBack(SL* phead, LTDataType x);

































