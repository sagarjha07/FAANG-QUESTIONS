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
    ListNode*n;
    while(c!=NULL){
        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }
    return p;
}
int size(ListNode* A){
    int ans=0;
    while(A!=NULL){
        A=A->next;
        ans+=1;
    }
    return ans;
}
ListNode* middle( ListNode*A){
     ListNode*slow=A;
      ListNode*fast=A;
      while(fast!=NULL && fast->next!=NULL){
          fast=fast->next->next;
          slow=slow->next;
      }
      return slow;
}
ListNode* Solution::reorderList(ListNode* A) {
    if(A==NULL || A->next==NULL) return A;
    int len=size(A);
    ListNode*c1=A;
    ListNode*ans=c1;
     ListNode*mid=middle(A);
    ListNode*c2=reverse(mid);
    ListNode*n1;
    ListNode*n2;
    int count;
    if((len%2)==0){
        count=(len/2)-1;
        while(count--){
            n1=c1->next;
            n2=c2->next;
            c1->next=c2;
            c2->next=n1;
            c1=n1;
            c2=n2;
        }
        n1->next=n2;
        n2->next=NULL;
    }
    else{
        int count=len/2;
        while(count>0){
            n1=c1->next;
            n2=c2->next;
            c1->next=c2;
            c2->next=n1;
            c1=n1;
            c2=n2;
            count-=1;
        }
        c1->next=NULL;
    }
    return A;
}
