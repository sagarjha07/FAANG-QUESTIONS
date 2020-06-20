#include<iostream>
#include<stack>
using namespace std;
void stock_span(int*a,int n,int *ans){
	stack<int> s;
	for(int i=0;i<n;i++){
	    if(s.empty()){
	        ans[i]=i+1;
	    }
	    else if(!s.empty() && a[i]<a[s.top()]){
	        ans[i]=i-s.top();
	    }
	    else{
	        while(!s.empty() && a[i]>=a[s.top()]){
	            s.pop();
	        }
	        ans[i]=s.empty()?i+1:i-s.top();
	    }
	    s.push(i);
	}
	return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int ans[n];
	stock_span(a,n,ans);
	for(int i=0;i<n;i++) cout<<ans[i]<<" ";
	cout<<endl;
    }
return 0;
}