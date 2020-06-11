#include<iostream>
#include<stack>
using namespace std;
void stock_span(int*a,int n){
	stack<int> s;
	for(int i=0;i<n;i++){
		while(!s.empty() && a[s.top()]<a[i]){
			s.pop();
		}
		int ans=s.empty()?i+1:i-s.top()+1;
		cout<<ans<<" ";
		s.push(i);
	}
	return;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	stock_span(a,n);
return 0;
}