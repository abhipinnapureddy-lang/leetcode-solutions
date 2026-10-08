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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int x=0;
        while(temp->next!=NULL)
        {
            x++;
            temp=temp->next;
        }
         if(n == x+1) {
            ListNode* t = head;
            head = head->next;
            delete t;
            return head;
        }
        temp=head;
        for(int i=1;i<=x-n;i++)
        {
            temp=temp->next;
        }
        
        ListNode* t = temp->next;
        temp->next = t->next;
        delete t;
        return head;
    }
};