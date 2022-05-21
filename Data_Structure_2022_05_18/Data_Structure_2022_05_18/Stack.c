#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"

//实现接口
//初始化
void StackInit(ST* ps)
{
	ps->arr = NULL;
	ps->top = 0;
	ps->capacity = 0;
}

//入栈
void StackPush(ST* ps, STDataType x)
{
	assert(ps);
	//判断空间是否足够
	if (ps->top == ps->capacity)
	{
		//如果最大容量为0，则给他4，否则就扩容
		int newcapacity = ps->capacity == 0 ? 4 : (ps->capacity) * 2;
		//开辟空间
		ST* tmp = (ST*)realloc(ps->arr, sizeof(STDataType) * newcapacity);
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			//新的最大容量给capacity
			ps->capacity = newcapacity;
			//新开辟的空间大小赋值给arr
			ps->arr = tmp;
		}
	}
	//将x放入数组arr的top位置
	ps->arr[ps->top] = x;
	//下标++
	ps->top++;

}

//删除数据
void StackPop(ST* ps)
{
	assert(ps);
	assert(ps->top != 0);
	ps->top--;
}

//栈顶数据
STDataType StackTop(ST* ps)
{
	assert(ps);
	assert(ps->top != 0);
	return ps->arr[ps->top-1];
}

//栈里的数据个数
int StackSize(ST* ps)
{
	assert(ps);
	return ps->top;
}

//判断栈为不为空
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

//打印输出
void StackPrint(ST* ps)
{
	assert(ps);
	for (int i = ps->top - 1; i >= 0; i--)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("\n");
}

//销毁栈
void StackDestroy(ST* ps)
{
	assert(ps);
	free(ps->arr);
	ps->arr = NULL;
	ps->top = 0;
	ps->capacity = 0;
}

















