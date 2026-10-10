class Solution {
   public:
    int longestPalindrome(string s) {
        unordered_map<char, int> h;

        for (int i = 0; i < s.size(); i++) {
            h[s[i]]++;
        }


        int res = 0;
        for (auto &p : h) {
            int c = p.second;

            if (c % 2 == 0) {
                res += c;
                p.second -= c;
            } else {
                res += c - 1;
                p.second -= c - 1;
            }
        }

        // middle character
        for (auto p : h) {
            if (p.second == 1) {
                res++;
                break;
            }
        }


        return res;
    }
};