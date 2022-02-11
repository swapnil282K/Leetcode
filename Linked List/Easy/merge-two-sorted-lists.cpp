//Approach 1
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        if(!l2) return l1;
        if(l1->val<l2->val)
        {
            l1->next= mergeTwoLists(l1->next,l2);
                return l1;
        }
        else
        {
            l2->next= mergeTwoLists(l1,l2->next);
            return l2;
        }
        
    }
};

//Approach2
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
    ListNode* solve(ListNode* l1, ListNode* l2)
    {
        if(l1->next==NULL)
        {
            l1->next=l2;
            return l1;
        }
        ListNode* curr1=l1;
        ListNode* curr2=l2;
        ListNode* next1=l1->next;
        ListNode* next2=l2->next;
        while(next1!=NULL && curr2!=NULL)
        {
            if((curr2->val>=curr1->val) &&
               (curr2->val<=next1->val))
            {
                curr1->next=curr2;
                next2=curr2->next;
                curr2->next=next1;
                
                curr1=curr2;
                curr2=next2;
            }
            else
            {
                curr1=next1;
                next1=next1->next;
                if(next1==NULL)
                {
                    curr1->next=curr2;
                    return l1;
                }
            }
        }
        return l1;
        
    }
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        if(!l2) return l1;
        if(l1->val<l2->val) 
        {
            return solve(l1,l2);
        }
        else
        {
            return solve(l2,l1);
        }
        
    }
};