/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    if(A==NULL || A->next==NULL) return A;
    ListNode*prev=A;
    ListNode*temp=A->next;
    while(temp!=NULL){
        while(temp!=NULL && temp->val==prev->val){
        temp=temp->next;
    }
    prev->next=temp;
    prev=temp;
    if(temp!=NULL) temp=temp->next;
  }
  return A;  
}
