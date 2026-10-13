class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> seen;
        seen[0] = 1;
        int prefix = 0, count = 0;

        for (int num : nums) {
            prefix += num;
            count += seen[prefix - k];
            seen[prefix]++;
        }
        return count;
    }
};