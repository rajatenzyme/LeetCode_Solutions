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
    ListNode* reverseLL(ListNode* head){
        ListNode* curr = head, *prev = NULL;

        while(curr){
            swap(curr->next, prev);
            swap(prev, curr);
        }

        return prev;

    }


    ListNode* doubleIt(ListNode* head) {

        head = reverseLL(head);
        ListNode* temp = head;
        int carry = 0;
        while(temp){
            int val = temp->val * 2;
            int rem = carry + val % 10;
            carry = val /10;
            temp->val =  rem;
            temp = temp->next;
        }


        
        if(carry!=0){
            ListNode* new_node = new ListNode();
            new_node->val = carry;
            new_node->next = NULL;
            head = reverseLL(head);
            new_node -> next = head;
            return new_node;
        }

        else 
            return reverseLL(head);


        
    }
};