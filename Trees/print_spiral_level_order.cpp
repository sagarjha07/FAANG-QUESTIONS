void printSpiral(Node *root)
{
    if(root==NULL) return;
    stack<Node*> s1; // printing from right to left
    stack<Node*> s2; //printing from left to right
    s1.push(root);
    while(!s1.empty() || !s2.empty()){
        while(!s1.empty()){
            Node*f=s1.top();
            s1.pop();
            cout<<f->data<<" ";
            if(f->right) s2.push(f->right); // since s2 print the data from left to  right 
            if(f->left) s2.push(f->left);// therefore, we will push right child first
        }
        while(!s2.empty()){
            Node*w=s2.top();
            s2.pop();
            cout<<w->data<<" ";
            if(w->left) s1.push(w->left);// since s1 print data from right to left
            if(w->right) s1.push(w->right);// therefor, we will push left child first
        }
    }
}