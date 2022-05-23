//#define _CRT_SECURE_NO_WARNINGS 1
//#include <assert.h>
//#include <stdbool.h>
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef char STDataType;
//
//
////创建数组栈
//typedef struct Stack
//{
//    STDataType* arr;
//    int top;
//    int capacity;
//}ST;
//
//
////初始化
//void StackInit(ST* ps)
//{
//    ps->arr = NULL;
//    ps->top = 0;
//    ps->capacity = 0;
//}
//
////入栈
//void StackPush(ST* ps, STDataType x)
//{
//    assert(ps);
//    //判断空间是否足够
//    if (ps->top == ps->capacity)
//    {
//        //如果最大容量为0，则给他4，否则就扩容
//        int newcapacity = ps->capacity == 0 ? 4 : (ps->capacity) * 2;
//        //开辟空间
//        ST* tmp = (ST*)realloc(ps->arr, sizeof(STDataType) * newcapacity);
//        if (tmp == NULL)
//        {
//            printf("realloc fail\n");
//            exit(-1);
//        }
//        else
//        {
//            //新的最大容量给capacity
//            ps->capacity = newcapacity;
//            //新开辟的空间大小赋值给arr
//            ps->arr = tmp;
//        }
//    }
//    //将x放入数组arr的top位置
//    ps->arr[ps->top] = x;
//    //下标++
//    ps->top++;
//
//}
//
////删除数据
//void StackPop(ST* ps)
//{
//    assert(ps);
//    assert(ps->top != 0);
//    ps->top--;
//}
//
////栈顶数据
//STDataType StackTop(ST* ps)
//{
//    assert(ps);
//    assert(ps->top != 0);
//    return ps->arr[ps->top - 1];
//}
//
////判断栈为不为空
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
////销毁栈
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
