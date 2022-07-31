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
    ListNode* middleNode(ListNode* head) {
        vector<int> vec;
        ListNode *temp=head;
        while(temp){
            vec.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=0;i<vec.size()/2;i++){
            head=head->next;   
        }
         return head;   
    }
};