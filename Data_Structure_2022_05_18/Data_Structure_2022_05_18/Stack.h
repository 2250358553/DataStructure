#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int STDataType;


//��������ջ
typedef struct Stack
{
	STDataType* arr;
	int top;
	int capacity;
}ST;

//�ӿ�
//��ʼ��
void StackInit(ST* ps);

//����ջ
void StackDestroy(ST* ps);

//��ջ
void StackPush(ST* ps, STDataType x);

//��ջ
void StackPop(ST* ps);

//ջ������
STDataType StackTop(ST* ps);

//ջ������ݸ���
int StackSize(ST* ps);

//�ж�ջΪ��Ϊ��
bool StackEmpty(ST* ps);

//��ӡ���
void StackPrint(ST* ps);





















