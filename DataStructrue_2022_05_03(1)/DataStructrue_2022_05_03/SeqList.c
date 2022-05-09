#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqLIst.h"

//初始化函数
void SeqListInit(SL* ps)
{
	ps->arr = NULL;
	ps->size = 0;
	ps->capacity = 0;

}

//尾插函数
void SeqListPushBack(SL* ps, SLDataType x)
{
	//检查容量是否存满
	SeqListCheckCapacity(ps);
	//插入数据
	ps->arr[ps->size] = x;
	ps->size++;
}

//删除顺序表最后一个数据
void SeqListPopBack(SL* ps)
{
	//1.第一种
	/*if (ps->size > 0)
	{
		ps->size--;
	}*/

	//2.第二种
	assert(ps->size > 0);
	ps->size--;
	//ps->arr[ps->size - 1] = 0;
}

//头插函数
void SeqListPushFront(SL* ps, SLDataType x)
{
	//检查容量是否存满
	SeqListCheckCapacity(ps);
	
	//整体向后挪动
	int end = ps->size;
	for (int i = 0; i < end; i++)
	{
		ps->arr[ps->size] = ps->arr[ps->size - 1];
		ps->size--;
	}
	ps->arr[0] = x;
	ps->size = end + 1;
}

//头删函数
void SeqListPopFront(SL* ps)
{
	//判断数据是不是为空
	assert(ps->size > 0);

	//int begin = ps->size;
	for (int i = 0; i < ps->size - 1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

//打印顺序表
void SeqListPrint(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("\n");
}

//销毁顺序表
void SeqListDestory(SL* ps)
{
	free(ps->arr);
	ps->arr = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

//检查容量是否存满
void SeqListCheckCapacity(SL* ps)
{
	//先判断容量够不够
	//如果数据个数和最大容量相等，说明容量不够
	if (ps->size == ps->capacity)
	{
		//capacity（容量）是0吗？如果是就赋值4，如果不是就乘2再赋值
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* newarr = (SLDataType*)realloc(ps->arr, newcapacity * sizeof(SLDataType));

		//判断动态内存是否成功开辟
		if (newarr == NULL)
		{
			printf("SeqListPushBack");
			exit(-1);
		}
		else
		{
			//将新的容量赋值给旧的容量
			ps->capacity = newcapacity;
			//将新的内存大小赋值给旧的
			ps->arr = newarr;
		}
	}

}

//找到了返回x位置下标，没找到返回-1
int SeqListFind(SL* ps, SLDataType x)
{
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->arr[i] == x)
		{
			return i;
		}
	}
	return -1;
}

//指定位置插入数据
void SeqListInsert(SL* ps, int pos, SLDataType x)
{
	//先判断容量是否满
	SeqListCheckCapacity(ps);

	//判断插入的位置是否超出最大容量
	if (pos > ps->size+1 || pos < 0)
	{
		printf("插入的位置超出最大容量，插入失败！\n");
		return;
	}
	else
	{
		int i = 0;
		int end = ps->size + 1;
		for (i = 0; i < end - pos; i++)
		{
			ps->arr[ps->size] = ps->arr[ps->size - 1];
			ps->size--;
		}
		ps->arr[pos - 1] = x;
		ps->size = end;
	}
}

//删除指定位置的数据
void SeqListErase(SL* ps, int pos)
{
	//顺序表为空就报错
	assert(ps->size > 0);
	//删除指定位置的数据
	if (pos > ps->size)
	{
		printf("指定的位置超出最大容量，无法删除！\n");
		return;
	}
	else
	{
		for (int i = 0; i < ps->size - pos; i++)
		{
			ps->arr[pos - 1] = ps->arr[pos];
			pos++;
		}
		ps->size--;
	}
}




















