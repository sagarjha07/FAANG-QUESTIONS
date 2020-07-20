/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int size(ListNode*A){
    int count=0;
    while(A!=NULL){
        count+=1;
        A=A->next;
    }
    return count;
}
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    if(A==NULL) return A;
    if(A->next==NULL && B==1) return NULL;
    if(B>=size(A)) return A->next;
    ListNode*fast=A;
    ListNode*slow=A;
    ListNode*prev=A;
    B=B-1;
    while(B>0){
        fast=fast->next;
        B--;
    }
    while(fast->next!=NULL){
        prev=slow;
        slow=slow->next;
        fast=fast->next;
    }
    prev->next=slow->next;;
    return A;
}
