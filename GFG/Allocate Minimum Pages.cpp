class Solution {
  public:
    int findPages(vector<int> &arr, int k) {
        // code here
        if ( k>arr.size()){
            return -1;
        }
        int start=arr[0], end=0,mid;
        for(int i=0;i<arr.size();i++){
            if(start<arr[i]){
                start=arr[i];
            }
                end+=arr[i];
        }
        int ans; 
        while(start <= end){
            mid= end +  (start - end )/2;
            int count=1,sum=0;
            for(int i=0;i<arr.size();i++){
                sum += arr[i];
                if(sum > mid){
                    count++;
                    sum=arr[i];
                }
            }
            if(count <= k){
                end=mid-1;
                ans=mid;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};
