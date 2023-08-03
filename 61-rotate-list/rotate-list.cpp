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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL || k==0) return head;
        int l = 0;
        ListNode* temp = head;
        ListNode* prev = NULL; 
        while(temp != NULL)
        {
            temp = temp->next;
            l+=1;
        }
        if(k%l == 0) return head;
        temp = head;
        int n = k%l;
        int i = 1;
        while(i<=l-n)
        {
            prev = temp;
            temp = temp->next;
            i+=1;
        }
        ListNode* newHead = temp;
        if(prev) prev->next = NULL;

        while(temp && temp->next != NULL) temp = temp->next;
        if(temp)temp->next = head;
        return newHead;
    }
};