#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

//尾插尾删测试
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

	//尾删
	/*SListPopBack(&s1);
	SListPopBack(&s1);
	SListPopBack(&s1);
	SListPopBack(&s1);
	SListPopBack(&s1);*/
	//SListPrint(s1);

}

//头删头插测试
void SListTest2()
{
	SL* s1 = NULL;

	//尾插
	SListPushBack(&s1, 1);
	SListPushBack(&s1, 2);
	SListPushBack(&s1, 3);
	SListPushBack(&s1, 4);
	SListPushBack(&s1, 5);
	
	//头增
	SListPushFront(&s1, 10);
	SListPushFront(&s1, 100);
	SListPushFront(&s1, 1000);
	SListPrint(s1);

	//头删
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


//查找测试
void SListTest3()
{
	SL* s1 = NULL;

	//尾插
	SListPushBack(&s1, 1);
	SListPushBack(&s1, 2);
	SListPushBack(&s1, 3);
	SListPushBack(&s1, 4);
	SListPushBack(&s1, 5);

	//头增
	SListPushFront(&s1, 10);
	SListPushFront(&s1, 100);
	SListPushFront(&s1, 1000);
	SListPrint(s1);

	//查找10
	SL* pos = SListFind(s1, 10);
	int i = 0;
	while (pos)
	{
		i++;
		printf("第 %d 个 %d 的地址: %p\n", i, pos->data, pos);
		pos = SListFind(pos->next, 10);
	}

	//修改
	pos = SListFind(s1, 1000);
	if (pos)
	{
		pos->data = 2000;
	}
	SListPrint(s1);

	
}

//指定位置插入删除测试
void SListTest4() 
{
	SL* s1 = NULL;

	//尾插
	SListPushBack(&s1, 1);
	SListPushBack(&s1, 2);
	SListPushBack(&s1, 6);
	SListPushBack(&s1, 5);
	SListPushBack(&s1, 6);

	//头增
	SListPushFront(&s1, 10);
	SListPushFront(&s1, 100);
	SListPushFront(&s1, 1000);
	SListPrint(s1);

	////在10这个节点前插入一个50
	//SL* pos = SListFind(s1, 10);
	//if (pos != NULL) 
	//{
	//	SListInsertBefore(&s1, pos, 5);
	//}
	//SListPrint(s1);


	//指定位置删除
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
//	//尾删尾插测试
//	SListTest1();
//
//	//头删头插测试
//	//SListTest2();
//
//	//查找测试
//	//SListTest3();
//
//	//指定位置插入删除测试
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


