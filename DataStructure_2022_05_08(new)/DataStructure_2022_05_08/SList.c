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


//找到某一个节点
SL* SListFind(SL* pnext, SLDataType x)
{
	//先复制一份
	SL* backups = pnext;
	while (backups != NULL)
	{
		if (backups->data == x)
		{
			//返回节点的地址
			return backups;
		}
		else
		{
			backups = backups->next;
		}
	}
	return NULL;
}

//在指定节点前插入一个数据
void SListInsertBefore(SL** ppnext, SL* pos, SLDataType x)
{
	SL* newnode = CreatNewSList(x);

	if ((*ppnext)->next == NULL)
	{
		newnode->next = *ppnext;
		*ppnext = newnode;
	}
	else
	{
		//要找到pos的前一个节点
		SL* prev = *ppnext;

		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = newnode;
		newnode->next = pos;
	}

	
}

//删除指定位置的节点
void SListErase(SL** ppnext, SL* pos)
{
	
	if (*ppnext == pos)
	{
		*ppnext = pos->next;
		free(pos);
	}
	else
	{
		SL* prev = *ppnext;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = pos->next;
		//prev = pos->next;
		free(pos);
		pos = NULL;
		//pos = prev;
	}

}

//销毁单链表
void SListDestory(SL** ppnext)
{
	SL* backups = *ppnext;
	while (backups)
	{
		SL* prev = backups->next;
		free(backups);
		backups = prev;
	}
	*ppnext = NULL;
}







































































