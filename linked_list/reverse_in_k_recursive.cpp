/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A, int B) {
    if(B<=1) return A;
    ListNode*c=A;
        ListNode*p=NULL;
        int count=0;
        ListNode*n=NULL;
        while(c!=NULL && count<B){
            n=c->next;
            c->next=p;
            p=c;
            c=n;
            count++;
        }
        if(c!=NULL) A->next=reverseList(c,B);
        return p;
}
