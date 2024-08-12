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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp = NULL;
        ListNode* ans = NULL;
        while(list1 and list2)
        {
            if(list1->val>list2->val)
            {
                if(ans==NULL)
                {
                    ans = list2;
                    temp =ans;
                }
                else{
                    ans->next = list2;
                    ans = ans->next;
                }
                list2 = list2->next;
            }
            else{
                if(ans==NULL)
                {
                    ans = list1;
                    temp = ans;
                }
                else{
                    ans->next = list1;
                    ans = ans->next;
                }
                list1 = list1->next;
            }
        }
        if(ans)
        cout<<ans->val<<endl;
        while(list1)
        {
                if(ans==NULL)
                {
                    ans = list1;
                    temp = ans;
                }
                else{
                    ans->next = list1;
                    ans = ans->next;
                }
            list1 = list1->next;
        }
        while(list2)
        {
                if(ans==NULL)
                {
                    ans = list2;
                    temp = ans;
                }
                else{
                    ans->next = list2;
                    ans = ans->next;
                }
            list2 = list2->next;
        }
        return temp;
    }
};