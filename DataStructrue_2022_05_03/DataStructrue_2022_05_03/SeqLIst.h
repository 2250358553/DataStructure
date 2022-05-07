#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//�����N
#define N 100
//�ض���int Ϊ SLDataType
typedef int SLDataType;

//�ض��� struct SeqList Ϊ SL
typedef struct SeqList
{
	SLDataType* arr;	//ָ��̬���ٵ�����
	int size;			//��Ч���ݵĸ���
	int capacity;		//�����ռ�Ĵ�С
}SL;


//�ӿں���
//��ʼ������
void SeqListInit(SL* ps);

//β�庯��
void SeqListPushBack(SL* ps, SLDataType x);

//βɾ����
void SeqListPopBack(SL* ps);

//�ײ庯��
void SeqListPushFront(SL* ps, SLDataType x);
//��ɾ����
void SeqListPopFront(SL* ps);

//��ӡ˳�����
void SeqListPrint(SL* ps);

//����˳���
void SeqListDestory(SL* ps);

//��������Ƿ����
void SeqListCheckCapacity(SL* ps);

//�ҵ��˷���xλ���±꣬û�ҵ�����-1
int SeqListFind(SL* ps, SLDataType x);

//ָ��λ�ò�������
void SeqListInsert(SL* ps, int pos, SLDataType x);

//ɾ��ָ��λ�õ�����
void SeqListErase(SL* ps, int pos);
















