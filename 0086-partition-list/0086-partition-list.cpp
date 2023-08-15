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
    void insertail(ListNode* &head1,ListNode* &tail1,int x)
    {
         ListNode* newnode = new ListNode(x);
         if(head1==NULL && tail1==NULL)
         {
             head1=newnode;
             tail1=newnode;
         }
         else
         {
             tail1->next=newnode;
         }
         tail1=newnode;
    }
    ListNode* partition(ListNode* head, int x) {
        vector<int> ls;
        vector<int> gs;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            if(temp->val<x)
            {
                ls.push_back(temp->val);
            }
            else if(temp->val>=x)
            {
                gs.push_back(temp->val);
            }
            temp=temp->next;
        }
        ListNode* head1=NULL;
        ListNode* tail1=NULL;
        for(int i=0;i<ls.size();i++)
        {
            insertail(head1,tail1,ls[i]);
        }
        for(int i=0;i<gs.size();i++)
        {
            insertail(head1,tail1,gs[i]);
        }
        return head1;
    }
};