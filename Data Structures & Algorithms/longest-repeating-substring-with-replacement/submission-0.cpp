class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int res = 0;

        vector<int> chars(26);

        for (int r = 0; r < s.size(); r++) {
            chars[s[r] - 'A']++;
            int cCount = 0;
            for (int i = 0; i < 26; i++) {
                if (chars[i] > cCount) {
                    cCount = chars[i];
                }
            }
            while (r - l + 1 - cCount > k) {
                chars[s[l] - 'A']--;
                l++;
            }
            res = max(res, r - l + 1);
        }

        return res;
    }
};
