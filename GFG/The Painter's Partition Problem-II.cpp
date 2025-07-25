// User function template for C++

class Solution {
  public:
    int minTime(vector<int>& arr, int k) {
        // code here
        int start=arr[0],end,mid;
        for(int i=0;i<arr.size();i++){
            end+=arr[i];
            if(start<arr[i]){
                start=arr[i];
            }
        }
        int ans=end;
        while(start <= end){
            mid = (start+end)/2;
            int sum=0,count=1;
            for(int i=0;i<arr.size();i++){
                sum+=arr[i];
                if(sum>mid){
                    sum=arr[i];
                    count++;
                }
            }
            if(count <= k){
                end=mid-1;
                ans = (ans > mid) ? mid : ans;
            }else{
                start=mid+1;
            }
        }
        return ans;
        // return minimum time
    }
};
