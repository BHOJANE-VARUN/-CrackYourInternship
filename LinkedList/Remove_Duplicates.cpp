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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return head;
       // ListNode* prev = head;
        ListNode* temp = head;
        ListNode* nex = head;
        while(nex and nex->next)
        {   
            if(nex->next->val==nex->val)
            {
                nex->next = nex->next->next;
            }
            else{
                nex = nex->next;
            }
        }
        return temp;
    }
};