/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* reverse_in_pairs(ListNode*A,int K){
    ListNode* c=A;
    ListNode* p=NULL;
    ListNode* n=NULL;
    int count=0;
    while(c!=NULL && count<K){
        n=c->next;
        c->next=p;
        p=c;
        c=n;
        count++;
    }
    if(c!=NULL) A->next=reverse_in_pairs(c,K);
    return p;
}
ListNode* Solution::swapPairs(ListNode* A) {
    if(A==NULL || A->next==NULL) return A;
    return reverse_in_pairs(A,2);
}
