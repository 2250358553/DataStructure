//#define _CRT_SECURE_NO_WARNINGS 1
//#include <assert.h>
//#include <stdbool.h>
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef char STDataType;
//
//
////��������ջ
//typedef struct Stack
//{
//    STDataType* arr;
//    int top;
//    int capacity;
//}ST;
//
//
////��ʼ��
//void StackInit(ST* ps)
//{
//    ps->arr = NULL;
//    ps->top = 0;
//    ps->capacity = 0;
//}
//
////��ջ
//void StackPush(ST* ps, STDataType x)
//{
//    assert(ps);
//    //�жϿռ��Ƿ��㹻
//    if (ps->top == ps->capacity)
//    {
//        //����������Ϊ0�������4�����������
//        int newcapacity = ps->capacity == 0 ? 4 : (ps->capacity) * 2;
//        //���ٿռ�
//        ST* tmp = (ST*)realloc(ps->arr, sizeof(STDataType) * newcapacity);
//        if (tmp == NULL)
//        {
//            printf("realloc fail\n");
//            exit(-1);
//        }
//        else
//        {
//            //�µ����������capacity
//            ps->capacity = newcapacity;
//            //�¿��ٵĿռ��С��ֵ��arr
//            ps->arr = tmp;
//        }
//    }
//    //��x��������arr��topλ��
//    ps->arr[ps->top] = x;
//    //�±�++
//    ps->top++;
//
//}
//
////ɾ������
//void StackPop(ST* ps)
//{
//    assert(ps);
//    assert(ps->top != 0);
//    ps->top--;
//}
//
////ջ������
//STDataType StackTop(ST* ps)
//{
//    assert(ps);
//    assert(ps->top != 0);
//    return ps->arr[ps->top - 1];
//}
//
////�ж�ջΪ��Ϊ��
//bool StackEmpty(ST* ps)
//{
//    if (ps->top == 0)
//    {
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}
//
////����ջ
//void StackDestroy(ST* ps)
//{
//    assert(ps);
//    free(ps->arr);
//    ps->arr = NULL;
//    ps->top = 0;
//    ps->capacity = 0;
//}
//
//
//bool isValid(char s[]) {
//    ST st;
//    StackInit(&st);
//
//    while (*s)
//    {
//        if ((*s == '(') || (*s == '{') || (*s == '['))
//        {
//            StackPush(&st, *s);
//            s++;
//        }
//        else
//        {
//            if (StackEmpty(&st))
//            {
//                return false;
//            }
//            STDataType top = StackTop(&st);
//            StackPop(&st);
//            if ((*s == ')' && top != '(')
//                || (*s == '}' && top != '{')
//                || (*s == ']' && top != '['))
//            {
//                return false;
//            }
//            else
//            {
//                s++;
//            }
//        }
//    }
//    if (StackEmpty(&st))
//    {
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//
//    StackDestroy(&st);
//
//}
//
//int main()
//{
//    char s[100] = { 0 };
//    int count = 0;
//    scanf("%d", &count);
// 
//
//    while (count--)
//    {
//        scanf("%s", s);
//        if (isValid(s))
//        {
//            printf("Yes\n");
//        }
//        else
//        {
//            printf("No\n");
//        }
//    }
//}
//
//
//
////
////void Test(char arr[])
////{
////	//int i = 0;
////	//for (i = 0; i < 6; i++)
////	//{
////	//	printf("%d", arr[i]);
////	//}
////	int count = 6;
////	while (count--)
////	{
////		printf("%d ", *arr);
////		arr++;
////	}
////	
////}
////
////int main()
////{
////	char arr[] = { 0, 1, 2, 3, 4, 5 };
////	Test(arr);
////}
//
//
