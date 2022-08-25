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
        vector<int> vec;
        int ans=0;
        while(head !=NULL){
            vec.push_back(head->val);
            head=head->next;
        }
        for(int i=vec.size()-1;i>-1;i--){
            ans+=(vec[i]*(pow(2,(vec.size()-i-1))));
        }
        return ans;
    }
};