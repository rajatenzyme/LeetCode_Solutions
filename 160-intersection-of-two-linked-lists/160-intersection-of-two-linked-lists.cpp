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
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
            int c1=0,c2=0;
            ListNode *temp1 = head1;
            ListNode *temp2 = head2;
            while(temp1!=NULL){
                c1++;
                temp1 = temp1->next;

            }
             while(temp2!=NULL){
                c2++;
                temp2 = temp2->next;
            }
            //cout<<c1<<" "<<c2<<endl;

            int length = abs(c1-c2);

            ListNode *head3, *head4;
            if(c1>c2){
                head3 = head1;
                head4 = head2;

            }
            else{
                head3 = head2;
                head4 = head1;
            }

            while(length!=0){
                length--;
                head3 = head3->next;
            }
            //cout<<head4->data;
            while(head3!=NULL && head4!=NULL){
                if(head3==head4)
                     return head3;

                head3 = head3->next;
                head4 = head4->next;

            }

           return NULL;
    
        
    }
};