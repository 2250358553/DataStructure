#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

//β��βɾ����
void SListTest1()
{
	SL* s1 = NULL;
	//SL s1 = { 0 };
	SListPushBack(&s1, 1);
	SListPushBack(&s1, 2);
	SListPushBack(&s1, 3);
	SListPushBack(&s1, 4);
	SListPushBack(&s1, 5);
	SListPrint(s1);

	//βɾ
	/*SListPopBack(&s1);
	SListPopBack(&s1);
	SListPopBack(&s1);
	SListPopBack(&s1);
	SListPopBack(&s1);*/
	//SListPrint(s1);

}

//ͷɾͷ�����
void SListTest2()
{
	SL* s1 = NULL;

	//β��
	SListPushBack(&s1, 1);
	SListPushBack(&s1, 2);
	SListPushBack(&s1, 3);
	SListPushBack(&s1, 4);
	SListPushBack(&s1, 5);
	
	//ͷ��
	SListPushFront(&s1, 10);
	SListPushFront(&s1, 100);
	SListPushFront(&s1, 1000);
	SListPrint(s1);

	//ͷɾ
	SListPopFront(&s1);
	SListPopFront(&s1);
	SListPopFront(&s1);
	SListPopFront(&s1);
	SListPopFront(&s1);
	SListPopFront(&s1);
	SListPopFront(&s1);
	SListPopFront(&s1);
	SListPrint(s1);

}


//���Ҳ���
void SListTest3()
{
	SL* s1 = NULL;

	//β��
	SListPushBack(&s1, 1);
	SListPushBack(&s1, 2);
	SListPushBack(&s1, 3);
	SListPushBack(&s1, 4);
	SListPushBack(&s1, 5);

	//ͷ��
	SListPushFront(&s1, 10);
	SListPushFront(&s1, 100);
	SListPushFront(&s1, 1000);
	SListPrint(s1);

	//����10
	SL* pos = SListFind(s1, 10);
	int i = 0;
	while (pos)
	{
		i++;
		printf("�� %d �� %d �ĵ�ַ: %p\n", i, pos->data, pos);
		pos = SListFind(pos->next, 10);
	}

	//�޸�
	pos = SListFind(s1, 1000);
	if (pos)
	{
		pos->data = 2000;
	}
	SListPrint(s1);

	
}

//ָ��λ�ò���ɾ������
void SListTest4() 
{
	SL* s1 = NULL;

	//β��
	SListPushBack(&s1, 1);
	SListPushBack(&s1, 2);
	SListPushBack(&s1, 6);
	SListPushBack(&s1, 5);
	SListPushBack(&s1, 6);

	//ͷ��
	SListPushFront(&s1, 10);
	SListPushFront(&s1, 100);
	SListPushFront(&s1, 1000);
	SListPrint(s1);

	////��10����ڵ�ǰ����һ��50
	//SL* pos = SListFind(s1, 10);
	//if (pos != NULL) 
	//{
	//	SListInsertBefore(&s1, pos, 5);
	//}
	//SListPrint(s1);


	//ָ��λ��ɾ��
	SL* pos = SListFind(s1, 6);
	if(pos != NULL)
	{
		SListErase(&s1, pos);
	}

	SListPrint(s1);
	SListDestory(&s1);
}



//int main()
//{
//	//βɾβ�����
//	SListTest1();
//
//	//ͷɾͷ�����
//	//SListTest2();
//
//	//���Ҳ���
//	//SListTest3();
//
//	//ָ��λ�ò���ɾ������
//	//SListTest4();
//	int a = 2;
//	while (a--)
//	{
//		printf("hhhhh\n");
//	}
//
//	return 0;
//}




int main()
{

}


