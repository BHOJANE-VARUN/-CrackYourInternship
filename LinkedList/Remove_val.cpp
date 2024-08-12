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
        ListNode* nex = head;
        while(nex and nex->next)
        {
            if(nex->next->val==val)
            {
                nex->next = nex->next->next;
            }
            else nex = nex->next;
        }
        if(head and head->val==val) head = head->next;
        return head;
    }
};