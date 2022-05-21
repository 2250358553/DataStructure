#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int STDataType;


//创建数组栈
typedef struct Stack
{
	STDataType* arr;
	int top;
	int capacity;
}ST;

//接口
//初始化
void StackInit(ST* ps);

//销毁栈
void StackDestroy(ST* ps);

//入栈
void StackPush(ST* ps, STDataType x);

//出栈
void StackPop(ST* ps);

//栈顶数据
STDataType StackTop(ST* ps);

//栈里的数据个数
int StackSize(ST* ps);

//判断栈为不为空
bool StackEmpty(ST* ps);

//打印输出
void StackPrint(ST* ps);





















