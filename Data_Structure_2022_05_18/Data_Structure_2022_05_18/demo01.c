#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"

void TestStack1()
{
	//初始化
	ST st;
	StackInit(&st);

	//入栈
	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);

	printf("%d ", StackTop(&st));
	StackPop(&st);

	StackPush(&st, 4);
	StackPush(&st, 5);

	//删除数据
	/*StackPop(&st);
	StackPop(&st);
	StackPop(&st);
	StackPop(&st);
	StackPop(&st);*/

	//出栈
	while (!StackEmpty(&st))
	{
		printf("%d ", StackTop(&st));
		StackPop(&st);
	}
	
	//销毁
	StackDestroy(&st);
}

int main()
{
	
	TestStack1();
	return 0;
}














