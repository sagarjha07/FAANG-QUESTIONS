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
    unordered_map<int,int> mp;
    ListNode*temp=A;
    while(temp!=NULL){
        mp[temp->val]+=1;
        temp=temp->next;
    }
    ListNode*t=A;
    while(t!=NULL){
        if(mp[t->val]==1){
            A=t;
            break;
        }
        t=t->next;
    }
    if(t==NULL)return NULL;
    ListNode*prev=A;
    temp=A->next;
    while(temp!=NULL){
        while(temp!=NULL && mp[temp->val]>1){
            temp=temp->next;
        }
        prev->next=temp;
        prev=temp;
        if(temp!=NULL) temp=temp->next;
    }
    return A;
}
