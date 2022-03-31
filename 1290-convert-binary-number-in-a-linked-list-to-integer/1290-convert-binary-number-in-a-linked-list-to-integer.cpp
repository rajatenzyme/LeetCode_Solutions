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
    int getDecimalValue(ListNode* head) {
        
        int n = 0;
        
        ListNode *tmp = head;
        
        while(tmp!=NULL){
            tmp = tmp->next;
            n++;
        }
        
        //cout<<n;
        
        int sum = 0;
        
        while(head!=NULL){
            sum += (head->val) * pow(2,n-1);
            head = head->next;
            n--;
        }
        
        return sum;
        
    }
};