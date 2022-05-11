#define _CRT_SECURE_NO_WARNINGS 1
#include "DList.h"

//Œ≤≤ÂŒ≤…æ≤‚ ‘
void DListTest1()
{
	SL* s1 = NULL;

	//≥ı ºªØ
	DListInit(s1);
	DListPushBack(&s1, 1);
	DListPushBack(&s1, 2);
	DListPushBack(&s1, 3);
	DListPushBack(&s1, 4);
	DListPushBack(&s1, 5);


}


int main()
{
	DListTest1();
	return 0;
}

