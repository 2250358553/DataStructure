#define _CRT_SECURE_NO_WARNINGS 1
#include "DList.h"

void DListTest1()
{
	//���ó�ʼ�������������շ��ص�ͷ�ڵ�
	DSL* s1 = DListInit();

	//����β�庯��
	DListPushBack(s1, 1);
	DListPushBack(s1, 2);
	DListPushBack(s1, 3);
	DListPushBack(s1, 4);
	DListPrint(s1);

	//βɾ
	DListPopBack(s1);
	DListPrint(s1);

	//ͷ��
	DListPushFront(s1,5);
	DListPrint(s1);

	//ͷɾ
	DListPopFront(s1);
	DListPrint(s1);
}

int main()
{
	DListTest1();


	return 0;
}