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
int size(ListNode*A){
    int ans=0;
    while(A!=NULL){
        ans+=1;
        A=A->next;
    }
    return ans;
}
ListNode* Solution::rotateRight(ListNode* A, int B) {
    if(A==NULL || A->next==NULL) return A;
    if(B==0) return A;
    if(B>size(A)){
    if(B%size(A)!=0){
        B=B%size(A);
    }
    else B=size(A);
    }
    ListNode*t=reverse(A);
    ListNode*c=t;
    ListNode*p=NULL;
    ListNode*n=NULL;
    int count=0;
    while(c!=NULL && count<B){
        n=c->next;
        c->next=p;
        p=c;
        c=n;
        count++;
    }
    if(c==NULL) return p;
    ListNode*d=reverse(c);
    t->next=d;
    return p;
}
