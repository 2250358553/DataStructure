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
	//初始化
	SeqListInit(&s1);
	
	//尾增
	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPushBack(&s1, 5);

	//打印顺序表
	SeqListPrint(&s1);

	//删除数据
	//SeqListPopBack(&s1);
	//SeqListPopBack(&s1);
	//SeqListPopBack(&s1);
	//SeqListPopBack(&s1);
	//SeqListPopBack(&s1);

	//打印顺序表
	//SeqListPrint(&s1);
	
	//插入数据
	//SeqListPushBack(&s1, 50);
	//SeqListPushBack(&s1, 50);
	//SeqListPrint(&s1);

	//头增
	//SeqListPushFront(&s1, 10);
	//SeqListPushFront(&s1, 100);
	//SeqListPushFront(&s1, 1000);
	//SeqListPushFront(&s1, 10000);
	//SeqListPushFront(&s1, 100000);
	//SeqListPrint(&s1);

	//头删 - 删除顺序表第一个数据
	//SeqListPopFront(&s1);
	//SeqListPopFront(&s1);
	//SeqListPrint(&s1);
	
	//查找顺序表中的某个值
	//int ret = SeqListFind(&s1, 0);
	//if (ret != -1)
	//{
	//	printf("下标为:%d", ret);
	//}
	//else
	//{
	//	printf("已经结束了！\n");
	//}
	
	//在指定的位置插入某个值
	//SeqListInsert(&s1, 2, 100);
	//SeqListInsert(&s1, 4, 100);
	//SeqListPrint(&s1);

	//删除指定位置的数据
	SeqListErase(&s1, 2);
	SeqListPrint(&s1);


	//销毁顺序表
	SeqListDestory(&s1);
	return 0;
}

 






















