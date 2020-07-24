#include<bits/stdc++.h>
using namespace std;
vector<int> gr[10001];
bool visited[10001];
void dfs(int i){
	visited[i]=true;
	for(auto neigh:gr[i]){
		if(!visited[neigh]){
			dfs(neigh);
		}
	}
}
int main(){
	int n,e;
	cin>>n>>e;
	for(int i=0;i<e;i++){
		int x,y;
		cin>>x>>y;
		gr[x-1].push_back(y-1);
		gr[y-1].push_back(x-1);
	}
	memset(visited,0,sizeof(visited));
	int comp=0;
	for(int i=0;i<n;i++){
		if(!visited[i]){
			dfs(i);
			comp++;
		}
	}
	cout<<comp<<endl;
}