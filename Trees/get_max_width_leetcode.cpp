    int widthOfBinaryTree(TreeNode* root) {
    if(root==NULL) return 0;
    queue<pair<TreeNode*,long long>> q;
    long long res=0;
    q.push({root,1});
        while(!q.empty()){
		long long start = q.front().second, end = q.front().second;
		int k = q.size();
		while(k--){
			TreeNode *temp = q.front().first;
			end = q.front().second;
			q.pop();
			if(temp->left)
				q.push({temp->left,(2*end)%INT_MAX});
			if(temp->right)
				q.push({temp->right,(2*end+1)%INT_MAX});
		}
		if(res<(end-start+1)) res=end-start+1;
	}
	return res;
}
