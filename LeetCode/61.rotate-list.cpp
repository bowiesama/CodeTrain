/*
 * @lc app=leetcode id=61 lang=cpp
 *
 * [61] Rotate List
 *
 * https://leetcode.com/problems/rotate-list/description/
 *
 * algorithms
 * Medium (27.60%)
 * Likes:    659
 * Dislikes: 844
 * Total Accepted:    203.2K
 * Total Submissions: 736.2K
 * Testcase Example:  '[1,2,3,4,5]\n2'
 *
 * Given a linked list, rotate the list to the right by k places, where k is
 * non-negative.
 * 
 * Example 1:
 * 
 * 
 * Input: 1->2->3->4->5->NULL, k = 2
 * Output: 4->5->1->2->3->NULL
 * Explanation:
 * rotate 1 steps to the right: 5->1->2->3->4->NULL
 * rotate 2 steps to the right: 4->5->1->2->3->NULL
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: 0->1->2->NULL, k = 4
 * Output: 2->0->1->NULL
 * Explanation:
 * rotate 1 steps to the right: 2->0->1->NULL
 * rotate 2 steps to the right: 1->2->0->NULL
 * rotate 3 steps to the right: 0->1->2->NULL
 * rotate 4 steps to the right: 2->0->1->NULL
 * 
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
    /* ListNode* rotateRight(ListNode* head, int k) {
        if(!head || k < 0)
            return head;
        int tmp = 0;
        for(int i = 0; i < k; i++)
        {
            ListNode* lastNode = head;
            int node__pre_val = head->val;
            while(lastNode->next)
            {
                lastNode = lastNode->next;
                tmp = lastNode->val;
                lastNode->val = node__pre_val;
                node__pre_val = tmp;
            }
            head->val = node__pre_val;

        }
        return head;
    }*/
    ListNode *rotateRight(ListNode *head, int k) 
     {
        if(head == NULL || head->next == NULL||k==0) return head;
        
        ListNode* node = head;
        int size =1;
        
        while(node->next != NULL)
        {
            size++;
            node = node->next;
        }
        
        //loop the list
        node->next=head;
        
        //handle the case of k>size
        k = k%size;
        
        //find the node to break the loop at
        while(--size >= k)
        {
            node=node->next;
        }
        
        ListNode* first = node->next;
        node->next=NULL;
        
        return first;
    }

};

