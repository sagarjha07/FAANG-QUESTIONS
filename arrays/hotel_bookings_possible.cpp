bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    sort(arrive.begin(),arrive.end());
    sort(depart.begin(),depart.end());
    int i=1;
    int j=0;
    int room_need=1;
    while(i<arrive.size() && j<depart.size()){
        if(arrive[i]<depart[j]){
            room_need+=1;
            i++;
        }
        else if(arrive[i]>=depart[j]){
            room_need-=1;
            j++;
        }
        if(room_need>K) return false;
    }
    return true;
}
