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
	SListPopBack(&s1);
	SListPopBack(&s1);
	SListPopBack(&s1);
	SListPopBack(&s1);
	SListPopBack(&s1);
	SListPrint(s1);

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

int main()
{
	//βɾβ�����
	//SListTest1();

	//ͷɾͷ�����
	SListTest2();

	return 0;
}