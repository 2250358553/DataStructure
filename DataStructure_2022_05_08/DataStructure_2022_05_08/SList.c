#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

//��������
void SListPrint(SL* pnext)
{
	//�ж��ǲ������һ���ڵ�
	SL* backups = pnext;
	while(backups != NULL)
	{
		//�����һ���ڵ������
		printf("%d ", backups->data);
		//ָ��ָ����һ���ڵ�
		backups = backups->next;
	}
	printf("NULL\n");
}

//�����½ڵ�
SL* CreatNewSList(SLDataType x)
{
	SL* newnode = (SL*)malloc(sizeof(SL));
	if (newnode == NULL)
	{
		printf("malloc ʧ�ܣ�");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}

//β��
void SListPushBack(SL** ppnext, SLDataType x)
{
	//�ȿ���һ��ռ�
	SL* newnode = CreatNewSList(x);

	//�ж�ͷ�ڵ��ǲ���Ϊ��
	if (*ppnext == NULL)
	{
		*ppnext = newnode;
	}
	else
	{
		//�ȸ���һ�ݵ�ַ
		SL* backups = *ppnext;
		//����������һ���ڵ�
		while (backups->next != NULL)
		{
			backups = backups->next;
		}

		backups->next = newnode;
	}
}

//βɾ
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


//ͷ��
void SListPushFront(SL** ppnext, SLDataType x)
{
	SL* newnode = CreatNewSList(x);
	
	newnode->next = *ppnext;
	*ppnext = newnode;
	

}

//ͷɾ
void SListPopFront(SL** ppnext)
{
	assert(*ppnext != NULL);

	SL* backups = *ppnext;
	*ppnext = (*ppnext)->next;

	free(backups);
	backups = NULL;
}










































































