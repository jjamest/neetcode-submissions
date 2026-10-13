class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> h;

        for (int n : nums) {
            h[n]++;
        }

        vector<int> res;

        for (pair<int, int> p : h) {
            if (p.second > nums.size() / 3) {
                res.push_back(p.first);
            }
        }

        return res;
    }
};