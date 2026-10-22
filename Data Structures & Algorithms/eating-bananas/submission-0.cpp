class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        

        int l = 1, r = *max_element(piles.begin(), piles.end());

        int res = r;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            
            int currentH = 0;
            for (int p : piles) {
                currentH += ceil(static_cast<double>(p) / mid);
            }
            
            if (currentH <= h) {
                r = mid - 1;
                res = mid;
            } else {
                l = mid + 1;
            }
        }

        return res;
    }
};
