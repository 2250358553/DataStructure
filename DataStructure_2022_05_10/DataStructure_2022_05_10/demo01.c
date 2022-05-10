#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//编写一个函数，检查输入的链表是否是回文的。
//输入： 1->2
//输出： false

//输入： 1->2
//输出： false

struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* fast, * slow;
    fast = slow = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

struct ListNode* reverseList(struct ListNode* head) {

    struct ListNode* cur = head;
    struct ListNode* prev = NULL;

    while (cur)
    {
        struct ListNode* next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;

}

bool isPalindrome(struct ListNode* head)
{
    struct ListNode* mid = middleNode(head);
    struct ListNode* rHead = reverseList(mid);

    struct ListNode* cura = head;
    struct ListNode* curb = rHead;

    while (cura && curb)
    {
        if (cura->val != curb->val)
        {
            return false;
        }
        else
        {
            cura = cura->next;
            curb = curb->next;
        }

    }
    return true;

}

int main()
{
	 
	return 0;
}