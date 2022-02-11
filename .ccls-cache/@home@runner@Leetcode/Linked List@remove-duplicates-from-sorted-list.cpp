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
        if(head==NULL) return NULL;
        ListNode* temp=head;
        while(temp->next!=NULL)
        {
            if(temp->val!=temp->next->val)
            {
                temp=temp->next;
            }
            else
            {
                ListNode* store=temp->next->next;
                ListNode* todelete=temp->next;
                delete todelete;
                temp->next=store;
            }
        }
        return head;
    }
};