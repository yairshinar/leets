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
        int sum=0;
        // pointer to NULL
        ListNode *l3=NULL;
        //pointer to pointer to Address    
        ListNode **node=&l3;
        
        while(l1!=NULL||l2!=NULL||sum>0)
        {
            //add first val
            if(l1!=NULL)
            {
                sum+=l1->val;
                l1=l1->next;
            }
            //add second val
            if(l2!=NULL)
            {
                sum+=l2->val;
                l2=l2->next;
            }
            //Create new ListNode with first digit
            (*node)=new ListNode(sum%10);
            
            //Keep carry only to sum with it on later loop
            sum/=10;
            
            // assign node to address of next of pointer node from two lines above for next loop creating new node on it.
            node=&((*node)->next);
        }
        
      
        return l3;
    }
};

   
