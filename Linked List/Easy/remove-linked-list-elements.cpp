//Approach1
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
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) return head;
        ListNode* temp=head;
        while(temp!=NULL)
        {
                if(temp->next && temp->next->val==val)
                {
                    temp->next=temp->next->next;
                }
            else
            {
                temp=temp->next;
            }
        }
        if(head->val==val)
        {
            head=head->next;
        }
        return head;
    }      
};

//Approach2
ListNode* removeElements(ListNode* head, int val) {
        
        if(!head)return head;
        
        ListNode* p=head;
        ListNode* q=head->next;
        
        while(p && q){
            if(q->val == val){
                p->next=q->next;
                delete q;
                q=p->next;
            }else{
                p=p->next;
                q=q->next;
            }
        }
        if(head->val == val){
            ListNode* ptr=head;
            head=head->next;
            delete ptr;
        }
        return head;
    }