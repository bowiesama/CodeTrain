/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        if(l1 == nullptr)
            return l2;
        if(l2 == nullptr)
            return l1;
        ListNode* head = nullptr; 
        if(l1->val < l2->val)
        {
            head = l1;
            l1 = l1->next;
        }
        else
        {
            head = l2;
            l2 = l2->next;
        }
        ListNode* mergeList = head; 
        while(l1 && l2)
        {
            if(l1->val < l2->val)
            {
                mergeList->next = l1;
                l1 = l1->next;
            }
            else
            {
                mergeList->next = l2;
                l2 = l2->next;
            }
            mergeList = mergeList->next;
        }
        if(l1)
            mergeList->next = l1;
        else
            mergeList->next = l2;
        return head;
}
};
