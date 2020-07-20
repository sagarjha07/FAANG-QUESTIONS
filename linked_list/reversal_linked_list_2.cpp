/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* reverse(ListNode*A){
    if(A==NULL || A->next==NULL) return A;
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
ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
    if(A==NULL || A->next==NULL) return A;
    ListNode*prev1=A;
    ListNode*temp1=A;
    ListNode*prev2=A;
    ListNode*temp2=A;
    B=B-1;
    if(B==0){
        while(C>0){
        prev2=temp2;
        temp2=temp2->next;
        C--;
    }
        prev2->next=NULL;
        ListNode*s=reverse(A);
        A->next=temp2;
        return s;
    }
    while((B)>0){
        prev1=temp1;
        temp1=temp1->next;
        B--;
    }
    while(C>0){
        prev2=temp2;
        temp2=temp2->next;
        C--;
    }
    prev1->next=NULL;
    prev2->next=NULL;
    ListNode*s=reverse(temp1);
    prev1->next=s;
    temp1->next=temp2;
    return A;
}
