
vector<vector<int> > Solution::subsets(vector<int> &A) {
   if(A.size()==0){
       vector<vector<int>> a;
       vector<int> p;
       a.push_back(p);
       return a;
   }
   int ch=A[0];
   A.erase(A.begin());
   vector<vector<int>> res=subsets(A);
   vector<vector<int>> ans;
   for(auto it:res){
       it.insert(it.begin(),ch);
       sort(it.begin(),it.end());
       ans.push_back(it);
   }
   for(auto it:res){
       sort(it.begin(),it.end());
       ans.push_back(it);
   }
   sort(ans.begin(),ans.end());
   return ans;
}
