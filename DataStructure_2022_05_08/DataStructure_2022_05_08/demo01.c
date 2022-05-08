#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

//Œ≤≤ÂŒ≤…æ≤‚ ‘
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

	//Œ≤…æ
	SListPopBack(&s1);
	SListPopBack(&s1);
	SListPopBack(&s1);
	SListPopBack(&s1);
	SListPopBack(&s1);
	SListPrint(s1);

}

//Õ∑…æÕ∑≤Â≤‚ ‘
void SListTest2()
{
	SL* s1 = NULL;

	//Œ≤≤Â
	SListPushBack(&s1, 1);
	SListPushBack(&s1, 2);
	SListPushBack(&s1, 3);
	SListPushBack(&s1, 4);
	SListPushBack(&s1, 5);
	
	//Õ∑‘ˆ
	SListPushFront(&s1, 10);
	SListPushFront(&s1, 100);
	SListPushFront(&s1, 1000);
	SListPrint(s1);

	//Õ∑…æ
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
	//Œ≤…æŒ≤≤Â≤‚ ‘
	//SListTest1();

	//Õ∑…æÕ∑≤Â≤‚ ‘
	SListTest2();

	return 0;
}