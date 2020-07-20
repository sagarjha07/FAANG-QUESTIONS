stack<int> s;
int min_ele=INT_MAX;
MinStack::MinStack() {
    while(!s.empty()) s.pop();
    min_ele=INT_MAX;
}
void MinStack::push(int x) {
    if(s.empty()){
        s.push(x);
        min_ele=x;
    }
    else{
        if(x>min_ele) s.push(x);
        else{
            s.push(2*x-min_ele);
            min_ele=x;
        }
    }
}

void MinStack::pop() {
    if(s.empty()) return;
    if(s.top()>min_ele) s.pop();
    else{
        min_ele=2*min_ele-s.top();
        s.pop();
    }
}

int MinStack::top() {
    if(s.empty()) return -1;
    if(s.top()>=min_ele) return s.top();
    else return min_ele;
}

int MinStack::getMin() {
    if(s.empty()) return -1;
    return min_ele;
}

