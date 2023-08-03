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
    ListNode* merge(ListNode* left , ListNode* right)
    {
        if(left == NULL) return right;
        if(right == NULL) return left;

        ListNode* ans = new ListNode(-1);
        ListNode* temp = ans;

        while(left != NULL && right!=NULL)
        {
            if(left->val < right->val)
            {
                temp->next = left;
                temp = left;
                left = left->next;
            }
            else
            {
                temp->next = right;
                temp = right;
                right = right->next;
            }
        }
        while(left != NULL)
        {
            temp->next = left;
            temp = left;
            left = left->next;
        }
        while(right!=NULL)
        {
            temp->next = right;
            temp = right;
            right = right->next;
        }
        ans = ans->next;
        return ans;
    }
    ListNode* floyd(ListNode* head)
    {
        if(head == NULL || head->next == NULL) return head;
        if(head->next->next == NULL) return head;

        ListNode* fast = head->next;
        ListNode* slow = head;
        while(fast!= NULL)
        {
            fast = fast->next;
            if(fast!=NULL) fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* left = head;
        ListNode* mid = floyd(head);
        ListNode* right = mid->next;
        mid->next = NULL;

        left = sortList(left);
        right = sortList(right);

        ListNode* result = merge(left , right);
        return result;

    }
};