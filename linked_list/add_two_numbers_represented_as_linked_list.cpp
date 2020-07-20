/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    if(A==NULL && B==NULL) return new ListNode(0);
    if(A==NULL) return B;
    if(B==NULL) return A;
    ListNode*temp;
    ListNode*prev=NULL;
    ListNode*res=NULL;
    int carry=0;
    while(A!=NULL || B!=NULL){
        int sum=carry+(A?A->val:0)+(B?B->val:0);
        carry=(sum>=10)?1:0;
        sum=sum%10;
        temp=new ListNode(sum);
        if(res==NULL){
            res=temp;
        }
        else{
            prev->next=temp;
        }
        prev=temp;
        if(A) A=A->next;
        if(B) B=B->next;
    }
    if(carry>0) temp->next=new ListNode(carry);
    return (res);
}
