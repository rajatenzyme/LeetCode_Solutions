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

    ListNode* swapPairs(ListNode* head) {
        // if (!head or !head->next) return head;
        // ListNode *curr = head, *next = head->next;
        // while (next and next->next)
        // {
        //     swap(curr->val, next->val);
        //     curr = curr->next->next, next = next->next->next;
        // }
        // if (curr and next) swap(curr->val, next->val);
        // return head;
        
        if(!head || !head->next)
            return head;
        
        ListNode * node1 = head;
        ListNode * node2 = head->next;
        
        
        while(node2 && node2->next){
            
            swap(node1->val, node2->val);
            node1 = node1->next->next;
            node2 = node2->next->next;
        
        }
        
        if(node1 && node2)
            swap(node1->val, node2->val);
        
        return head;
        
    }
};