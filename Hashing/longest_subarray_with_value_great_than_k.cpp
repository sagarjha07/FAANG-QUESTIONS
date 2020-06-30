#include <iostream>
#include<climits>
using namespace std;
int longest_subarray_with_ele_great_than_k(int*a,int n,int k){
    int count=0;
    int max_len=0;
    for(int i=0;i<n;i++){
        if(a[i]>k) count+=1;
        else{
            max_len=max(max_len,count);
            count=0;
        }
    }
    return max_len;
}
int main() {
    int a[] = { 8, 25, 10, 19, 19, 18, 20, 11, 18 }; 
    int n = sizeof(a) / sizeof(a[0]); 
    int k = 13; 
   cout<<longest_subarray_with_ele_great_than_k(a,n,k)<<endl;
}
