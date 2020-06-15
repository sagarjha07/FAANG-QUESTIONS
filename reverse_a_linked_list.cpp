Node* reverseList(Node *head)
{
  Node*c=head;
  Node*p=NULL;
  Node*n=NULL;
  while(c!=NULL){
      n=c->next;
      c->next=p;
      p=c;c=n;
  }
  return p;
}