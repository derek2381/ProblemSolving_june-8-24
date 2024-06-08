// problem link
// https://leetcode.com/problems/middle-of-the-linked-list/description/

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
        int c = 0;

        ListNode* temp = head;

        while(temp != nullptr){
            c++;
            temp = temp->next;
        }
        temp = head;
        ListNode* s = temp;

        while(temp->next != nullptr && temp->next->next != nullptr){
            temp = temp->next->next;
            s = s->next;
        }

        if(c%2 == 0){
            return s->next;
        }else{
            return s;
        }


    }
};
