int findLongestConseqSubseq(int arr[], int N)
{
    int n=N;
  set<int> s;
  for(int i=0;i<n;i++) s.insert(arr[i]);
  int len=0;
  int max_len=INT_MIN;
  for(int i=0;i<n;i++){
      if(s.find(arr[i]-1)==s.end()){
          int j=arr[i];
          while(s.find(j)!=s.end()){
              len+=1;
              j++;
          }
          max_len=max(max_len,len);
          len=0;
      }
  }
  return max_len;
}