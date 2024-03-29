/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *temp,*p,*q;
        temp=head;
        p=NULL;
        while(temp!=NULL)
        {
            if(p==NULL)
            {
                p=temp;
                temp=temp->next;
            }
            else
            {
                if(temp->val==p->val)
                {
                    q=temp;
                    p->next=q->next;
                    temp=q->next;
                    delete(q);
                }
                else
                {
                    p=temp;
                    temp=temp->next;
                }
            }
           
        }
         return head;
    }
};