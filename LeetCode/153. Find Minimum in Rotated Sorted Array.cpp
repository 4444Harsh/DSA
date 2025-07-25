class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0, end = nums.size() - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] > nums[end]) {
                // Min must be to the right of mid
                start = mid + 1;
            } else {
                // Min is at mid or to the left of mid
                end = mid;
            }
        }

        return nums[start]; // start == end at this point
    }
};
