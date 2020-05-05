#include "leetcode.h"

/*
 * ��������[�ǿ�]������������ʾ�����Ǹ���������
 * ���У����Ǹ��Ե�λ���ǰ���[����]�ķ�ʽ�洢�ģ��������ǵ�ÿ���ڵ�ֻ�ܴ洢[һλ]���֡�
 * ��������ǽ��������������������᷵��һ���µ���������ʾ���ǵĺ͡�
 */

//�ٶȻ�Ƚ���

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
	int add = 0, val;
	ListNode* pCur1 = l1, * pCur2 = l2;
	ListNode* pHead = NULL, * pTail = NULL;
	ListNode* pNew = NULL;
	while (pCur1 || pCur2 || add)
	{
		val = 0;
		if (pCur1!=NULL)
		{
			val += pCur1->val;
			pCur1 = pCur1->next;
		}
		if (pCur2!=NULL)
		{
			val += pCur2->val;
			pCur2 = pCur2->next;
		}
		if (add)
		{
			val += add;
		}

		pNew = new ListNode(val);

		if (pNew->val >= 10)
		{
			add = 1;
			pNew->val -= 10;
		}
		else {
			add = 0;
		}

		if (NULL == pHead)//β�巨
		{
			pHead = pNew;
			pTail = pNew;
		}
		else {
			pTail->next = pNew;
			pTail = pNew;
		}
	}
	return pHead;
}