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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,int>ump;
        ListNode *out = NULL;
        while(headA!=NULL){
            ump[headA]++;
            headA = headA->next;
        }
        while(headB!=NULL){
            if(ump[headB]>0){
                out = headB;
                break;
            }
            headB = headB->next;
        }
        return out;
    }
};