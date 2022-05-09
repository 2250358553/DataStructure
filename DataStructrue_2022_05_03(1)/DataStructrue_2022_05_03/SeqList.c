#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqLIst.h"

//��ʼ������
void SeqListInit(SL* ps)
{
	ps->arr = NULL;
	ps->size = 0;
	ps->capacity = 0;

}

//β�庯��
void SeqListPushBack(SL* ps, SLDataType x)
{
	//��������Ƿ����
	SeqListCheckCapacity(ps);
	//��������
	ps->arr[ps->size] = x;
	ps->size++;
}

//ɾ��˳������һ������
void SeqListPopBack(SL* ps)
{
	//1.��һ��
	/*if (ps->size > 0)
	{
		ps->size--;
	}*/

	//2.�ڶ���
	assert(ps->size > 0);
	ps->size--;
	//ps->arr[ps->size - 1] = 0;
}

//ͷ�庯��
void SeqListPushFront(SL* ps, SLDataType x)
{
	//��������Ƿ����
	SeqListCheckCapacity(ps);
	
	//�������Ų��
	int end = ps->size;
	for (int i = 0; i < end; i++)
	{
		ps->arr[ps->size] = ps->arr[ps->size - 1];
		ps->size--;
	}
	ps->arr[0] = x;
	ps->size = end + 1;
}

//ͷɾ����
void SeqListPopFront(SL* ps)
{
	//�ж������ǲ���Ϊ��
	assert(ps->size > 0);

	//int begin = ps->size;
	for (int i = 0; i < ps->size - 1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

//��ӡ˳���
void SeqListPrint(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("\n");
}

//����˳���
void SeqListDestory(SL* ps)
{
	free(ps->arr);
	ps->arr = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

//��������Ƿ����
void SeqListCheckCapacity(SL* ps)
{
	//���ж�����������
	//������ݸ��������������ȣ�˵����������
	if (ps->size == ps->capacity)
	{
		//capacity����������0������Ǿ͸�ֵ4��������Ǿͳ�2�ٸ�ֵ
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* newarr = (SLDataType*)realloc(ps->arr, newcapacity * sizeof(SLDataType));

		//�ж϶�̬�ڴ��Ƿ�ɹ�����
		if (newarr == NULL)
		{
			printf("SeqListPushBack");
			exit(-1);
		}
		else
		{
			//���µ�������ֵ���ɵ�����
			ps->capacity = newcapacity;
			//���µ��ڴ��С��ֵ���ɵ�
			ps->arr = newarr;
		}
	}

}

//�ҵ��˷���xλ���±꣬û�ҵ�����-1
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

//ָ��λ�ò�������
void SeqListInsert(SL* ps, int pos, SLDataType x)
{
	//���ж������Ƿ���
	SeqListCheckCapacity(ps);

	//�жϲ����λ���Ƿ񳬳��������
	if (pos > ps->size+1 || pos < 0)
	{
		printf("�����λ�ó����������������ʧ�ܣ�\n");
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

//ɾ��ָ��λ�õ�����
void SeqListErase(SL* ps, int pos)
{
	//˳���Ϊ�վͱ���
	assert(ps->size > 0);
	//ɾ��ָ��λ�õ�����
	if (pos > ps->size)
	{
		printf("ָ����λ�ó�������������޷�ɾ����\n");
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




















