/*
 * @lc app=leetcode id=24 lang=cpp
 *
 * [24] Swap Nodes in Pairs
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
    ListNode* swapPairs(ListNode* head) {
        ListNode* swapHead = head;
        ListNode* FirstHead = NULL;
        ListNode* preHead = NULL;
        if(!swapHead || swapHead->next == NULL)
            return swapHead;
        while (swapHead && swapHead->next)
        {
            ListNode* temp1 = swapHead;
            ListNode* temp2 = NULL;
            temp2 = swapHead->next->next;
            swapHead = swapHead->next;
            swapHead->next = temp1;
            swapHead->next->next = temp2;
            if(preHead)
                preHead->next = swapHead;
            if(FirstHead == NULL)
                FirstHead = swapHead;
            preHead = swapHead->next;
            swapHead = swapHead->next->next;
        }
        return FirstHead;
    }
};

