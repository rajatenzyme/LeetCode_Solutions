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

    ListNode* reverseLL(ListNode *head){
        ListNode *curr = head, *prev = NULL, *next = NULL;

        while(curr){
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }

        return prev;

    }

    bool isPalindrome(ListNode* head) {

        
        ListNode *slow = head;
        ListNode *fast = head;

        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast ->next -> next;
        }

        slow = reverseLL(slow->next);

        while(slow){
            if(head->val != slow->val)
                return false;
            slow = slow -> next;
            head = head -> next;
        }

        return true;
      

    }
};