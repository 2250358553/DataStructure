//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct Stack
//{
//	int arr[10];
//	int top;
//	int capacity;
//}ST;
//
//int main()
//{
//	ST* st = (ST*)malloc(sizeof(int) * 10);
//	st->top = 0;
//	st->capacity = 10;
//
//	int count = 0;
//	int val = 0;
//	scanf("%d", &count);
//	while (count--)
//	{
//		scanf("%d", &val);
//		if (val != 0)
//		{
//			if (st->top <= st->capacity && st->top < 10)
//			{
//				st->arr[st->top] = val;
//				st->top++;
//			}
//			else
//			{
//				printf("FULL ");
//			}
//		}
//		else
//		{
//			if (st->top == 0)
//			{
//				printf("EMPTY ");
//			}
//			else
//			{
//				printf("%d ", st->arr[st->top - 1]);
//				st->top--;
//			}
//		}
//
//	}
//	printf("\n");
//	for (int i = 0; i < st->top; i++)
//	{
//		printf("%d ", st->arr[i]);
//	}
//	return 0;
//}
//
//
//
//
//
//
//
