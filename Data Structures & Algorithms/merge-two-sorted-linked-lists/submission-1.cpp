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
        if(list1!=NULL&&list2!=NULL){
            if(list1->val>list2->val){
                swap(list1,list2);
            }
        }
        ListNode* head = list1;
        if(head==NULL)return list2;
        while(head!=NULL){
            if(list2!=NULL&&list2->val >=head->val){
                if(head->next==NULL){
                    head->next=list2;
                    break;
                }
                else if(head->next->val>list2->val){
                ListNode* ne = list2->next;
                list2->next=head->next;
                head->next=list2;
                list2=ne;
                }
            }
            head=head->next;
        }

        return list1;
    }
};
