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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int> vec;
        while(head){
            vec.push_back(head->val);
            head=head->next;
        }
        int temp=vec[k-1];
        vec[k-1]=vec[vec.size()-k];
        vec[vec.size()-k]=temp;
        ListNode *ans=new ListNode(vec[0]);
        ListNode *root=ans;
        for(int i=1;i<vec.size();i++){
            ListNode *temp=new ListNode(vec[i]);
            root->next=temp;
            root=temp;
        }
        return ans;
    }
};