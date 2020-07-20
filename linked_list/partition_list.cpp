/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int B) {
    if(A==NULL || A->next==NULL) return A;
    ListNode*left=new ListNode(-1);
    ListNode*right=new ListNode(-1);
    ListNode*left_ptr=left;
    ListNode*right_ptr=right;
    while(A!=NULL){
        if(A->val<B){
            left_ptr->next=new ListNode(A->val);
            left_ptr=left_ptr->next;
        }
        else{
            right_ptr->next=new ListNode(A->val);
            right_ptr=right_ptr->next;
        }
        A=A->next;
    }
    left_ptr->next=right->next;
    return left->next;
    
}
