int Solution::solve(vector<vector<int> > &A) {
    vector<int> arr;
    vector<int> dep;
    for(int i=0;i<A.size();i++){
        arr.push_back(A[i][0]);
    }
    for(int i=0;i<A.size();i++){
        dep.push_back(A[i][1]);
    }
    sort(arr.begin(),arr.end());
    sort(dep.begin(),dep.end());
    int i=1;
    int j=0;
    int room_needed=1;
    int min_room=0;
    while(i<arr.size() && j<dep.size()){
        if(arr[i]<dep[j]){
            room_needed++;
            i++;
        }
        else if(arr[i]>=dep[j]){
            room_needed--;
            j++;
        }
        min_room=max(min_room,room_needed);
    }
    return min_room;
}
