#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"

void TestStack1()
{
	//��ʼ��
	ST st;
	StackInit(&st);

	//��ջ
	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);

	printf("%d ", StackTop(&st));
	StackPop(&st);

	StackPush(&st, 4);
	StackPush(&st, 5);

	//ɾ������
	/*StackPop(&st);
	StackPop(&st);
	StackPop(&st);
	StackPop(&st);
	StackPop(&st);*/

	//��ջ
	while (!StackEmpty(&st))
	{
		printf("%d ", StackTop(&st));
		StackPop(&st);
	}
	
	//����
	StackDestroy(&st);
}

int main()
{
	
	TestStack1();
	return 0;
}














