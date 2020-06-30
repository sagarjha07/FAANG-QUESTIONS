#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int d){
        data=d;
        next=NULL;
    }
};
bool check_pair(node*head,int k){
    unordered_set<int> s;
    node*temp=head;
    while(temp!=NULL){
        int curr=temp->data;
        if(k%curr==0 && s.find(k/curr)!=s.end())
        return true;
        s.insert(curr);
        temp=temp->next;
    }
    return false;
}
void print(node*head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<endl;
}
void insert_at_head(node*&head,int d){
    node*n=new node(d);
    n->next=head;
    head=n;
}
int main() {
    node*head=NULL;
    insert_at_head(head,5);
    insert_at_head(head,4);
    insert_at_head(head,3);
    insert_at_head(head,2);
    insert_at_head(head,1);
    print(head);
    int k;
    cin>>k;
    if(check_pair(head,k)) cout<<"It exists"<<endl;
    else cout<<"No"<<endl;
}
