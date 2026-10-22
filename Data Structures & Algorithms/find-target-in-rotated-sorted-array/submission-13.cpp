class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (nums[mid] == target) {
                return mid;
            }

            if (nums[mid] >= nums[l]) {
                //left side
                if (nums[l] > target || nums[mid] < target) {
                    //target is on right side
                    l = mid + 1;
                } else {
                    //target is on left side
                    r = mid - 1;
                }
            } else {
                // right side
                if (nums[r] >= target && target > nums[mid]) {
                    //target on right
                    l = mid + 1;
                } else {
                    //target on left
                    r = mid - 1;
                }
            }

            
        }

        return -1; 
    }
};
