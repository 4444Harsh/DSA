class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index=1,note=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i] != note){
                nums[index]=nums[i];
                note=nums[i];
                index++;
            }
        }
        return index;
    }
};
