class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> h;

        for (int n : nums) {
            h[n]++;
        }

        int n = nums.size();

        for (auto p : h) {
            if (p.second > n / 2) {
                return p.first;
            }
        }

        return 0;
    }
};