#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>

typedef struct List
{
	int val;
	int size;
	struct List* next;
}SL;

////����
//void ListPush(SL* phead)
//{
//
//}
//
////ɾ��
//void ListPop(SL* phead)
//{
//
//}

int main()
{
	int i = 0;
	int count = 0;
	scanf("%d", &count);
	SL* s1 = (SL*)malloc(sizeof(SL));
	SL* tail = s1;
	while (count--)
	{
		i++;
		SL* newnode = (SL*)malloc(sizeof(SL));
		scanf("%d", &newnode->val);

		tail->next = newnode;
		tail = newnode;
	}
	tail->size = i;
	int tail_size = tail->size;
	tail->next = NULL;

	int k = 0;
	scanf("%d", &k);
	while (k--)
	{
		//����
		int a = 0, b = 0, c = -1;
		//scanf("%d%d%d", &a, &b, &c);
		scanf("%d", &a);
		scanf("%d", &b);
		if (a == 0)
		{
			scanf("%d", &c);
		}
		if (a == 0 && b >= 0 && c >= 0)
		{
			SL* push = s1;

			//�������������
			if (b > tail_size || b < 0)
			{
				continue;
			}

			//ͷ�����
			if (b == 0)
			{
				SL* newnode = (SL*)malloc(sizeof(SL));
				newnode->val = c;
				newnode->next = push->next;
				push->next = newnode;
				tail_size++;

			}
			else
			{
				//��������
				while (b--)
				{
					//�ҵ�Ҫ����Ľڵ�λ��
					push = push->next;
				}
				SL* newnode = (SL*)malloc(sizeof(SL));
				newnode->val = c;
				//newnode->size = (push->size) + 1;
				newnode->next = push->next;
				push->next = newnode;
				tail_size++;

			}
			
		}
		//ɾ��
		else
		{
			if (b <= 0 || b > tail_size)
			{
				continue;
			}
			else
			{
				SL* pop = s1;
				SL* prev = s1;
				while (b--)
				{
					pop = pop->next;
				}
				while (prev->next != pop)
				{
					prev = prev->next;
				}

				if (pop->next == NULL)
				{
					free(pop);
					pop = NULL;
					prev->next = NULL;
					tail_size--;
				}
				else
				{
					prev->next = pop->next;
					free(pop);
					pop = NULL;
					tail_size--;
				}

			}
		}
	}
	
	SL* backups = s1->next;
	while (backups)
	{
		printf("%d ", backups->val);
		backups = backups->next;
	}
	printf("\n");

	return 0;
}











