/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* reverse(ListNode*A){
    ListNode*c=A;
    ListNode*p=NULL;
    ListNode*n=NULL;
    while(c!=NULL){
        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }
    return p;
}
ListNode*middle(ListNode*A){
    if(A==NULL || A->next==NULL) return A;
    ListNode*slow=A;
    ListNode*fast=A;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
int Solution::lPalin(ListNode* A) {
    if(A==NULL) return 1;
    ListNode*mid=middle(A);
    ListNode*B=reverse(mid);
    while(A!=mid && B!=NULL){
        if((A->val)!=(B->val)) return false;
        A=A->next;
        B=B->next;
    }
    return true;
    
}
