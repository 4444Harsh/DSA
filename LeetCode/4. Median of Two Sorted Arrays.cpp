class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size1=nums1.size();
        int size2=nums2.size();
        int start=0;
        for(auto i:nums2){
            nums1.push_back(i);
        }
        sort(nums1.begin() , nums1.end());

        int s=nums1.size();
        if(s % 2 != 0){
            int mid = s/2;
            return nums1[mid];
        }else{
            int mid=s/2;
            return (nums1[mid] + nums1[mid-1])/2.0;
        }
    }
};
