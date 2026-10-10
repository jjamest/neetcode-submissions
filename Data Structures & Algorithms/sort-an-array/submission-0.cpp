class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        // selection sort

        for (int i = 0; i < nums.size(); i++) {
            int nextMin = 50001;
            int idxMin;
            for (int j = i; j < nums.size(); j++) {
                if (nums[j] < nextMin) {
                    nextMin = nums[j];
                    idxMin = j;
                }
            }
            swap(nums[i], nums[idxMin]);
        }

        return nums;
    }
};