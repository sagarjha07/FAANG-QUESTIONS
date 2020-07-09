int peakElement(int arr[], int n)
{
   int s=0;
   int e=n-1;
   while(s<=e){
       int mid=s+(e-s)/2;
       if(mid>0 && mid<n-1){
           if(arr[mid]>=arr[mid-1] && arr[mid]>=arr[mid+1]) return mid;
           else if(arr[mid]<arr[mid+1]) s=mid+1;
           else e=mid-1;
       }
       if(mid==0){
           if(arr[mid]>=arr[mid+1]) return mid;
           else return mid+1;
       }
       if(mid==n-1){
           if(arr[mid]>=arr[mid-1]) return mid;
           else return mid-1;
       }
   }
   return -1;
}