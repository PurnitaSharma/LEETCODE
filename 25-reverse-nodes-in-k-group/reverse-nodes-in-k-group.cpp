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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int count = 0;
        ListNode* temp = head;
        while(count < k && temp!= NULL)
        {
            count+=1;
            temp = temp->next;
        }
        if(count < k) return head;
        ListNode* current = head;
        ListNode* after = NULL;
        ListNode* prev = NULL;
        count = 0;
        while(count < k)
        {
            after = current->next;
            current->next = prev;
            prev = current;
            current = after;
            count += 1;
        }
        head ->next = reverseKGroup(current , k);
        return prev;
    }
};