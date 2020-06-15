int getMiddle(Node *head)
{
    if(head==NULL) return -1;
    Node*slow=head;
    Node*fast=head;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow->data;
}