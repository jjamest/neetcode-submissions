class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";

        int j = 0;
        char c = strs[0][j];
        while (j < strs[0].size()) {
            for (int i = 0; i < strs.size(); i++) {
                if (j > strs[i].size() || strs[i][j] != c) {
                    return ans;
                }
            }
            j++;
            c = strs[0][j];
            ans = strs[0].substr(0, j);
        }
        return ans;
    }
};