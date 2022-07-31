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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *prev=NULL,*root=head;
        while(root){
            if(prev==NULL && root->val==val){
                head=root->next;
                root=root->next;
            }else{
                if(root->val ==val){
                     if(root->next==NULL){
                        prev->next=NULL;
                        root=prev;
                    }else{
                        prev->next=root->next;
                        root=root->next;
                    }
                }else{
                    prev=root;
                    root=root->next;
                } 
            }
        }
        return head;
    }
};