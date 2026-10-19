class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();

        deque<int> d;
        vector<int> res;

        for (int r = 0; r < n; r++) {
            while (!d.empty() && r - k >= d.front()) {
                d.pop_front();
            }

            while (!d.empty() && nums[d.back()] <= nums[r]) {
                d.pop_back();
            }

            d.push_back(r);

            if (r + 1 >= k) {
                res.push_back(nums[d.front()]);
            }
        }

        return res;
    }
};
