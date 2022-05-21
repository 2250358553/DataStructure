#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"

//ʵ�ֽӿ�
//��ʼ��
void StackInit(ST* ps)
{
	ps->arr = NULL;
	ps->top = 0;
	ps->capacity = 0;
}

//��ջ
void StackPush(ST* ps, STDataType x)
{
	assert(ps);
	//�жϿռ��Ƿ��㹻
	if (ps->top == ps->capacity)
	{
		//����������Ϊ0�������4�����������
		int newcapacity = ps->capacity == 0 ? 4 : (ps->capacity) * 2;
		//���ٿռ�
		ST* tmp = (ST*)realloc(ps->arr, sizeof(STDataType) * newcapacity);
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			//�µ����������capacity
			ps->capacity = newcapacity;
			//�¿��ٵĿռ��С��ֵ��arr
			ps->arr = tmp;
		}
	}
	//��x��������arr��topλ��
	ps->arr[ps->top] = x;
	//�±�++
	ps->top++;

}

//ɾ������
void StackPop(ST* ps)
{
	assert(ps);
	assert(ps->top != 0);
	ps->top--;
}

//ջ������
STDataType StackTop(ST* ps)
{
	assert(ps);
	assert(ps->top != 0);
	return ps->arr[ps->top-1];
}

//ջ������ݸ���
int StackSize(ST* ps)
{
	assert(ps);
	return ps->top;
}

//�ж�ջΪ��Ϊ��
bool StackEmpty(ST* ps)
{
	if (ps->top == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//��ӡ���
void StackPrint(ST* ps)
{
	assert(ps);
	for (int i = ps->top - 1; i >= 0; i--)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("\n");
}

//����ջ
void StackDestroy(ST* ps)
{
	assert(ps);
	free(ps->arr);
	ps->arr = NULL;
	ps->top = 0;
	ps->capacity = 0;
}

















