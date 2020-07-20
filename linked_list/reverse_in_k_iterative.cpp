/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A, int B) {
    if(A==NULL || A->next==NULL) return A;
    if(B<=1) return A;
    ListNode*c=A;
    ListNode*p;
    ListNode*n;
    ListNode*start;
    ListNode*end;
    int count,sublist_count=0;
    while(c!=NULL){
        p=NULL;
        count=0;
        start=c;
        n=NULL;
        while(c!=NULL && count<B){
            n=c->next;
            c->next=p;
            p=c;
            c=n;
            count++;
        }
        sublist_count++;
        if(sublist_count==1){
            A=p;
        }
        else{
            end->next=p;
        }
        end=start;
    }
    return A;
}
