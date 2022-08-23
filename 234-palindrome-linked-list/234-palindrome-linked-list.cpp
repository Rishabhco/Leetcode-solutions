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
    bool isPalindrome(ListNode* head) {
        vector<int> vec,vec1;
        while(head){
            vec.push_back(head->val);
            head=head->next;
        }
        vec1=vec;
        reverse(vec1.begin(),vec1.end());
        if(vec1==vec)
            return true;
        return false;
    }
};


 
