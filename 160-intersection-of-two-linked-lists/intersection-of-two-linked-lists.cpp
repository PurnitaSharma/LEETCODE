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
    ListNode* solve(int d , ListNode* headA , ListNode* headB)
    {
        while(d--)
        {
            headA = headA->next;
        }
        while(headA != NULL && headB != NULL)
        {
            if(headA == headB) return headA;
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        if(headA == NULL || headB == NULL) return NULL;
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        int c1 = 0 , c2 = 0;
        while(temp1 != NULL){
            temp1 = temp1->next;
            c1 += 1;
        }
        while(temp2 != NULL)
        {
            temp2 = temp2->next;
            c2 += 1;
        }
        if(c1 > c2)
        {
            int d = c1-c2;
            return solve(d , headA , headB);
        }
        else
        {
            int d = c2 - c1;
            return solve(d , headB , headA);
        }
        return NULL;
    }
};