class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        // code here
        int start=0,end=arr.size(),mid;
        int ans=-1;
        while(start<=end){
            mid=end+ (start-end)/2;
            if(arr[mid]==k){
               ans = mid;
               end=mid-1;
            }else if(arr[mid]>k){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return ans;
    }
};
