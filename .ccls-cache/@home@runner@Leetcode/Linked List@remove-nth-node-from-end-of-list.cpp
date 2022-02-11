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
    int getlength(ListNode* head)
    {
        int len=0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            len++;
            temp=temp->next;
        }
        return len;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL)
        {
            return NULL;
        }
        int ans=getlength(head)-n;
        if(ans==0)
        {
            head=head->next;
            return head;
        }
        int cnt=0;
        ListNode* temp=head;
        ListNode* prev=NULL;
        while(cnt<ans)
        {
         prev=temp;
         temp=temp->next;  
         cnt++;
        }
        prev->next=temp->next;
        return head;
    }
};