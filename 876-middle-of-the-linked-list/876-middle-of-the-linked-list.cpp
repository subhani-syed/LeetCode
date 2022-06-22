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
        int len = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            temp = temp->next;
            len++;
        }
        int mid;
        temp = head;
        if(len%2==0){
            mid = len/2 + 1;
            while(mid>1){
                temp = temp->next;
                mid--;
            }
        }else{
            mid = len/2;
            int target = 0;
            while(target<mid){
                temp = temp->next;
                target++;
            }
            return temp;
        }
        return temp;
    }
};