#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"

//int find_number(int arr[], int sz)
//{
//	int x = 0;
//	for (int i = 0; i <= sz; i++)
//	{
//		x ^= i;
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		x ^= arr[i];
//	}
//	return x;
//}
//
//int main()
//{
//	int arr[] = {9,6,4,2,3,5,7,0,1};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d",find_number(arr, sz));
//	return 0;
//}




int main()
{
	SL s1;
	//��ʼ��
	SeqListInit(&s1);
	
	//β��
	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPushBack(&s1, 5);

	//��ӡ˳���
	SeqListPrint(&s1);

	//ɾ������
	//SeqListPopBack(&s1);
	//SeqListPopBack(&s1);
	//SeqListPopBack(&s1);
	//SeqListPopBack(&s1);
	//SeqListPopBack(&s1);

	//��ӡ˳���
	//SeqListPrint(&s1);
	
	//��������
	//SeqListPushBack(&s1, 50);
	//SeqListPushBack(&s1, 50);
	//SeqListPrint(&s1);

	//ͷ��
	//SeqListPushFront(&s1, 10);
	//SeqListPushFront(&s1, 100);
	//SeqListPushFront(&s1, 1000);
	//SeqListPushFront(&s1, 10000);
	//SeqListPushFront(&s1, 100000);
	//SeqListPrint(&s1);

	//ͷɾ - ɾ��˳����һ������
	//SeqListPopFront(&s1);
	//SeqListPopFront(&s1);
	//SeqListPrint(&s1);
	
	//����˳����е�ĳ��ֵ
	//int ret = SeqListFind(&s1, 0);
	//if (ret != -1)
	//{
	//	printf("�±�Ϊ:%d", ret);
	//}
	//else
	//{
	//	printf("�Ѿ������ˣ�\n");
	//}
	
	//��ָ����λ�ò���ĳ��ֵ
	//SeqListInsert(&s1, 2, 100);
	//SeqListInsert(&s1, 4, 100);
	//SeqListPrint(&s1);

	//ɾ��ָ��λ�õ�����
	SeqListErase(&s1, 2);
	SeqListPrint(&s1);


	//����˳���
	SeqListDestory(&s1);
	return 0;
}

 






















