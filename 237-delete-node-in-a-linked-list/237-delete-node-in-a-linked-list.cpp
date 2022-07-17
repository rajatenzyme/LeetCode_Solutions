/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        
        //If only one node available
        if(node->next == NULL)
            delete node;
        
        //Now first swap the value of curr to next node
        // 4 5 1 9 => delete 5
        // 4 1 5 9
        
        swap(node->val, node->next->val);
        
        //ListNode * temp = node -> next;
        
        node->next = node->next->next;
        
        //delete temp;
        
        
    }
};