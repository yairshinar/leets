//You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

//You may assume the two numbers do not contain any leading zero, except the number 0 itself.

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int carry = 0;
        ListNode *res = NULL;
        ListNode *curr = res;
        while (l1 || l2 || carry) {
            int v1 = l1 ? l1->val : 0;
            int v2 = l2 ? l2->val : 0;
            int sum = v1 + v2 + carry;
            carry = sum > 9;
            sum -= 10 * carry;
            ListNode *node = new ListNode(sum);
            if (!res) 
                res = curr = node;
            else 
                curr = curr->next = node;
            l1 = l1 ? l1->next : l1;
            l2 = l2 ? l2->next : l2;
        }
        return res;
            
    }
};

   
