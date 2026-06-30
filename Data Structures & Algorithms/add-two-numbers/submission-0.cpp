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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1=l1;
        ListNode* t2=l2;
        ListNode* head=new ListNode(-1);
        int carry=0;
        ListNode* temp=head;
        while(t1 && t2){
            int sum=t1->val+t2->val;
            sum+=carry;
            if(sum>=10) carry=1;
            else carry=0;
            sum=sum%10;
            ListNode* newNode=new ListNode(sum);
            temp->next=newNode;
            temp=newNode;
            t1=t1->next;
            t2=t2->next;
        }
        while(t1){
            int sum=t1->val;
            sum+=carry;
            if(sum>=10) carry=1;
            else carry=0;
            sum=sum%10;
            ListNode* newNode=new ListNode(sum);
            temp->next=newNode;
            temp=newNode;
            t1=t1->next;
        }
        while(t2){
            int sum=t2->val;
            sum+=carry;
            if(sum>=10) carry=1;
            else carry=0;
            sum=sum%10;
            ListNode* newNode=new ListNode(sum);
            temp->next=newNode;
            temp=newNode;
            t2=t2->next;
        }
        if(carry){
            ListNode* newNode=new ListNode(1);
            temp->next=newNode;
        }
        return head->next;
    }
};
