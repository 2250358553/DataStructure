#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

//遍历链表
void SListPrint(SL* pnext)
{
	//判断是不是最后一个节点
	SL* backups = pnext;
	while(backups != NULL)
	{
		//输出第一个节点的数据
		printf("%d ", backups->data);
		//指针指向下一个节点
		backups = backups->next;
	}
	printf("NULL\n");
}

//创建新节点
SL* CreatNewSList(SLDataType x)
{
	SL* newnode = (SL*)malloc(sizeof(SL));
	if (newnode == NULL)
	{
		printf("malloc 失败！");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}

//尾插
void SListPushBack(SL** ppnext, SLDataType x)
{
	//先开辟一块空间
	SL* newnode = CreatNewSList(x);

	//判断头节点是不是为空
	if (*ppnext == NULL)
	{
		*ppnext = newnode;
	}
	else
	{
		//先复制一份地址
		SL* backups = *ppnext;
		//往后走向下一个节点
		while (backups->next != NULL)
		{
			backups = backups->next;
		}

		backups->next = newnode;
	}
}

//尾删
void SListPopBack(SL** ppnext)
{
	assert(*ppnext != NULL);

	if ((*ppnext)->next == NULL)
	{
		free(*ppnext);
		*ppnext = NULL;
	}
	else
	{
		SL* backups = *ppnext;
		SL* prev = *ppnext;

		while (backups->next != NULL)
		{
			prev = backups;
			backups = backups->next;
		}
		free(backups);
		backups = NULL;

		prev->next = NULL;
	}
	
}


//头插
void SListPushFront(SL** ppnext, SLDataType x)
{
	SL* newnode = CreatNewSList(x);
	
	newnode->next = *ppnext;
	*ppnext = newnode;
	

}

//头删
void SListPopFront(SL** ppnext)
{
	assert(*ppnext != NULL);

	SL* backups = *ppnext;
	*ppnext = (*ppnext)->next;

	free(backups);
	backups = NULL;
}










































































