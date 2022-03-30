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
        
        ListNode *tmp = head;
        int l = 0;
        while(tmp!=NULL){
            tmp = tmp -> next;
            l++;
        }

        
        int k = l - n;
       
        
        ListNode* newnode = head;
        ListNode* prev = head;
        if(k==0)
            head = head->next;
        else if(newnode!=NULL){
            for(int i=0;i<k;i++){
                prev=newnode;
                newnode=newnode->next;
            }
            prev->next=newnode->next;   
        }
       
        return head;
        
        
    }
};