class Solution {
public:
    string minWindow(string s, string t) {
        // find first starting l
        // keep moving until t runs out
        // record that res
        // move l up to r
        // repeat??

        vector<int> need(128);
        for (char c : t) {
            need[c]++;
        }

        int l = 0;
        int bestLength = INT_MAX;
        int bestStart = 0;
        int missing = t.size();

        for (int r = 0; r < s.size(); r++) {
            char c = s[r];

            if (need[c] > 0) {
                missing--;
            }
            need[c]--;

            while (missing == 0) {
                int length = r - l + 1;
                if (length < bestLength) {
                    bestLength = length;
                    bestStart = l;
                }

                char left = s[l];
                l++;
                need[left]++;

                if (need[left] > 0) {
                    missing++;
                }
            }
        }

        return bestLength == INT_MAX ? "" : s.substr(bestStart, bestLength);
    }
};
