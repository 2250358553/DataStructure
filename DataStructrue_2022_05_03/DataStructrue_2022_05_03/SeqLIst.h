#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//定义宏N
#define N 100
//重定义int 为 SLDataType
typedef int SLDataType;

//重定义 struct SeqList 为 SL
typedef struct SeqList
{
	SLDataType* arr;	//指向动态开辟的数组
	int size;			//有效数据的个数
	int capacity;		//容量空间的大小
}SL;


//接口函数
//初始化函数
void SeqListInit(SL* ps);

//尾插函数
void SeqListPushBack(SL* ps, SLDataType x);

//尾删函数
void SeqListPopBack(SL* ps);

//首插函数
void SeqListPushFront(SL* ps, SLDataType x);
//首删函数
void SeqListPopFront(SL* ps);

//打印顺序表函数
void SeqListPrint(SL* ps);

//销毁顺序表
void SeqListDestory(SL* ps);

//检查容量是否存满
void SeqListCheckCapacity(SL* ps);

//找到了返回x位置下标，没找到返回-1
int SeqListFind(SL* ps, SLDataType x);

//指定位置插入数据
void SeqListInsert(SL* ps, int pos, SLDataType x);

//删除指定位置的数据
void SeqListErase(SL* ps, int pos);
















